
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int fck; int bus_pick_width; int bus_pick_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(void *VAR_4, unsigned int VAR_5)
{
 FUNC_2(VAR_3.fck);
 FUNC_4(VAR_0);
 FUNC_0(VAR_3.bus_pick_count, VAR_3.bus_pick_width);

 FUNC_8(VAR_2, 1 << 18);
 FUNC_3(VAR_5);
 FUNC_9();
 while (VAR_5 >= 4) {
  *(u32 *) VAR_4 = FUNC_5(VAR_1);
  VAR_5 -= 4;
  VAR_4 += 4;
 }
 while (VAR_5 >= 2) {
  *(u16 *) VAR_4 = FUNC_6(VAR_1);
  VAR_5 -= 2;
  VAR_4 += 2;
 }
 while (VAR_5) {
  *(u8 *) VAR_4 = FUNC_7(VAR_1);
  VAR_5--;
  VAR_4++;
 }
 FUNC_10();
 FUNC_1(VAR_3.fck);
}
