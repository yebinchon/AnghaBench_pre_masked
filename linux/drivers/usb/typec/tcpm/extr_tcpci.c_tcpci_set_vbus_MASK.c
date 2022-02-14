
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpci {int regmap; } ;
struct tcpc_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 struct tcpci* FUNC_1 (struct tcpc_dev*) ;

__attribute__((used)) static int FUNC_2(struct tcpc_dev *VAR_5, bool VAR_6, bool VAR_7)
{
 struct tcpci *VAR_8 = FUNC_1(VAR_5);
 int VAR_9;



 if (!VAR_6) {
  VAR_9 = FUNC_0(VAR_8->regmap, VAR_4,
       VAR_1);
  if (VAR_9 < 0)
   return VAR_9;
 }

 if (!VAR_7) {
  VAR_9 = FUNC_0(VAR_8->regmap, VAR_4,
       VAR_0);
  if (VAR_9 < 0)
   return VAR_9;
 }

 if (VAR_6) {
  VAR_9 = FUNC_0(VAR_8->regmap, VAR_4,
       VAR_3);
  if (VAR_9 < 0)
   return VAR_9;
 }

 if (VAR_7) {
  VAR_9 = FUNC_0(VAR_8->regmap, VAR_4,
       VAR_2);
  if (VAR_9 < 0)
   return VAR_9;
 }

 return 0;
}
