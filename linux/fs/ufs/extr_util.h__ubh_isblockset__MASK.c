
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ufs_sb_private_info {int s_fpb; } ;
struct ufs_buffer_head {int dummy; } ;


 int* FUNC_0 (struct ufs_buffer_head*,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(struct ufs_sb_private_info * VAR_0,
 struct ufs_buffer_head * VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 u8 VAR_4;
 switch (VAR_0->s_fpb) {
 case 8:
      return (*FUNC_0 (VAR_1, VAR_2 + VAR_3) == 0xff);
 case 4:
  VAR_4 = 0x0f << ((VAR_3 & 0x01) << 2);
  return (*FUNC_0 (VAR_1, VAR_2 + (VAR_3 >> 1)) & VAR_4) == VAR_4;
 case 2:
  VAR_4 = 0x03 << ((VAR_3 & 0x03) << 1);
  return (*FUNC_0 (VAR_1, VAR_2 + (VAR_3 >> 2)) & VAR_4) == VAR_4;
 case 1:
  VAR_4 = 0x01 << (VAR_3 & 0x07);
  return (*FUNC_0 (VAR_1, VAR_2 + (VAR_3 >> 3)) & VAR_4) == VAR_4;
 }
 return 0;
}
