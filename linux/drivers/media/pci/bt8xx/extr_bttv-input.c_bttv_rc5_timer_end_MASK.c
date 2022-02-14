
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct timer_list {int dummy; } ;
struct bttv_ir {int active; int last_bit; int code; int shift_by; int dev; int base_time; } ;
typedef int ktime_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int,int) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 struct bttv_ir* FUNC_7 (int ,struct timer_list*,int ) ;
 struct bttv_ir* VAR_2 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_12(struct timer_list *VAR_4)
{
 struct bttv_ir *VAR_5 = FUNC_7(VAR_5, VAR_4, VAR_3);
 ktime_t VAR_6;
 u32 VAR_7, VAR_8, VAR_9;
 u8 VAR_10, VAR_11, VAR_12;


 VAR_6 = FUNC_8();

 VAR_7 = FUNC_10(FUNC_9(VAR_6, VAR_5->base_time));

 if (VAR_7 > VAR_1) {
  VAR_7 = 200000;
 }

 VAR_5->active = 0;


 if (VAR_7 < 28000) {
  FUNC_6("spurious timer_end\n");
  return;
 }

 if (VAR_5->last_bit < 20) {

  FUNC_6("short code: %x\n", VAR_5->code);
  return;
 }

 VAR_5->code = (VAR_5->code << VAR_5->shift_by) | 1;
 VAR_8 = FUNC_5(VAR_5->code);

 VAR_10 = FUNC_3(VAR_8);
 VAR_12 = FUNC_0(VAR_8);
 VAR_11 = FUNC_1(VAR_8);

 switch (FUNC_2(VAR_8)) {
 case 0x3:
  break;
 case 0x2:
  VAR_11 += 0x40;
  break;
 default:
  return;
 }

 VAR_9 = FUNC_4(VAR_12, VAR_11);
 FUNC_11(VAR_5->dev, VAR_0, VAR_9, VAR_10);
 FUNC_6("scancode %x, toggle %x\n", VAR_9, VAR_10);
}
