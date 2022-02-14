
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fm10k_mbx_info {int state; int tail; scalar_t__ head_len; scalar_t__ pushed; int mbx_hdr; } ;
struct fm10k_hw {int dummy; } ;
typedef scalar_t__ s32 ;
typedef enum fm10k_mbx_state { ____Placeholder_fm10k_mbx_state } fm10k_mbx_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const,int ) ;


 int VAR_2 ;
 int FUNC_1 (struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_2 (struct fm10k_hw*,struct fm10k_mbx_info*,int ) ;
 int FUNC_3 (struct fm10k_mbx_info*) ;
 scalar_t__ FUNC_4 (struct fm10k_mbx_info*) ;

__attribute__((used)) static s32 FUNC_5(struct fm10k_hw *VAR_3,
     struct fm10k_mbx_info *VAR_4)
{
 const enum fm10k_mbx_state VAR_5 = VAR_4->state;
 const u32 *VAR_6 = &VAR_4->mbx_hdr;
 u16 VAR_7;
 s32 VAR_8;


 VAR_7 = FUNC_0(*VAR_6, VAR_2);


 if (VAR_4->pushed)
  return VAR_1;


 VAR_4->head_len = 0;


 VAR_8 = FUNC_4(VAR_4);
 if (VAR_8)
  return VAR_8;

 switch (VAR_5) {
 case 129:
 case 128:

  if (!FUNC_3(VAR_4))
   break;


  if (VAR_7 != VAR_4->tail)
   return VAR_0;


  FUNC_1(VAR_4);
  break;
 default:
  break;
 }

 return FUNC_2(VAR_3, VAR_4, VAR_7);
}
