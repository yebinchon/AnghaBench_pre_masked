
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int mbps; } ;
struct aq_hw_s {TYPE_2__* aq_nic_cfg; TYPE_1__ aq_link_status; } ;
struct TYPE_4__ {int itr; int tx_itr; int rx_itr; } ;





 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,unsigned int) ;
 int FUNC_2 (struct aq_hw_s*,unsigned int) ;
 int FUNC_3 (struct aq_hw_s*,int,unsigned int) ;
 int FUNC_4 (struct aq_hw_s*,int,unsigned int) ;
 int FUNC_5 (struct aq_hw_s*,unsigned int) ;
 int FUNC_6 (struct aq_hw_s*,unsigned int) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct aq_hw_s *VAR_3)
{
 unsigned int VAR_4 = 0U;
 u32 VAR_5 = 2U;
 u32 VAR_6 = 2U;

 switch (VAR_3->aq_nic_cfg->itr) {
 case 128:
 case 130:
  FUNC_6(VAR_3, 0U);
  FUNC_5(VAR_3, 1U);
  FUNC_2(VAR_3, 0U);
  FUNC_1(VAR_3, 1U);

  if (VAR_3->aq_nic_cfg->itr == 128) {

   int VAR_7 = VAR_3->aq_nic_cfg->tx_itr / 2;
   int VAR_8 = VAR_7 / 2;

   int VAR_9 = VAR_3->aq_nic_cfg->rx_itr / 2;
   int VAR_10 = VAR_9 / 2;

   VAR_7 = FUNC_8(VAR_1, VAR_7);
   VAR_8 = FUNC_8(VAR_2, VAR_8);
   VAR_9 = FUNC_8(VAR_1, VAR_9);
   VAR_10 = FUNC_8(VAR_2, VAR_10);

   VAR_5 |= VAR_8 << 0x8U;
   VAR_5 |= VAR_7 << 0x10U;
   VAR_6 |= VAR_10 << 0x8U;
   VAR_6 |= VAR_9 << 0x10U;
  } else {
   static unsigned int VAR_11[][2] = {
    {0xfU, 0xffU},
    {0xfU, 0x1ffU},
    {0xfU, 0x1ffU},
    {0xfU, 0x1ffU},
    {0xfU, 0x1ffU},
    {0xfU, 0x1ffU},
   };

   static unsigned int VAR_12[][2] = {
    {0x6U, 0x38U},
    {0xCU, 0x70U},
    {0xCU, 0x70U},
    {0x18U, 0xE0U},
    {0x30U, 0x80U},
    {0x4U, 0x50U},
   };

   unsigned int VAR_13 =
     FUNC_7(
      VAR_3->aq_link_status.mbps);


   VAR_3->aq_nic_cfg->tx_itr = VAR_11
       [VAR_13][1] * 2;
   VAR_3->aq_nic_cfg->rx_itr = VAR_12
       [VAR_13][1] * 2;

   VAR_5 |= VAR_11
      [VAR_13][0] << 0x8U;
   VAR_5 |= VAR_11
      [VAR_13][1] << 0x10U;

   VAR_6 |= VAR_12
      [VAR_13][0] << 0x8U;
   VAR_6 |= VAR_12
      [VAR_13][1] << 0x10U;
  }
  break;
 case 129:
  FUNC_6(VAR_3, 1U);
  FUNC_5(VAR_3, 0U);
  FUNC_2(VAR_3, 1U);
  FUNC_1(VAR_3, 0U);
  VAR_5 = 0U;
  VAR_6 = 0U;
  break;
 }

 for (VAR_4 = VAR_0; VAR_4--;) {
  FUNC_4(VAR_3, VAR_5, VAR_4);
  FUNC_3(VAR_3, VAR_6, VAR_4);
 }

 return FUNC_0(VAR_3);
}
