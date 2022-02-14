
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i_data; } ;
struct udf_inode_info {scalar_t__ i_alloc_type; unsigned int i_lenAlloc; int i_data_sem; scalar_t__ i_lenEAttr; TYPE_1__ i_ext; } ;
struct inode {unsigned int i_size; int i_ctime; int i_mtime; int i_mapping; int i_mode; } ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 struct udf_inode_info* FUNC_6 (struct inode*) ;
 int FUNC_7 (int ,unsigned int,int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 unsigned int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (scalar_t__,int,unsigned int) ;
 int FUNC_13 (struct inode*,unsigned int) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*,unsigned int) ;
 unsigned int FUNC_17 (struct inode*) ;
 int VAR_3 ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (int *) ;

int FUNC_21(struct inode *VAR_4, loff_t VAR_5)
{
 int VAR_6;
 struct udf_inode_info *VAR_7;
 unsigned int VAR_8 = FUNC_10(VAR_4);

 if (!(FUNC_5(VAR_4->i_mode) || FUNC_3(VAR_4->i_mode) ||
       FUNC_4(VAR_4->i_mode)))
  return -VAR_0;
 if (FUNC_0(VAR_4) || FUNC_1(VAR_4))
  return -VAR_1;

 VAR_7 = FUNC_6(VAR_4);
 if (VAR_5 > VAR_4->i_size) {
  FUNC_9(&VAR_7->i_data_sem);
  if (VAR_7->i_alloc_type == VAR_2) {
   if (VAR_8 <
       (FUNC_17(VAR_4) + VAR_5)) {
    VAR_6 = FUNC_15(VAR_4);
    if (VAR_6)
     return VAR_6;
    FUNC_9(&VAR_7->i_data_sem);
   } else {
    VAR_7->i_lenAlloc = VAR_5;
    goto set_size;
   }
  }
  VAR_6 = FUNC_16(VAR_4, VAR_5);
  if (VAR_6) {
   FUNC_20(&VAR_7->i_data_sem);
   return VAR_6;
  }
set_size:
  FUNC_20(&VAR_7->i_data_sem);
  FUNC_13(VAR_4, VAR_5);
 } else {
  if (VAR_7->i_alloc_type == VAR_2) {
   FUNC_9(&VAR_7->i_data_sem);
   FUNC_14(VAR_4);
   FUNC_12(VAR_7->i_ext.i_data + VAR_7->i_lenEAttr + VAR_5,
          0x00, VAR_8 - VAR_5 -
          FUNC_17(VAR_4));
   VAR_7->i_lenAlloc = VAR_5;
   FUNC_13(VAR_4, VAR_5);
   FUNC_20(&VAR_7->i_data_sem);
   goto update_time;
  }
  VAR_6 = FUNC_7(VAR_4->i_mapping, VAR_5,
       VAR_3);
  if (VAR_6)
   return VAR_6;
  FUNC_13(VAR_4, VAR_5);
  FUNC_9(&VAR_7->i_data_sem);
  FUNC_14(VAR_4);
  VAR_6 = FUNC_19(VAR_4);
  FUNC_20(&VAR_7->i_data_sem);
  if (VAR_6)
   return VAR_6;
 }
update_time:
 VAR_4->i_mtime = VAR_4->i_ctime = FUNC_8(VAR_4);
 if (FUNC_2(VAR_4))
  FUNC_18(VAR_4);
 else
  FUNC_11(VAR_4);
 return 0;
}
