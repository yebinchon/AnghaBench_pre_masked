
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int mbps; } ;
struct aq_hw_s {TYPE_2__ aq_link_status; TYPE_1__* aq_nic_cfg; } ;
struct TYPE_3__ {int itr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,int) ;
 int FUNC_2 (struct aq_hw_s*,int,int) ;
 int FUNC_3 (struct aq_hw_s*,int,unsigned int) ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct aq_hw_s *VAR_3)
{
 unsigned int VAR_4 = 0U;
 u32 VAR_5;

 if (VAR_3->aq_nic_cfg->itr) {
  if (VAR_3->aq_nic_cfg->itr != VAR_0) {
   u32 VAR_6 = (VAR_3->aq_nic_cfg->itr >> 1);

   VAR_6 = FUNC_5(VAR_1, VAR_6);

   VAR_5 = 0x80000000U | (VAR_6 << 0x10);
  } else {
   u32 VAR_7 = 0xFFFFU & FUNC_1(VAR_3, 0x00002A00U);

   if (VAR_7 < VAR_3->aq_link_status.mbps) {
    VAR_5 = 0U;
   } else {
    static unsigned int VAR_8[] = {
     0x01CU,
     0x039U,
     0x039U,
     0x073U,
     0x120U,
     0x1FFU,
    };

    unsigned int VAR_9 =
     FUNC_4(
      VAR_3->aq_link_status.mbps);

    VAR_5 = 0x80000000U |
     (VAR_8[VAR_9] << 0x10U);
   }

   FUNC_2(VAR_3, 0x00002A00U, 0x40000000U);
   FUNC_2(VAR_3, 0x00002A00U, 0x8D000000U);
  }
 } else {
  VAR_5 = 0U;
 }

 for (VAR_4 = VAR_2; VAR_4--;)
  FUNC_3(VAR_3, VAR_5, VAR_4);

 return FUNC_0(VAR_3);
}
