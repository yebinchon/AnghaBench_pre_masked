
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u_long ;
struct map_info {int dummy; } ;
struct cfi_private {int dummy; } ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {unsigned long* x; TYPE_1__ member_0; } ;
typedef TYPE_2__ map_word ;


 int FUNC_0 () ;
 int FUNC_1 (struct cfi_private*) ;
 unsigned long FUNC_2 (struct map_info*,unsigned long) ;
 unsigned long FUNC_3 (struct map_info*,unsigned long) ;
 int FUNC_4 (struct map_info*) ;
 scalar_t__ FUNC_5 (struct map_info*) ;

map_word FUNC_6(u_long VAR_0, struct map_info *VAR_1, struct cfi_private *VAR_2)
{
 map_word VAR_3 = { 0 };
 int VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8;
 int VAR_9;





 if (FUNC_5(VAR_1)) {
  VAR_4 = sizeof(unsigned long);
  VAR_5 = (FUNC_4(VAR_1)) / VAR_4;
 } else {
  VAR_4 = FUNC_4(VAR_1);
  VAR_5 = 1;
 }

 VAR_6 = FUNC_4(VAR_1) / FUNC_1(VAR_2);
 VAR_7 = VAR_4 * FUNC_1(VAR_2) / FUNC_4(VAR_1);



 switch (VAR_6) {
 default: FUNC_0();
 case 1:
  VAR_8 = VAR_0;
  break;
 case 2:
  VAR_8 = FUNC_2(VAR_1, VAR_0);
  break;
 case 4:
  VAR_8 = FUNC_3(VAR_1, VAR_0);
  break;
 }



 switch (VAR_7) {
 default: FUNC_0();





 case 4:
  VAR_8 |= (VAR_8 << (VAR_6 * 16));

 case 2:
  VAR_8 |= (VAR_8 << (VAR_6 * 8));

 case 1:
  ;
 }



 for (VAR_9=0; VAR_9 < VAR_5; VAR_9++) {
  VAR_3.x[VAR_9] = VAR_8;
 }

 return VAR_3;
}
