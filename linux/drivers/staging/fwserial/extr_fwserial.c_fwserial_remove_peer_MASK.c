
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwtty_port {int dummy; } ;
struct fwtty_peer {int lock; scalar_t__ guid; int unit; int list; struct fwtty_port* port; int timer; TYPE_1__* serial; int work; int connect; } ;
struct TYPE_2__ {struct fwtty_peer* self; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fwtty_port*,int) ;
 int FUNC_4 (int *,char*,unsigned long long) ;
 int FUNC_5 (struct fwtty_peer*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct fwtty_peer*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct fwtty_peer *VAR_1)
{
 struct fwtty_port *VAR_2;

 FUNC_8(&VAR_1->lock);
 FUNC_7(VAR_1, VAR_0);
 FUNC_9(&VAR_1->lock);

 FUNC_0(&VAR_1->connect);
 FUNC_1(&VAR_1->work);

 FUNC_8(&VAR_1->lock);

 if (VAR_1 == VAR_1->serial->self)
  VAR_1->serial->self = ((void*)0);


 FUNC_2(&VAR_1->timer);

 VAR_2 = VAR_1->port;
 VAR_1->port = ((void*)0);

 FUNC_6(&VAR_1->list);

 FUNC_4(&VAR_1->unit, "peer removed (guid:%016llx)\n",
     (unsigned long long)VAR_1->guid);

 FUNC_9(&VAR_1->lock);

 if (VAR_2)
  FUNC_3(VAR_2, 1);

 FUNC_10();
 FUNC_5(VAR_1);
}
