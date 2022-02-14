
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct uart_port {int dummy; } ;
struct TYPE_2__ {int irq; int lock; } ;
struct dz_port {TYPE_1__ port; struct dz_mux* mux; } ;
struct dz_mux {int irq_guard; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct dz_port*,int ) ;
 int FUNC_2 (struct dz_port*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,struct dz_mux*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct dz_port* FUNC_7 (struct uart_port*) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_3)
{
 struct dz_port *VAR_4 = FUNC_7(VAR_3);
 struct dz_mux *VAR_5 = VAR_4->mux;
 unsigned long VAR_6;
 int VAR_7;
 u16 VAR_8;

 FUNC_5(&VAR_4->port.lock, VAR_6);
 FUNC_3(&VAR_4->port);
 FUNC_6(&VAR_4->port.lock, VAR_6);

 VAR_7 = FUNC_0(-1, &VAR_5->irq_guard);
 if (!VAR_7) {

  VAR_8 = FUNC_1(VAR_4, VAR_0);
  VAR_8 &= ~(VAR_1 | VAR_2);
  FUNC_2(VAR_4, VAR_0, VAR_8);

  FUNC_4(VAR_4->port.irq, VAR_5);
 }
}
