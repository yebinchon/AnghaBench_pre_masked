
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int lock; scalar_t__ membase; } ;
struct men_z135_port {TYPE_1__* mdev; int stat_reg; struct uart_port port; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct men_z135_port*) ;
 int FUNC_6 (struct men_z135_port*) ;
 int FUNC_7 (struct men_z135_port*) ;
 int FUNC_8 (struct men_z135_port*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_6, void *VAR_7)
{
 struct men_z135_port *VAR_8 = (struct men_z135_port *)VAR_7;
 struct uart_port *VAR_9 = &VAR_8->port;
 bool VAR_10 = 0;
 int VAR_11;

 VAR_8->stat_reg = FUNC_3(VAR_9->membase + VAR_5);
 VAR_11 = FUNC_0(VAR_8->stat_reg);

 if (!VAR_11)
  goto out;

 FUNC_9(&VAR_9->lock);

 FUNC_4(VAR_11, VAR_9->membase + VAR_5);

 if (VAR_11 & VAR_3) {
  FUNC_5(VAR_8);
  VAR_10 = 1;
 }

 if (VAR_11 & (VAR_2 | VAR_0)) {
  if (VAR_11 & VAR_0)
   FUNC_2(&VAR_8->mdev->dev, "Character Timeout Indication\n");
  FUNC_7(VAR_8);
  VAR_10 = 1;
 }

 if (VAR_11 & VAR_4) {
  FUNC_8(VAR_8);
  VAR_10 = 1;
 }

 if (VAR_11 & VAR_1) {
  FUNC_6(VAR_8);
  VAR_10 = 1;
 }

 FUNC_10(&VAR_9->lock);
out:
 return FUNC_1(VAR_10);
}
