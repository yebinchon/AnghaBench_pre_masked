
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int partner_type; } ;
struct ucsi_connector {int num; TYPE_1__* ucsi; int complete; int port; TYPE_2__ status; int partner; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ucsi_connector*) ;
 int FUNC_5 (struct ucsi_connector*,int ) ;

__attribute__((used)) static void FUNC_6(struct ucsi_connector *VAR_3)
{
 int VAR_4;

 if (!VAR_3->partner)
  return;

 switch (VAR_3->status.partner_type) {
 case 128:
  FUNC_3(VAR_3->port, VAR_1);
  break;
 case 129:
  FUNC_3(VAR_3->port, VAR_0);
  break;
 default:
  break;
 }


 if (!FUNC_1(&VAR_3->complete))
  FUNC_0(&VAR_3->complete);


 VAR_4 = FUNC_5(VAR_3, VAR_2);
 if (VAR_4)
  FUNC_2(VAR_3->ucsi->dev,
   "con%d: failed to register partner alternate modes\n",
   VAR_3->num);
 else
  FUNC_4(VAR_3);
}
