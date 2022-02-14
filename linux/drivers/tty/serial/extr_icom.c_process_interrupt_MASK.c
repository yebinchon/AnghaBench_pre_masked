
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int lock; } ;
struct icom_port {TYPE_1__ uart_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct icom_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct icom_port*,char*,int) ;
 int FUNC_4 (int,struct icom_port*) ;

__attribute__((used)) static void FUNC_5(u16 VAR_3,
         struct icom_port *VAR_4)
{

 FUNC_1(&VAR_4->uart_port.lock);
 FUNC_3(VAR_4, "INTERRUPT", VAR_3);

 if (VAR_3 & (VAR_1 | VAR_2))
  FUNC_4(VAR_3, VAR_4);

 if (VAR_3 & VAR_0)
  FUNC_0(VAR_3, VAR_4);

 FUNC_2(&VAR_4->uart_port.lock);
}
