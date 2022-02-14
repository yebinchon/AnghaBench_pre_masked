
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwtty_port {int lock; int peer; } ;
struct fwtty_peer {TYPE_1__* serial; } ;
struct TYPE_2__ {struct fwtty_port** ports; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct fwtty_peer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static struct fwtty_port *FUNC_4(struct fwtty_peer *VAR_1)
{
 struct fwtty_port **VAR_2 = VAR_1->serial->ports;
 int VAR_3;


 FUNC_3();




 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  FUNC_1(&VAR_2[VAR_3]->lock);
  if (!VAR_2[VAR_3]->peer) {

   FUNC_0(VAR_2[VAR_3]->peer, VAR_1);
   FUNC_2(&VAR_2[VAR_3]->lock);
   return VAR_2[VAR_3];
  }
  FUNC_2(&VAR_2[VAR_3]->lock);
 }
 return ((void*)0);
}
