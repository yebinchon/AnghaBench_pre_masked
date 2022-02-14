
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ttusbir {int rc; } ;
struct ir_raw_event {int pulse; int duration; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct ir_raw_event*) ;

__attribute__((used)) static void FUNC_4(struct ttusbir *VAR_2, uint8_t *VAR_3)
{
 struct ir_raw_event VAR_4 = {};
 unsigned VAR_5, VAR_6, VAR_7;
 bool VAR_8 = 0;

 for (VAR_5 = 0; VAR_5 < 128; VAR_5++) {
  VAR_6 = VAR_3[VAR_5] & 0xfe;
  switch (VAR_6) {
  case 0xfe:
   VAR_4.pulse = 0;
   VAR_4.duration = VAR_1;
   if (FUNC_3(VAR_2->rc, &VAR_4))
    VAR_8 = 1;
   break;
  case 0:
   VAR_4.pulse = 1;
   VAR_4.duration = VAR_1;
   if (FUNC_3(VAR_2->rc, &VAR_4))
    VAR_8 = 1;
   break;
  default:

   if (VAR_6 & 2) {
    VAR_7 = FUNC_1(VAR_6 | 1);
    VAR_4.pulse = 1;
   } else {
    VAR_7 = FUNC_0(VAR_6) - 1;
    VAR_4.pulse = 0;
   }

   VAR_4.duration = VAR_0 * (8 - VAR_7);
   if (FUNC_3(VAR_2->rc, &VAR_4))
    VAR_8 = 1;

   VAR_4.pulse = !VAR_4.pulse;
   VAR_4.duration = VAR_0 * VAR_7;
   if (FUNC_3(VAR_2->rc, &VAR_4))
    VAR_8 = 1;
   break;
  }
 }


 if (VAR_8)
  FUNC_2(VAR_2->rc);
}
