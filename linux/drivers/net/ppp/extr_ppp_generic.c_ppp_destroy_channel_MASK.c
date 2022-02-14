
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rq; int xq; int dead; } ;
struct channel {TYPE_1__ file; int * chan_net; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct channel*) ;
 int FUNC_2 (char*,struct channel*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct channel *VAR_1)
{
 FUNC_3(VAR_1->chan_net);
 VAR_1->chan_net = ((void*)0);

 FUNC_0(&VAR_0);

 if (!VAR_1->file.dead) {

  FUNC_2("ppp: destroying undead channel %p !\n", VAR_1);
  return;
 }
 FUNC_4(&VAR_1->file.xq);
 FUNC_4(&VAR_1->file.rq);
 FUNC_1(VAR_1);
}
