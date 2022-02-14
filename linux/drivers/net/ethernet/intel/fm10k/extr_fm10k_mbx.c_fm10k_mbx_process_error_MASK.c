
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fm10k_mbx_info {int state; int tail; void* remote; void* local; int mbx_hdr; } ;
struct fm10k_hw {int dummy; } ;
typedef int s32 ;


 void* VAR_0 ;
 int FUNC_0 (int const,int ) ;
 int const VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (struct fm10k_mbx_info*) ;
 int FUNC_2 (struct fm10k_hw*,struct fm10k_mbx_info*,int ) ;
 int FUNC_3 (struct fm10k_mbx_info*) ;

__attribute__((used)) static s32 FUNC_4(struct fm10k_hw *VAR_3,
       struct fm10k_mbx_info *VAR_4)
{
 const u32 *VAR_5 = &VAR_4->mbx_hdr;
 u16 VAR_6;


 VAR_6 = FUNC_0(*VAR_5, VAR_2);

 switch (VAR_4->state) {
 case 128:
 case 129:

  FUNC_3(VAR_4);


  VAR_4->local = VAR_0;
  VAR_4->remote = VAR_0;


  VAR_4->tail = VAR_6;


  if (VAR_4->state == 128) {
   VAR_4->state = VAR_1;
   break;
  }


  FUNC_1(VAR_4);
  return 0;
 default:
  break;
 }

 return FUNC_2(VAR_3, VAR_4, VAR_4->tail);
}
