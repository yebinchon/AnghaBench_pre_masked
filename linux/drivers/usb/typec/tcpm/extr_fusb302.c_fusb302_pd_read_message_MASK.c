
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pd_message {int header; scalar_t__ payload; } ;
struct fusb302_chip {int tcpm_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fusb302_chip*,int ,int,int *) ;
 int FUNC_1 (struct fusb302_chip*,int ,int *) ;
 int FUNC_2 (struct fusb302_chip*,char*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,struct pd_message*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct fusb302_chip *VAR_5,
       struct pd_message *VAR_6)
{
 int VAR_7 = 0;
 u8 VAR_8;
 u8 VAR_9[4];
 int VAR_10;


 VAR_7 = FUNC_1(VAR_5, VAR_1, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_5, VAR_1, 2,
         (u8 *)&VAR_6->header);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_10 = FUNC_3(VAR_6->header) * 4;

 if (VAR_10 > VAR_3 * 4) {
  FUNC_2(VAR_5, "PD message too long %d", VAR_10);
  return -VAR_0;
 }
 if (VAR_10 > 0) {
  VAR_7 = FUNC_0(VAR_5, VAR_1, VAR_10,
          (u8 *)VAR_6->payload);
  if (VAR_7 < 0)
   return VAR_7;
 }

 VAR_7 = FUNC_0(VAR_5, VAR_1, 4, VAR_9);
 if (VAR_7 < 0)
  return VAR_7;
 FUNC_2(VAR_5, "PD message header: %x", VAR_6->header);
 FUNC_2(VAR_5, "PD message len: %d", VAR_10);
 if ((!VAR_10) && (FUNC_4(VAR_6->header) == VAR_2))
  FUNC_6(VAR_5->tcpm_port, VAR_4);
 else
  FUNC_5(VAR_5->tcpm_port, VAR_6);

 return VAR_7;
}
