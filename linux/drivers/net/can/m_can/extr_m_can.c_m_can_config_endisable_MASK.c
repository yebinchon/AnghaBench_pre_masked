
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct m_can_classdev {int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct m_can_classdev*,int ) ;
 int FUNC_1 (struct m_can_classdev*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;

void FUNC_4(struct m_can_classdev *VAR_4, bool VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_4, VAR_3);
 u32 VAR_7 = 10;
 u32 VAR_8 = 0;


 if (VAR_6 & VAR_1)
  VAR_6 &= ~VAR_1;

 if (VAR_5) {

  if (VAR_6 & VAR_1)
   VAR_6 &= ~VAR_1;


  FUNC_1(VAR_4, VAR_3, VAR_6 | VAR_2);
  FUNC_3(5);

  FUNC_1(VAR_4, VAR_3, VAR_6 | VAR_2 | VAR_0);
 } else {
  FUNC_1(VAR_4, VAR_3, VAR_6 & ~(VAR_2 | VAR_0));
 }


 if (VAR_5)
  VAR_8 = VAR_2 | VAR_0;

 while ((FUNC_0(VAR_4, VAR_3) & (VAR_2 | VAR_0)) != VAR_8) {
  if (VAR_7 == 0) {
   FUNC_2(VAR_4->net, "Failed to init module\n");
   return;
  }
  VAR_7--;
  FUNC_3(1);
 }
}
