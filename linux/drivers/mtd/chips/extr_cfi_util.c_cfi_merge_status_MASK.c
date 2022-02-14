
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct map_info {int dummy; } ;
struct cfi_private {int dummy; } ;
struct TYPE_3__ {unsigned long* x; } ;
typedef TYPE_1__ map_word ;


 int FUNC_0 () ;
 unsigned long FUNC_1 (struct map_info*,unsigned long) ;
 unsigned long FUNC_2 (struct map_info*,unsigned long) ;
 int FUNC_3 (struct cfi_private*) ;
 int FUNC_4 (struct map_info*) ;
 scalar_t__ FUNC_5 (struct map_info*) ;

unsigned long FUNC_6(map_word VAR_0, struct map_info *VAR_1,
        struct cfi_private *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8 = 0;
 int VAR_9;





 if (FUNC_5(VAR_1)) {
  VAR_3 = sizeof(unsigned long);
  VAR_4 = (FUNC_4(VAR_1)) / VAR_3;
 } else {
  VAR_3 = FUNC_4(VAR_1);
  VAR_4 = 1;
 }

 VAR_5 = FUNC_4(VAR_1) / FUNC_3(VAR_2);
 VAR_6 = VAR_3 * FUNC_3(VAR_2) / FUNC_4(VAR_1);

 VAR_7 = VAR_0.x[0];

 for (VAR_9=1; VAR_9 < VAR_4; VAR_9++) {
  VAR_7 |= VAR_0.x[VAR_9];
 }

 VAR_8 = VAR_7;
 switch(VAR_6) {
 default: FUNC_0();





 case 4:
  VAR_8 |= (VAR_7 >> (VAR_5 * 16));

 case 2:
  VAR_8 |= (VAR_7 >> (VAR_5 * 8));

 case 1:
  ;
 }



 switch (VAR_5) {
 case 1:
  break;
 case 2:
  VAR_8 = FUNC_1(VAR_1, VAR_8);
  break;
 case 4:
  VAR_8 = FUNC_2(VAR_1, VAR_8);
  break;
 default: FUNC_0();
 }
 return VAR_8;
}
