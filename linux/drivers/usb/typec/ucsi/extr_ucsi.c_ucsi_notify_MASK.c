
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucsi_connector {int work; } ;
struct ucsi_cci {int connector_change; scalar_t__ ack_complete; scalar_t__ cmd_complete; scalar_t__ busy; scalar_t__ error; } ;
struct ucsi {TYPE_2__* ppm; int flags; struct ucsi_connector* connector; int complete; int status; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int raw_cci; struct ucsi_cci cci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ucsi*) ;

void FUNC_6(struct ucsi *VAR_6)
{
 struct ucsi_cci *VAR_7;


 FUNC_5(VAR_6);

 VAR_7 = &VAR_6->ppm->data->cci;

 if (VAR_7->error)
  VAR_6->status = VAR_4;
 else if (VAR_7->busy)
  VAR_6->status = VAR_3;
 else
  VAR_6->status = VAR_5;

 if (VAR_7->cmd_complete && FUNC_3(VAR_1, &VAR_6->flags)) {
  FUNC_0(&VAR_6->complete);
 } else if (VAR_7->ack_complete && FUNC_3(VAR_0, &VAR_6->flags)) {
  FUNC_0(&VAR_6->complete);
 } else if (VAR_7->connector_change) {
  struct ucsi_connector *VAR_8;

  VAR_8 = &VAR_6->connector[VAR_7->connector_change - 1];

  if (!FUNC_2(VAR_2, &VAR_6->flags))
   FUNC_1(&VAR_8->work);
 }

 FUNC_4(VAR_6->ppm->data->raw_cci);
}
