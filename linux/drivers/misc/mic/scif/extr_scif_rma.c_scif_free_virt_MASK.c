
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scifmsg {scalar_t__* payload; } ;
struct scif_window {int dummy; } ;
struct scif_dev {int dummy; } ;


 int FUNC_0 (struct scif_window*) ;

void FUNC_1(struct scif_dev *VAR_0, struct scifmsg *VAR_1)
{
 struct scif_window *VAR_2 = (struct scif_window *)VAR_1->payload[1];

 FUNC_0(VAR_2);
}
