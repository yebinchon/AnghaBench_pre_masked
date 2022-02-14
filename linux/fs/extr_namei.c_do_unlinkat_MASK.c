
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {size_t len; scalar_t__* name; } ;
struct path {int mnt; TYPE_1__* dentry; } ;
struct inode {int dummy; } ;
struct filename {struct inode* d_inode; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct filename*) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 long FUNC_1 (struct filename*) ;
 struct filename* FUNC_2 (struct qstr*,TYPE_1__*,unsigned int) ;
 int FUNC_3 (struct inode**) ;
 scalar_t__ FUNC_4 (struct filename*) ;
 scalar_t__ FUNC_5 (struct filename*) ;
 int FUNC_6 (struct filename*) ;
 struct filename* FUNC_7 (int,struct filename*,unsigned int,struct path*,struct qstr*,int*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct path*) ;
 int FUNC_15 (struct filename*) ;
 scalar_t__ FUNC_16 (int,unsigned int) ;
 int FUNC_17 (struct path*,struct filename*) ;
 int FUNC_18 (int ,struct filename*,struct inode**) ;

long FUNC_19(int VAR_6, struct filename *VAR_7)
{
 int VAR_8;
 struct dentry *VAR_9;
 struct path VAR_10;
 struct qstr VAR_11;
 int VAR_12;
 struct inode *VAR_13 = ((void*)0);
 struct inode *VAR_14 = ((void*)0);
 unsigned int VAR_15 = 0;
retry:
 VAR_7 = FUNC_7(VAR_6, VAR_7, VAR_15, &VAR_10, &VAR_11, &VAR_12);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = -VAR_0;
 if (VAR_12 != VAR_4)
  goto exit1;

 VAR_8 = FUNC_13(VAR_10.mnt);
 if (VAR_8)
  goto exit1;
retry_deleg:
 FUNC_9(VAR_10.dentry->d_inode, VAR_3);
 VAR_9 = FUNC_2(&VAR_11, VAR_10.dentry, VAR_15);
 VAR_8 = FUNC_1(VAR_9);
 if (!FUNC_0(VAR_9)) {

  if (VAR_11.name[VAR_11.len])
   goto slashes;
  VAR_13 = VAR_9->d_inode;
  if (FUNC_5(VAR_9))
   goto slashes;
  FUNC_8(VAR_13);
  VAR_8 = FUNC_17(&VAR_10, VAR_9);
  if (VAR_8)
   goto exit2;
  VAR_8 = FUNC_18(VAR_10.dentry->d_inode, VAR_9, &VAR_14);
exit2:
  FUNC_6(VAR_9);
 }
 FUNC_10(VAR_10.dentry->d_inode);
 if (VAR_13)
  FUNC_11(VAR_13);
 VAR_13 = ((void*)0);
 if (VAR_14) {
  VAR_8 = FUNC_3(&VAR_14);
  if (!VAR_8)
   goto retry_deleg;
 }
 FUNC_12(VAR_10.mnt);
exit1:
 FUNC_14(&VAR_10);
 if (FUNC_16(VAR_8, VAR_15)) {
  VAR_15 |= VAR_5;
  VAR_13 = ((void*)0);
  goto retry;
 }
 FUNC_15(VAR_7);
 return VAR_8;

slashes:
 if (FUNC_5(VAR_9))
  VAR_8 = -VAR_1;
 else if (FUNC_4(VAR_9))
  VAR_8 = -VAR_0;
 else
  VAR_8 = -VAR_2;
 goto exit2;
}
