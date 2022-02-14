
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int fw_ready; struct if_cs_card* card; } ;
struct if_cs_card {scalar_t__ model; TYPE_1__* p_dev; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct if_cs_card*) ;
 int FUNC_1 (struct if_cs_card*) ;
 int VAR_5 ;
 int FUNC_2 (struct if_cs_card*,struct firmware const*) ;
 int FUNC_3 (struct if_cs_card*,struct firmware const*) ;
 int FUNC_4 (struct if_cs_card*,int ,int ) ;
 scalar_t__ FUNC_5 (struct lbs_private*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,int ,int ,int ,struct if_cs_card*) ;

__attribute__((used)) static void FUNC_8(struct lbs_private *VAR_6, int VAR_7,
     const struct firmware *VAR_8,
     const struct firmware *VAR_9)
{
 struct if_cs_card *VAR_10 = VAR_6->card;

 if (VAR_7) {
  FUNC_6("failed to find firmware (%d)\n", VAR_7);
  return;
 }


 VAR_7 = FUNC_2(VAR_10, VAR_8);
 if (VAR_7 == 0 && (VAR_10->model != VAR_4))
  VAR_7 = FUNC_3(VAR_10, VAR_9);
 if (VAR_7)
  return;


 VAR_7 = FUNC_7(VAR_10->p_dev->irq, VAR_5,
  VAR_3, VAR_0, VAR_10);
 if (VAR_7) {
  FUNC_6("error in request_irq\n");
  return;
 }





 FUNC_4(VAR_10, VAR_2, VAR_1);
 FUNC_1(VAR_10);


 VAR_6->fw_ready = 1;
 if (FUNC_5(VAR_6) != 0) {
  FUNC_6("could not activate card\n");
  FUNC_0(VAR_10->p_dev->irq, VAR_10);
 }
}
