
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct adfs_sb_info {int s_owner_mask; int s_other_mask; } ;
struct TYPE_2__ {unsigned int attr; int loadaddr; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct adfs_sb_info* FUNC_1 (struct super_block*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static umode_t
FUNC_3(struct super_block *VAR_12, struct inode *VAR_13)
{
 unsigned int VAR_14 = FUNC_0(VAR_13)->attr;
 umode_t VAR_15, VAR_16;
 struct adfs_sb_info *VAR_17 = FUNC_1(VAR_12);

 if (VAR_14 & VAR_0) {
  VAR_15 = VAR_8 & VAR_17->s_owner_mask;
  return VAR_5 | VAR_11 | VAR_15;
 }

 switch (FUNC_2(FUNC_0(VAR_13)->loadaddr)) {
 case 0xfc0:
  return VAR_6|VAR_9;

 case 0xfe6:
  VAR_16 = VAR_8 | VAR_11;
  break;

 default:
  VAR_16 = VAR_8;
 }

 VAR_15 = VAR_7;

 if (VAR_14 & VAR_1)
  VAR_15 |= VAR_16 & VAR_17->s_owner_mask;

 if (VAR_14 & VAR_2)
  VAR_15 |= VAR_10 & VAR_17->s_owner_mask;

 if (VAR_14 & VAR_3)
  VAR_15 |= VAR_16 & VAR_17->s_other_mask;

 if (VAR_14 & VAR_4)
  VAR_15 |= VAR_10 & VAR_17->s_other_mask;
 return VAR_15;
}
