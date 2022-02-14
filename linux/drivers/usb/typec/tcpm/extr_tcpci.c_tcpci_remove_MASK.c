
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpci_chip {int tcpci; } ;
struct i2c_client {int dummy; } ;


 struct tcpci_chip* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct tcpci_chip *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->tcpci);

 return 0;
}
