
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtllib_device {int proto_stoppping; scalar_t__ state; scalar_t__ iw_mode; scalar_t__ assocresp_ies_len; int * assocresp_ies; scalar_t__ assocreq_ies_len; int * assocreq_ies; int link_change_wq; int start_ibss_wq; int associate_retry_wq; int associate_timer; int dev; int (* rtllib_ips_leave ) (int ) ;scalar_t__ proto_started; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtllib_device*) ;
 int FUNC_1 (struct rtllib_device*,int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rtllib_device*) ;
 int FUNC_6 (struct rtllib_device*) ;
 int FUNC_7 (struct rtllib_device*) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct rtllib_device *VAR_5, u8 VAR_6)
{
 if (!VAR_5->proto_started)
  return;

 if (VAR_6) {
  VAR_5->proto_started = 0;
  VAR_5->proto_stoppping = 1;
  if (VAR_5->rtllib_ips_leave != ((void*)0))
   VAR_5->rtllib_ips_leave(VAR_5->dev);
 }

 FUNC_7(VAR_5);
 FUNC_3(&VAR_5->associate_timer);
 FUNC_2(&VAR_5->associate_retry_wq);
 FUNC_2(&VAR_5->start_ibss_wq);
 FUNC_2(&VAR_5->link_change_wq);
 FUNC_6(VAR_5);

 if (VAR_5->state <= VAR_1)
  VAR_5->state = VAR_3;

 if (VAR_5->state == VAR_2) {
  if (VAR_5->iw_mode == VAR_0)
   FUNC_1(VAR_5, 1, VAR_4);
  FUNC_5(VAR_5);
 }

 if (VAR_6) {
  FUNC_0(VAR_5);
  VAR_5->proto_stoppping = 0;
 }
 FUNC_4(VAR_5->assocreq_ies);
 VAR_5->assocreq_ies = ((void*)0);
 VAR_5->assocreq_ies_len = 0;
 FUNC_4(VAR_5->assocresp_ies);
 VAR_5->assocresp_ies = ((void*)0);
 VAR_5->assocresp_ies_len = 0;
}
