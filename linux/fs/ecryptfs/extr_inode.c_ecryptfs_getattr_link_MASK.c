
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path {struct dentry* dentry; } ;
struct kstat {size_t size; } ;
struct ecryptfs_mount_crypt_stat {int flags; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {struct ecryptfs_mount_crypt_stat mount_crypt_stat; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dentry*) ;
 char* FUNC_3 (struct dentry*,size_t*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct kstat*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(const struct path *VAR_1, struct kstat *VAR_2,
     u32 VAR_3, unsigned int VAR_4)
{
 struct dentry *VAR_5 = VAR_1->dentry;
 struct ecryptfs_mount_crypt_stat *VAR_6;
 int VAR_7 = 0;

 VAR_6 = &FUNC_4(
      VAR_5->d_sb)->mount_crypt_stat;
 FUNC_5(FUNC_2(VAR_5), VAR_2);
 if (VAR_6->flags & VAR_0) {
  char *VAR_8;
  size_t VAR_9;

  VAR_8 = FUNC_3(VAR_5, &VAR_9);
  if (!FUNC_0(VAR_8)) {
   FUNC_6(VAR_8);
   VAR_2->size = VAR_9;
  } else {
   VAR_7 = FUNC_1(VAR_8);
  }
 }
 return VAR_7;
}
