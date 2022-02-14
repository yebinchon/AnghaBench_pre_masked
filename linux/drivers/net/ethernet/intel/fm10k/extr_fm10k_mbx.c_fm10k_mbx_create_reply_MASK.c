
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fm10k_mbx_info {int state; int tail_len; } ;
struct fm10k_hw {int dummy; } ;
typedef int s32 ;






 int FUNC_0 (struct fm10k_mbx_info*) ;
 int FUNC_1 (struct fm10k_mbx_info*) ;
 int FUNC_2 (struct fm10k_mbx_info*) ;
 int FUNC_3 (struct fm10k_hw*,struct fm10k_mbx_info*,int ) ;
 int FUNC_4 (struct fm10k_mbx_info*,int ) ;

__attribute__((used)) static s32 FUNC_5(struct fm10k_hw *VAR_0,
      struct fm10k_mbx_info *VAR_1, u16 VAR_2)
{
 switch (VAR_1->state) {
 case 128:
 case 129:

  FUNC_4(VAR_1, VAR_2);


  FUNC_3(VAR_0, VAR_1, VAR_2);


  if (VAR_1->tail_len || (VAR_1->state == 128))
   FUNC_1(VAR_1);
  else
   FUNC_2(VAR_1);
  break;
 case 130:

  FUNC_0(VAR_1);
  break;
 case 131:

  FUNC_2(VAR_1);
 default:
  break;
 }

 return 0;
}
