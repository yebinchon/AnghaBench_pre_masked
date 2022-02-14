
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct m_can_classdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct m_can_classdev*,int ) ;

__attribute__((used)) static int FUNC_1(struct m_can_classdev *VAR_5)
{
 u32 VAR_6;
 u8 VAR_7;
 u8 VAR_8;
 int VAR_9;




 VAR_6 = FUNC_0(VAR_5, VAR_4);
 VAR_7 = (u8)((VAR_6 & VAR_0) >> VAR_1);
 VAR_8 = (u8)((VAR_6 & VAR_2) >> VAR_3);

 if (VAR_7 == 3) {

  VAR_9 = 30 + VAR_8;
 } else {

  VAR_9 = 0;
 }

 return VAR_9;
}
