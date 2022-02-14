
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cmd; } ;
struct ucsi_control {TYPE_1__ cmd; scalar_t__ raw_cmd; } ;
struct ucsi {TYPE_4__* ppm; int dev; } ;
struct TYPE_9__ {int (* cmd ) (TYPE_4__*,struct ucsi_control*) ;TYPE_3__* data; } ;
struct TYPE_7__ {scalar_t__ reset_complete; } ;
struct TYPE_8__ {scalar_t__ raw_cci; TYPE_2__ cci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,struct ucsi_control*) ;
 int FUNC_4 (TYPE_4__*,struct ucsi_control*) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (struct ucsi_control*) ;
 int FUNC_7 (struct ucsi_control*,int) ;
 int FUNC_8 (struct ucsi*) ;

__attribute__((used)) static int FUNC_9(struct ucsi *VAR_4)
{
 struct ucsi_control VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 VAR_5.raw_cmd = 0;
 VAR_5.cmd.cmd = VAR_1;
 FUNC_6(&VAR_5);
 VAR_7 = VAR_4->ppm->cmd(VAR_4->ppm, &VAR_5);
 if (VAR_7)
  goto err;

 VAR_6 = VAR_3 + FUNC_1(VAR_2);

 do {

  VAR_7 = FUNC_8(VAR_4);
  if (VAR_7)
   goto err;

  if (VAR_4->ppm->data->cci.reset_complete)
   break;


  if (VAR_4->ppm->data->raw_cci) {
   FUNC_0(VAR_4->dev,
    "Failed to reset PPM! Trying again..\n");

   FUNC_6(&VAR_5);
   VAR_7 = VAR_4->ppm->cmd(VAR_4->ppm, &VAR_5);
   if (VAR_7)
    goto err;
  }


  FUNC_2(20);

  VAR_7 = -VAR_0;
 } while (FUNC_5(VAR_6));

err:
 FUNC_7(&VAR_5, VAR_7);

 return VAR_7;
}
