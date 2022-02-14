
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ buf; } ;
struct eg20t_port {TYPE_1__ rxbuf; int port; int debugfs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct eg20t_port *VAR_1)
{




 FUNC_2(&VAR_0, &VAR_1->port);
 FUNC_1((unsigned long)VAR_1->rxbuf.buf);
}
