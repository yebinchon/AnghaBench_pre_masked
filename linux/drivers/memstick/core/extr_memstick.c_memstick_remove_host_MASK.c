
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct memstick_host {int dev; int id; int lock; int (* set_param ) (struct memstick_host*,int ,int ) ;TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct memstick_host*,int ,int ) ;
 int VAR_4 ;

void FUNC_9(struct memstick_host *VAR_5)
{
 FUNC_2(VAR_4);
 FUNC_4(&VAR_5->lock);
 if (VAR_5->card)
  FUNC_1(&VAR_5->card->dev);
 VAR_5->card = ((void*)0);
 VAR_5->set_param(VAR_5, VAR_0, VAR_1);
 FUNC_5(&VAR_5->lock);

 FUNC_6(&VAR_3);
 FUNC_3(&VAR_2, VAR_5->id);
 FUNC_7(&VAR_3);
 FUNC_0(&VAR_5->dev);
}
