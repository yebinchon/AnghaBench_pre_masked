
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_mbx_info {int state; int tail; int local; int remote; } ;
struct fm10k_hw {int dummy; } ;
typedef int s32 ;
typedef enum fm10k_mbx_state { ____Placeholder_fm10k_mbx_state } fm10k_mbx_state ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct fm10k_mbx_info*) ;
 int FUNC_1 (struct fm10k_hw*,struct fm10k_mbx_info*,int ) ;

__attribute__((used)) static s32 FUNC_2(struct fm10k_hw *VAR_2,
          struct fm10k_mbx_info *VAR_3)
{
 s32 VAR_4 = 0;
 const enum fm10k_mbx_state VAR_5 = VAR_3->state;

 switch (VAR_5) {
 case 129:

  VAR_3->state = VAR_1;
  VAR_3->remote = 0;
  VAR_3->local = 0;
  break;
 case 128:

  FUNC_0(VAR_3);
  VAR_4 = VAR_0;
  break;
 case 130:

  VAR_3->remote = VAR_3->local;
 default:
  break;
 }

 FUNC_1(VAR_2, VAR_3, VAR_3->tail);

 return VAR_4;
}
