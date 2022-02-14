
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct m_can_classdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct m_can_classdev*,int) ;
 int FUNC_1 (struct m_can_classdev*,int ) ;
 int FUNC_2 (struct m_can_classdev*,int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static bool FUNC_4(struct m_can_classdev *VAR_3)
{
 u32 VAR_4, VAR_5 = 0;
 int VAR_6 = -VAR_1;
 int VAR_7;

 FUNC_0(VAR_3, 1);
 VAR_4 = FUNC_1(VAR_3, VAR_2);
 VAR_4 |= VAR_0;
 FUNC_2(VAR_3, VAR_2, VAR_4);

 for (VAR_7 = 0; VAR_7 <= 10; VAR_7++) {
  VAR_5 = FUNC_1(VAR_3, VAR_2);
  if (VAR_5 == VAR_4) {
   VAR_6 = 0;
   break;
  }

  FUNC_3(1, 5);
 }


 VAR_4 &= ~(VAR_0);
 FUNC_2(VAR_3, VAR_2, VAR_4);

 FUNC_0(VAR_3, 0);


 return !VAR_6;
}
