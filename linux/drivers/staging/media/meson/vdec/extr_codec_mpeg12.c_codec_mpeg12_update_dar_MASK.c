
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int numerator; int denominator; } ;
struct amvdec_session {TYPE_1__ pixelaspect; struct amvdec_core* core; } ;
struct amvdec_core {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amvdec_core*,int ) ;
 int FUNC_1 (struct amvdec_session*,int,int) ;

__attribute__((used)) static void FUNC_2(struct amvdec_session *VAR_2)
{
 struct amvdec_core *VAR_3 = VAR_2->core;
 u32 VAR_4 = FUNC_0(VAR_3, VAR_1);
 u32 VAR_5 = VAR_4 & VAR_0;

 switch (VAR_5) {
 case 128:
  FUNC_1(VAR_2, 4, 3);
  break;
 case 130:
  FUNC_1(VAR_2, 16, 9);
  break;
 case 129:
  FUNC_1(VAR_2, 221, 100);
  break;
 default:
  VAR_2->pixelaspect.numerator = 1;
  VAR_2->pixelaspect.denominator = 1;
  break;
 }
}
