
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scifmsg {int* payload; int uop; } ;
struct scif_endpt {int remote_ep; int remote_dev; } ;
struct scif_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scif_endpt*,int*) ;
 int FUNC_1 (int ,struct scifmsg*) ;

void FUNC_2(struct scif_dev *VAR_2, struct scifmsg *VAR_3)
{
 struct scif_endpt *VAR_4 = (struct scif_endpt *)VAR_3->payload[0];
 int VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, &VAR_5);
 if (VAR_6)
  VAR_3->uop = VAR_1;
 else
  VAR_3->uop = VAR_0;
 VAR_3->payload[0] = VAR_4->remote_ep;
 VAR_3->payload[2] = VAR_5;
 FUNC_1(VAR_4->remote_dev, VAR_3);
}
