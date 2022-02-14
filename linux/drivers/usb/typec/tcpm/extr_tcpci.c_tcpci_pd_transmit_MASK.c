
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tcpci {int regmap; } ;
struct tcpc_dev {int dummy; } ;
struct pd_message {int payload; int header; } ;
typedef enum tcpm_transmit_type { ____Placeholder_tcpm_transmit_type } tcpm_transmit_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 struct tcpci* FUNC_4 (struct tcpc_dev*) ;
 int FUNC_5 (struct tcpci*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct tcpc_dev *VAR_7,
        enum tcpm_transmit_type VAR_8,
        const struct pd_message *VAR_9)
{
 struct tcpci *VAR_10 = FUNC_4(VAR_7);
 u16 VAR_11 = VAR_9 ? FUNC_0(VAR_9->header) : 0;
 unsigned int VAR_12, VAR_13;
 int VAR_14;

 VAR_13 = VAR_9 ? FUNC_1(VAR_11) * 4 : 0;
 VAR_14 = FUNC_3(VAR_10->regmap, VAR_4, VAR_13 + 2);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_5(VAR_10, VAR_6, VAR_11);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_13 > 0) {
  VAR_14 = FUNC_2(VAR_10->regmap, VAR_5,
           &VAR_9->payload, VAR_13);
  if (VAR_14 < 0)
   return VAR_14;
 }

 VAR_12 = (VAR_0 << VAR_2) |
  (VAR_8 << VAR_3);
 VAR_14 = FUNC_3(VAR_10->regmap, VAR_1, VAR_12);
 if (VAR_14 < 0)
  return VAR_14;

 return 0;
}
