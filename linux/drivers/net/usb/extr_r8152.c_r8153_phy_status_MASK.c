
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct r8152 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct r8152*,int ) ;

__attribute__((used)) static u16 FUNC_2(struct r8152 *VAR_5, u16 VAR_6)
{
 u16 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 500; VAR_8++) {
  VAR_7 = FUNC_1(VAR_5, VAR_0);
  VAR_7 &= VAR_3;
  if (VAR_6) {
   if (VAR_7 == VAR_6)
    break;
  } else if (VAR_7 == VAR_2 || VAR_7 == VAR_4 ||
      VAR_7 == VAR_1) {
   break;
  }

  FUNC_0(20);
 }

 return VAR_7;
}
