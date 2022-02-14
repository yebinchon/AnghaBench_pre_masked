
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpci {int regmap; } ;
struct tcpc_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct tcpci* FUNC_1 (struct tcpc_dev*) ;

__attribute__((used)) static int FUNC_2(struct tcpc_dev *VAR_3, bool VAR_4)
{
 struct tcpci *VAR_5 = FUNC_1(VAR_3);
 unsigned int VAR_6 = 0;
 int VAR_7;

 if (VAR_4)
  VAR_6 = VAR_2 | VAR_1;
 VAR_7 = FUNC_0(VAR_5->regmap, VAR_0, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
