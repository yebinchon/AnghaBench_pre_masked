
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bttv_ir {int active; int last_bit; int code; int timer; int base_time; } ;
struct bttv {int c; struct bttv_ir* remote; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int,char*) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct bttv *VAR_3)
{
 struct bttv_ir *VAR_4 = VAR_3->remote;
 ktime_t VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 unsigned long VAR_8;


 VAR_6 = FUNC_0(&VAR_3->c);


 VAR_8 = VAR_2;
 VAR_5 = FUNC_3();

 VAR_7 = FUNC_5(FUNC_4(VAR_5, VAR_4->base_time));

 if (VAR_7 > VAR_0) {
  VAR_7 = 200000;
 }

 FUNC_2("RC5 IRQ: gap %d us for %s\n",
  VAR_7, (VAR_6 & 0x20) ? "mark" : "space");


 if (!(VAR_6 & 0x20))
  return 0;


 if (VAR_4->active) {


  if (VAR_4->last_bit < 28) {
   VAR_4->last_bit = (VAR_7 - VAR_1 / 2) /
       VAR_1;
   VAR_4->code |= 1 << VAR_4->last_bit;
  }

 } else {
  VAR_4->active = 1;
  VAR_4->code = 0;
  VAR_4->base_time = VAR_5;
  VAR_4->last_bit = 0;

  FUNC_6(&VAR_4->timer, VAR_8 + FUNC_7(30));
 }


 FUNC_1(&VAR_3->c, VAR_6 & ~(1 << 4));
 FUNC_1(&VAR_3->c, VAR_6 | (1 << 4));
 return 1;
}
