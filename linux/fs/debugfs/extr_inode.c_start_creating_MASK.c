
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_6__ {struct dentry* mnt_root; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct dentry* FUNC_8 (char const*,struct dentry*,int ) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,char const*,...) ;
 int FUNC_11 (int *,TYPE_2__**,int *) ;
 int FUNC_12 (TYPE_2__**,int *) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static struct dentry *FUNC_14(const char *VAR_4, struct dentry *VAR_5)
{
 struct dentry *VAR_6;
 int VAR_7;

 FUNC_9("creating file '%s'\n", VAR_4);

 if (FUNC_1(VAR_5))
  return VAR_5;

 VAR_7 = FUNC_11(&VAR_1, &VAR_2,
         &VAR_3);
 if (VAR_7) {
  FUNC_10("Unable to pin filesystem for file '%s'\n", VAR_4);
  return FUNC_0(VAR_7);
 }






 if (!VAR_5)
  VAR_5 = VAR_2->mnt_root;

 FUNC_6(FUNC_2(VAR_5));
 VAR_6 = FUNC_8(VAR_4, VAR_5, FUNC_13(VAR_4));
 if (!FUNC_1(VAR_6) && FUNC_4(VAR_6)) {
  if (FUNC_3(VAR_6))
   FUNC_10("Directory '%s' with parent '%s' already present!\n",
          VAR_4, VAR_5->d_name.name);
  else
   FUNC_10("File '%s' in directory '%s' already present!\n",
          VAR_4, VAR_5->d_name.name);
  FUNC_5(VAR_6);
  VAR_6 = FUNC_0(-VAR_0);
 }

 if (FUNC_1(VAR_6)) {
  FUNC_7(FUNC_2(VAR_5));
  FUNC_12(&VAR_2, &VAR_3);
 }

 return VAR_6;
}
