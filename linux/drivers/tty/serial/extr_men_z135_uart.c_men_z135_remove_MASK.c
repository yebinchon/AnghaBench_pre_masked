
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct men_z135_port {scalar_t__ rxbuf; int port; } ;
struct mcb_device {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 struct men_z135_port* FUNC_1 (struct mcb_device*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct mcb_device *VAR_2)
{
 struct men_z135_port *VAR_3 = FUNC_1(VAR_2);

 VAR_0--;
 FUNC_2(&VAR_1, &VAR_3->port);
 FUNC_0((unsigned long) VAR_3->rxbuf);
}
