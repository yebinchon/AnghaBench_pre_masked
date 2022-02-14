
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iomap {scalar_t__ offset; scalar_t__ length; } ;
struct inode {int i_blkbits; scalar_t__ i_nlink; int i_size; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {int i_orphan; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int * FUNC_5 (struct inode*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct inode*) ;
 int FUNC_8 (int *,struct inode*) ;
 int FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct inode*,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_3, loff_t VAR_4, loff_t VAR_5,
     ssize_t VAR_6, unsigned VAR_7, struct iomap *VAR_8)
{
 int VAR_9 = 0;
 handle_t *VAR_10;
 int VAR_11 = VAR_3->i_blkbits;
 bool VAR_12 = 0;

 if (!(VAR_7 & VAR_2) || (VAR_7 & VAR_1))
  return 0;

 VAR_10 = FUNC_5(VAR_3, VAR_0, 2);
 if (FUNC_2(VAR_10)) {
  VAR_9 = FUNC_3(VAR_10);
  goto orphan_del;
 }
 if (FUNC_10(VAR_3, VAR_4 + VAR_6))
  FUNC_7(VAR_10, VAR_3);



 if (VAR_8->offset + VAR_8->length >
     FUNC_0(VAR_3->i_size, 1 << VAR_11)) {
  ext4_lblk_t VAR_13, VAR_14;

  VAR_13 = (VAR_4 + VAR_6) >> VAR_11;
  VAR_14 = (VAR_4 + VAR_5) >> VAR_11;
  if (VAR_13 < VAR_14 && FUNC_4(VAR_3))
   VAR_12 = 1;
 }




 if (!VAR_12 && VAR_3->i_nlink &&
     !FUNC_11(&FUNC_1(VAR_3)->i_orphan))
  FUNC_8(VAR_10, VAR_3);
 FUNC_6(VAR_10);
 if (VAR_12) {
  FUNC_9(VAR_3);
orphan_del:





  if (VAR_3->i_nlink)
   FUNC_8(((void*)0), VAR_3);
 }
 return VAR_9;
}
