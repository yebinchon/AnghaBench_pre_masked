
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct rtw_page_table {scalar_t__ exq_num; scalar_t__ nq_num; scalar_t__ lq_num; scalar_t__ hq_num; scalar_t__ gapq_num; } ;
struct rtw_fifo_conf {scalar_t__ rsvd_boundary; scalar_t__ acq_pg_num; } ;
struct TYPE_2__ {int bulkout_num; } ;
struct rtw_dev {TYPE_1__ hci; struct rtw_chip_info* chip; struct rtw_fifo_conf fifo; } ;
struct rtw_chip_info {scalar_t__ rxff_size; struct rtw_page_table* page_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;


 int FUNC_0 (struct rtw_dev*,scalar_t__,int,int ) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct rtw_dev*,int ,scalar_t__) ;
 int FUNC_4 (struct rtw_dev*,int ,int ) ;
 int FUNC_5 (struct rtw_dev*,scalar_t__,int ) ;
 int FUNC_6 (struct rtw_dev*,scalar_t__,int) ;
 int FUNC_7 (struct rtw_dev*) ;

__attribute__((used)) static int FUNC_8(struct rtw_dev *VAR_19)
{
 struct rtw_fifo_conf *VAR_20 = &VAR_19->fifo;
 struct rtw_chip_info *VAR_21 = VAR_19->chip;
 struct rtw_page_table *VAR_22 = ((void*)0);
 u16 VAR_23;
 int VAR_24;

 VAR_24 = FUNC_7(VAR_19);
 if (VAR_24)
  return VAR_24;

 switch (FUNC_1(VAR_19)) {
 case 129:
  VAR_22 = &VAR_21->page_table[1];
  break;
 case 128:
  if (VAR_19->hci.bulkout_num == 2)
   VAR_22 = &VAR_21->page_table[2];
  else if (VAR_19->hci.bulkout_num == 3)
   VAR_22 = &VAR_21->page_table[3];
  else if (VAR_19->hci.bulkout_num == 4)
   VAR_22 = &VAR_21->page_table[4];
  else
   return -VAR_5;
  break;
 default:
  return -VAR_5;
 }

 VAR_23 = VAR_20->acq_pg_num - VAR_22->hq_num - VAR_22->lq_num -
     VAR_22->nq_num - VAR_22->exq_num - VAR_22->gapq_num;
 FUNC_2(VAR_19, VAR_11, VAR_22->hq_num);
 FUNC_2(VAR_19, VAR_12, VAR_22->lq_num);
 FUNC_2(VAR_19, VAR_13, VAR_22->nq_num);
 FUNC_2(VAR_19, VAR_14, VAR_22->exq_num);
 FUNC_2(VAR_19, VAR_15, VAR_23);
 FUNC_4(VAR_19, VAR_17, VAR_2);

 FUNC_2(VAR_19, VAR_10, VAR_20->rsvd_boundary);
 FUNC_6(VAR_19, VAR_16 + 2, VAR_1 >> 16);

 FUNC_2(VAR_19, VAR_8, VAR_20->rsvd_boundary);
 FUNC_2(VAR_19, VAR_10 + 2, VAR_20->rsvd_boundary);
 FUNC_2(VAR_19, VAR_7, VAR_20->rsvd_boundary);
 FUNC_3(VAR_19, VAR_18, VAR_21->rxff_size - VAR_3 - 1);
 FUNC_6(VAR_19, VAR_6, VAR_0);

 if (!FUNC_0(VAR_19, VAR_6, VAR_0, 0))
  return -VAR_4;

 FUNC_5(VAR_19, VAR_9 + 3, 0);

 return 0;
}
