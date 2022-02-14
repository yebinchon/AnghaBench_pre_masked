
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
struct ceph_nfs_fh {void* ino; } ;
struct ceph_nfs_confh {void* parent_ino; void* ino; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,int *,int*,struct inode*) ;
 void* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,void*,...) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_4, u32 *VAR_5, int *VAR_6,
     struct inode *VAR_7)
{
 static const int VAR_8 =
  sizeof(struct ceph_nfs_fh) >> 2;
 static const int VAR_9 =
  sizeof(struct ceph_nfs_confh) >> 2;
 int VAR_10;

 if (FUNC_2(VAR_4) != VAR_0)
  return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);

 if (VAR_7 && (*VAR_6 < VAR_9)) {
  *VAR_6 = VAR_9;
  return VAR_3;
 } else if (*VAR_6 < VAR_8) {
  *VAR_6 = VAR_8;
  return VAR_3;
 }

 if (VAR_7) {
  struct ceph_nfs_confh *VAR_11 = (void *)VAR_5;
  FUNC_3("encode_fh %llx with parent %llx\n",
       FUNC_1(VAR_4), FUNC_1(VAR_7));
  VAR_11->ino = FUNC_1(VAR_4);
  VAR_11->parent_ino = FUNC_1(VAR_7);
  *VAR_6 = VAR_9;
  VAR_10 = VAR_2;
 } else {
  struct ceph_nfs_fh *VAR_12 = (void *)VAR_5;
  FUNC_3("encode_fh %llx\n", FUNC_1(VAR_4));
  VAR_12->ino = FUNC_1(VAR_4);
  *VAR_6 = VAR_8;
  VAR_10 = VAR_1;
 }
 return VAR_10;
}
