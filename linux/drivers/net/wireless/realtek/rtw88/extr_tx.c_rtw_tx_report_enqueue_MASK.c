
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rtw_tx_report {int purge_timer; int q_lock; int queue; } ;
struct rtw_dev {struct rtw_tx_report tx_report; } ;
struct TYPE_3__ {scalar_t__ status_driver_data; } ;
struct TYPE_4__ {TYPE_1__ status; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct rtw_dev *VAR_2, struct sk_buff *VAR_3, u8 VAR_4)
{
 struct rtw_tx_report *VAR_5 = &VAR_2->tx_report;
 unsigned long VAR_6;
 u8 *VAR_7;


 VAR_7 = (u8 *)FUNC_0(VAR_3)->status.status_driver_data;
 *VAR_7 = VAR_4;

 FUNC_3(&VAR_5->q_lock, VAR_6);
 FUNC_1(&VAR_5->queue, VAR_3);
 FUNC_4(&VAR_5->q_lock, VAR_6);

 FUNC_2(&VAR_5->purge_timer, VAR_1 + VAR_0);
}
