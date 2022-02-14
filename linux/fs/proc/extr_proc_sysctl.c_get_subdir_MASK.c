
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ctl_table_set {int dummy; } ;
struct TYPE_3__ {int nreg; struct ctl_table_set* set; } ;
struct ctl_dir {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ctl_dir* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ctl_dir*) ;
 int FUNC_2 (struct ctl_dir*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct ctl_dir* FUNC_4 (struct ctl_dir*,char const*,int) ;
 int FUNC_5 (struct ctl_dir*,TYPE_1__*) ;
 struct ctl_dir* FUNC_6 (struct ctl_table_set*,char const*,int) ;
 int FUNC_7 (char*,int,int,char const*,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_2 ;
 int FUNC_11 (struct ctl_dir*) ;

__attribute__((used)) static struct ctl_dir *FUNC_12(struct ctl_dir *VAR_3,
      const char *VAR_4, int VAR_5)
{
 struct ctl_table_set *VAR_6 = VAR_3->header.set;
 struct ctl_dir *VAR_7, *VAR_8 = ((void*)0);
 int VAR_9;

 FUNC_9(&VAR_2);
 VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5);
 if (!FUNC_1(VAR_7))
  goto found;
 if (FUNC_2(VAR_7) != -VAR_0)
  goto failed;

 FUNC_10(&VAR_2);
 VAR_8 = FUNC_6(VAR_6, VAR_4, VAR_5);
 FUNC_9(&VAR_2);
 VAR_7 = FUNC_0(-VAR_1);
 if (!VAR_8)
  goto failed;


 VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5);
 if (!FUNC_1(VAR_7))
  goto found;
 if (FUNC_2(VAR_7) != -VAR_0)
  goto failed;


 VAR_9 = FUNC_5(VAR_3, &VAR_8->header);
 VAR_7 = FUNC_0(VAR_9);
 if (VAR_9)
  goto failed;
 VAR_7 = VAR_8;
found:
 VAR_7->header.nreg++;
failed:
 if (FUNC_1(VAR_7)) {
  FUNC_8("sysctl could not get directory: ");
  FUNC_11(VAR_3);
  FUNC_7("/%*.*s %ld\n",
   VAR_5, VAR_5, VAR_4, FUNC_2(VAR_7));
 }
 FUNC_3(&VAR_3->header);
 if (VAR_8)
  FUNC_3(&VAR_8->header);
 FUNC_10(&VAR_2);
 return VAR_7;
}
