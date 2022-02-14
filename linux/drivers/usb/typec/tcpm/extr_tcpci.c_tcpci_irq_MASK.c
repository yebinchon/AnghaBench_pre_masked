
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tcpci {int port; int regmap; } ;
struct pd_message {int payload; int header; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (struct tcpci*,int ,int*) ;
 int FUNC_5 (struct tcpci*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct pd_message*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

irqreturn_t FUNC_12(struct tcpci *VAR_16)
{
 u16 VAR_17;

 FUNC_4(VAR_16, VAR_1, &VAR_17);





 if (VAR_17 & ~VAR_5)
  FUNC_5(VAR_16, VAR_1,
         VAR_17 & ~VAR_5);

 if (VAR_17 & VAR_2)
  FUNC_6(VAR_16->port);

 if (VAR_17 & VAR_3) {
  unsigned int VAR_18;

  FUNC_3(VAR_16->regmap, VAR_9, &VAR_18);





  if (VAR_18 == 0xff)
   FUNC_10(VAR_16->port);
  else
   FUNC_11(VAR_16->port);
 }

 if (VAR_17 & VAR_5) {
  struct pd_message VAR_19;
  unsigned int VAR_20;
  u16 VAR_21;

  FUNC_3(VAR_16->regmap, VAR_10, &VAR_20);

  FUNC_4(VAR_16, VAR_12, &VAR_21);
  VAR_19.header = FUNC_1(VAR_21);

  if (FUNC_0(VAR_20 > sizeof(VAR_19.payload)))
   VAR_20 = sizeof(VAR_19.payload);

  if (VAR_20 > 0)
   FUNC_2(VAR_16->regmap, VAR_11,
     &VAR_19.payload, VAR_20);


  FUNC_5(VAR_16, VAR_1, VAR_5);

  FUNC_8(VAR_16->port, &VAR_19);
 }

 if (VAR_17 & VAR_4)
  FUNC_7(VAR_16->port);

 if (VAR_17 & VAR_8)
  FUNC_9(VAR_16->port, VAR_15);
 else if (VAR_17 & VAR_6)
  FUNC_9(VAR_16->port, VAR_13);
 else if (VAR_17 & VAR_7)
  FUNC_9(VAR_16->port, VAR_14);

 return VAR_0;
}
