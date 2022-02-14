
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int dummy; } ;


 int FUNC_0 (struct SiS_Private*,unsigned long,unsigned short) ;

__attribute__((used)) static void
FUNC_1(struct SiS_Private *VAR_0, unsigned long VAR_1,
      unsigned short VAR_2, unsigned short VAR_3, unsigned short VAR_4,
      unsigned short VAR_5, unsigned short VAR_6)
{
 unsigned short VAR_7, VAR_8, VAR_9;

 switch (VAR_3) {
 case 0:
  VAR_7 = VAR_6;
  VAR_8 = VAR_4;
  VAR_9 = VAR_5;
  break;
 case 1:
  VAR_7 = VAR_4;
  VAR_8 = VAR_5;
  VAR_9 = VAR_6;
  break;
 default:
  VAR_7 = VAR_5;
  VAR_8 = VAR_6;
  VAR_9 = VAR_4;
 }
 FUNC_0(VAR_0, VAR_1, (VAR_7 << VAR_2));
 FUNC_0(VAR_0, VAR_1, (VAR_8 << VAR_2));
 FUNC_0(VAR_0, VAR_1, (VAR_9 << VAR_2));
}
