
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpci {int regmap; } ;
struct tcpc_dev {int dummy; } ;
typedef enum typec_cc_polarity { ____Placeholder_typec_cc_polarity } typec_cc_polarity ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 struct tcpci* FUNC_2 (struct tcpc_dev*) ;

__attribute__((used)) static int FUNC_3(struct tcpc_dev *VAR_7,
         enum typec_cc_polarity VAR_8)
{
 struct tcpci *VAR_9 = FUNC_2(VAR_7);
 unsigned int VAR_10;
 int VAR_11;


 VAR_11 = FUNC_0(VAR_9->regmap, VAR_0, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_8 == VAR_6)
  VAR_10 |= VAR_3 << VAR_1;
 else
  VAR_10 |= VAR_3 << VAR_2;
 VAR_11 = FUNC_1(VAR_9->regmap, VAR_0, VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 return FUNC_1(VAR_9->regmap, VAR_4,
      (VAR_8 == VAR_6) ?
      VAR_5 : 0);
}
