
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {scalar_t__ d_inode; } ;
struct TYPE_4__ {struct dentry* mnt_root; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 struct dentry* FUNC_5 (char const*,struct dentry*,int ) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int *,TYPE_1__**,int *) ;
 int FUNC_8 (TYPE_1__**,int *) ;
 int FUNC_9 (char const*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct dentry *FUNC_10(const char *VAR_4, struct dentry *VAR_5)
{
 struct dentry *VAR_6;
 int VAR_7;

 FUNC_6("tracefs: creating file '%s'\n",VAR_4);

 VAR_7 = FUNC_7(&VAR_1, &VAR_2,
         &VAR_3);
 if (VAR_7)
  return FUNC_0(VAR_7);






 if (!VAR_5)
  VAR_5 = VAR_2->mnt_root;

 FUNC_3(VAR_5->d_inode);
 VAR_6 = FUNC_5(VAR_4, VAR_5, FUNC_9(VAR_4));
 if (!FUNC_1(VAR_6) && VAR_6->d_inode) {
  FUNC_2(VAR_6);
  VAR_6 = FUNC_0(-VAR_0);
 }

 if (FUNC_1(VAR_6)) {
  FUNC_4(VAR_5->d_inode);
  FUNC_8(&VAR_2, &VAR_3);
 }

 return VAR_6;
}
