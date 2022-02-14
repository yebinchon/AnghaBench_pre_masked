
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rtw_rqpn {int dma_map_vo; int dma_map_vi; int dma_map_be; int dma_map_bk; int dma_map_mg; int dma_map_hi; } ;
struct TYPE_2__ {int bulkout_num; } ;
struct rtw_dev {TYPE_1__ hci; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {struct rtw_rqpn* rqpn_table; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_6 (struct rtw_dev*) ;
 int FUNC_7 (struct rtw_dev*,int ,int ) ;
 int FUNC_8 (struct rtw_dev*,int ,int ) ;
 int FUNC_9 (struct rtw_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct rtw_dev *VAR_6)
{
 struct rtw_chip_info *VAR_7 = VAR_6->chip;
 struct rtw_rqpn *VAR_8 = ((void*)0);
 u16 VAR_9 = 0;

 switch (FUNC_6(VAR_6)) {
 case 129:
  VAR_8 = &VAR_7->rqpn_table[1];
  break;
 case 128:
  if (VAR_6->hci.bulkout_num == 2)
   VAR_8 = &VAR_7->rqpn_table[2];
  else if (VAR_6->hci.bulkout_num == 3)
   VAR_8 = &VAR_7->rqpn_table[3];
  else if (VAR_6->hci.bulkout_num == 4)
   VAR_8 = &VAR_7->rqpn_table[4];
  else
   return -VAR_1;
  break;
 default:
  return -VAR_1;
 }

 VAR_9 |= FUNC_2(VAR_8->dma_map_hi);
 VAR_9 |= FUNC_3(VAR_8->dma_map_mg);
 VAR_9 |= FUNC_1(VAR_8->dma_map_bk);
 VAR_9 |= FUNC_0(VAR_8->dma_map_be);
 VAR_9 |= FUNC_4(VAR_8->dma_map_vi);
 VAR_9 |= FUNC_5(VAR_8->dma_map_vo);
 FUNC_7(VAR_6, VAR_5, VAR_9);

 FUNC_9(VAR_6, VAR_3, 0);
 FUNC_9(VAR_6, VAR_3, VAR_2);
 FUNC_8(VAR_6, VAR_4, VAR_0);

 return 0;
}
