
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xchars; } ;
struct fwtty_port {int peer; TYPE_1__ stats; } ;
struct fwtty_peer {int fifo_addr; } ;
typedef int ch ;


 int VAR_0 ;
 int FUNC_0 (struct fwtty_port*,char*,char) ;
 int FUNC_1 (struct fwtty_peer*,int ,int ,char*,int,int *,struct fwtty_port*) ;
 struct fwtty_peer* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct fwtty_port *VAR_1, char VAR_2)
{
 struct fwtty_peer *VAR_3;

 ++VAR_1->stats.xchars;

 FUNC_0(VAR_1, "%02x\n", VAR_2);

 FUNC_3();
 VAR_3 = FUNC_2(VAR_1->peer);
 if (VAR_3) {
  FUNC_1(VAR_3, VAR_0,
          VAR_3->fifo_addr, &VAR_2, sizeof(VAR_2),
          ((void*)0), VAR_1);
 }
 FUNC_4();
}
