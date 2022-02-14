
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int size; } ;
struct fm10k_mbx_info {int state; int tail; TYPE_1__ rx; int max_size; int mbx_hdr; } ;
struct fm10k_hw {int dummy; } ;
typedef int s32 ;
typedef enum fm10k_mbx_state { ____Placeholder_fm10k_mbx_state } fm10k_mbx_state ;


 int VAR_0 ;
 int FUNC_0 (int const,int ) ;



 int VAR_1 ;
 int FUNC_1 (struct fm10k_mbx_info*) ;
 int FUNC_2 (struct fm10k_hw*,struct fm10k_mbx_info*,int ) ;
 int FUNC_3 (struct fm10k_mbx_info*,int ) ;

__attribute__((used)) static s32 FUNC_4(struct fm10k_hw *VAR_2,
         struct fm10k_mbx_info *VAR_3)
{
 const enum fm10k_mbx_state VAR_4 = VAR_3->state;
 const u32 *VAR_5 = &VAR_3->mbx_hdr;
 u16 VAR_6, VAR_7;


 VAR_6 = FUNC_0(*VAR_5, VAR_0);
 VAR_7 = FUNC_0(*VAR_5, VAR_1);

 switch (VAR_4) {
 case 129:
 case 128:

  FUNC_1(VAR_3);
  break;
 case 130:

  if (VAR_6 > VAR_3->rx.size) {
   VAR_3->max_size = VAR_3->rx.size - 1;
  } else {

   VAR_3->state = 128;

   FUNC_3(VAR_3, VAR_6);
  }
  break;
 default:
  break;
 }


 VAR_3->tail = VAR_7;

 return FUNC_2(VAR_2, VAR_3, VAR_7);
}
