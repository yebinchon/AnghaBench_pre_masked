
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qstr {size_t len; scalar_t__* name; } ;
struct path {int mnt; TYPE_1__* dentry; } ;
struct filename {int dummy; } ;
typedef struct filename dentry ;
struct TYPE_2__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct filename* FUNC_0 (struct filename*) ;
 struct filename* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct filename*) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct filename* FUNC_3 (struct qstr*,TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_4 (struct filename*) ;
 int FUNC_5 (struct filename*) ;
 struct filename* FUNC_6 (int,struct filename*,unsigned int,struct path*,struct qstr*,int*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct path*) ;
 int FUNC_12 (struct filename*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static struct dentry *FUNC_14(int VAR_8, struct filename *VAR_9,
    struct path *VAR_10, unsigned int VAR_11)
{
 struct dentry *VAR_12 = FUNC_1(-VAR_0);
 struct qstr VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 bool VAR_17 = (VAR_11 & VAR_5);





 VAR_11 &= VAR_7;

 VAR_9 = FUNC_6(VAR_8, VAR_9, VAR_11, VAR_10, &VAR_13, &VAR_14);
 if (FUNC_2(VAR_9))
  return FUNC_0(VAR_9);





 if (FUNC_13(VAR_14 != VAR_3))
  goto out;


 VAR_15 = FUNC_10(VAR_10->mnt);



 VAR_11 |= VAR_4 | VAR_6;
 FUNC_7(VAR_10->dentry->d_inode, VAR_2);
 VAR_12 = FUNC_3(&VAR_13, VAR_10->dentry, VAR_11);
 if (FUNC_2(VAR_12))
  goto unlock;

 VAR_16 = -VAR_0;
 if (FUNC_4(VAR_12))
  goto fail;







 if (FUNC_13(!VAR_17 && VAR_13.name[VAR_13.len])) {
  VAR_16 = -VAR_1;
  goto fail;
 }
 if (FUNC_13(VAR_15)) {
  VAR_16 = VAR_15;
  goto fail;
 }
 FUNC_12(VAR_9);
 return VAR_12;
fail:
 FUNC_5(VAR_12);
 VAR_12 = FUNC_1(VAR_16);
unlock:
 FUNC_8(VAR_10->dentry->d_inode);
 if (!VAR_15)
  FUNC_9(VAR_10->mnt);
out:
 FUNC_11(VAR_10);
 FUNC_12(VAR_9);
 return VAR_12;
}
