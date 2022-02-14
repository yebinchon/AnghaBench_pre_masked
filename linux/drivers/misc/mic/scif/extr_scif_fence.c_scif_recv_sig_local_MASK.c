
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scifmsg {scalar_t__* payload; int uop; } ;
struct scif_endpt {int remote_dev; scalar_t__ remote_ep; } ;
struct scif_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct scifmsg*) ;
 int FUNC_1 (struct scif_endpt*,scalar_t__,scalar_t__,int ) ;

void FUNC_2(struct scif_dev *VAR_3, struct scifmsg *VAR_4)
{
 struct scif_endpt *VAR_5 = (struct scif_endpt *)VAR_4->payload[0];
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_4->payload[1], VAR_4->payload[2],
          VAR_2);
 if (VAR_6)
  VAR_4->uop = VAR_1;
 else
  VAR_4->uop = VAR_0;
 VAR_4->payload[0] = VAR_5->remote_ep;
 FUNC_0(VAR_5->remote_dev, VAR_4);
}
