
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpci {int regmap; } ;
struct tcpc_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct tcpci* FUNC_1 (struct tcpc_dev*) ;

__attribute__((used)) static int FUNC_2(struct tcpc_dev *VAR_2)
{
 struct tcpci *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->regmap, VAR_0, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return !!(VAR_4 & VAR_1);
}
