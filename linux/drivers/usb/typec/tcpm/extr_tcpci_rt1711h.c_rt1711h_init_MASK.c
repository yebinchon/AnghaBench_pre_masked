
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpci_data {int dummy; } ;
struct tcpci {int dummy; } ;
struct rt1711h_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (struct rt1711h_chip*,int ,int) ;
 int FUNC_3 (struct rt1711h_chip*,int ,int) ;
 struct rt1711h_chip* FUNC_4 (struct tcpci_data*) ;

__attribute__((used)) static int FUNC_5(struct tcpci *VAR_5, struct tcpci_data *VAR_6)
{
 int VAR_7;
 struct rt1711h_chip *VAR_8 = FUNC_4(VAR_6);


 VAR_7 = FUNC_3(VAR_8, VAR_4,
        FUNC_1(0, 1, 1, 2));
 if (VAR_7 < 0)
  return VAR_7;


 VAR_7 = FUNC_3(VAR_8, VAR_0,
        FUNC_0(1, 0x0F));
 if (VAR_7 < 0)
  return VAR_7;


 VAR_7 = FUNC_3(VAR_8, VAR_1, 0x0F);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_7 = FUNC_3(VAR_8, VAR_2, 0x04);
 if (VAR_7 < 0)
  return VAR_7;


 return FUNC_2(VAR_8, VAR_3, 330);
}
