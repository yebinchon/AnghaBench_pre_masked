
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sch_no; int ssid; } ;
struct subchannel {int dev; TYPE_1__ schid; } ;
struct irb {int dummy; } ;
struct chsc_request {int completion; int irb; } ;
struct chsc_private {struct chsc_request* request; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,struct irb*,int) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct subchannel*) ;
 int FUNC_4 (int *) ;
 struct chsc_private* FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,struct irb*,int) ;
 int FUNC_8 (int *) ;
 struct irb* FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct subchannel *VAR_2)
{
 struct chsc_private *VAR_3 = FUNC_5(&VAR_2->dev);
 struct chsc_request *VAR_4 = VAR_3->request;
 struct irb *VAR_5 = FUNC_9(&VAR_1);

 FUNC_0(4, "irb");
 FUNC_1(4, VAR_5, sizeof(*VAR_5));
 FUNC_6(VAR_0);


 if (!VAR_4) {
  FUNC_2(0, "Interrupt on sch 0.%x.%04x with no request\n",
    VAR_2->schid.ssid, VAR_2->schid.sch_no);
  return;
 }
 VAR_3->request = ((void*)0);
 FUNC_7(&VAR_4->irb, VAR_5, sizeof(*VAR_5));
 FUNC_3(VAR_2);
 FUNC_4(&VAR_4->completion);
 FUNC_8(&VAR_2->dev);
}
