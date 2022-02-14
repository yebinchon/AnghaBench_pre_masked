
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwtty_port {int lock; int peer; } ;
struct fwtty_peer {TYPE_1__* serial; } ;
struct TYPE_2__ {struct fwtty_port** ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fwtty_port* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct fwtty_peer*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static struct fwtty_port *FUNC_6(struct fwtty_peer *VAR_3,
           int VAR_4)
{
 struct fwtty_port *VAR_5;

 if (VAR_4 < 0 || VAR_4 >= VAR_2)
  return FUNC_0(-VAR_1);


 FUNC_5();

 VAR_5 = VAR_3->serial->ports[VAR_4];
 FUNC_3(&VAR_5->lock);
 if (!FUNC_1(VAR_5->peer))
  FUNC_2(VAR_5->peer, VAR_3);
 else
  VAR_5 = FUNC_0(-VAR_0);
 FUNC_4(&VAR_5->lock);

 return VAR_5;
}
