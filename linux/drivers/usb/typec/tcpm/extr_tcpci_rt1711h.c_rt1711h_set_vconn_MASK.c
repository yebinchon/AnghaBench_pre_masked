
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpci_data {int dummy; } ;
struct tcpci {int dummy; } ;
struct rt1711h_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (struct rt1711h_chip*,int ,int ) ;
 struct rt1711h_chip* FUNC_2 (struct tcpci_data*) ;

__attribute__((used)) static int FUNC_3(struct tcpci *VAR_1, struct tcpci_data *VAR_2,
        bool VAR_3)
{
 struct rt1711h_chip *VAR_4 = FUNC_2(VAR_2);

 return FUNC_1(VAR_4, VAR_0,
         FUNC_0(0, 1, !VAR_3, 2));
}
