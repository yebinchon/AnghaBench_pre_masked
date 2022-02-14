
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rt1711h_chip {int tcpci; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rt1711h_chip*,int ,int*) ;
 int FUNC_1 (struct rt1711h_chip*,int ,int*) ;
 int FUNC_2 (struct rt1711h_chip*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 int VAR_7;
 u16 VAR_8;
 u8 VAR_9;
 struct rt1711h_chip *VAR_10 = VAR_6;

 if (!VAR_10->tcpci)
  return VAR_0;

 VAR_7 = FUNC_0(VAR_10, VAR_1, &VAR_8);
 if (VAR_7 < 0)
  goto out;

 if (VAR_8 & VAR_2) {
  VAR_7 = FUNC_1(VAR_10, VAR_3, &VAR_9);
  if (VAR_7 < 0)
   goto out;

  if (VAR_9 & VAR_4)
   FUNC_2(VAR_10, VAR_1, VAR_2);
 }

out:
 return FUNC_3(VAR_10->tcpci);
}
