
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t type; } ;
struct bttv {TYPE_1__ c; int has_radio_tuner; int users; scalar_t__ opt_automute; } ;
struct TYPE_4__ {int gpiomute; int* gpiomux; int gpiomask; } ;


 int VAR_0 ;
 int VAR_1 ;


 int * VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bttv*,int ) ;
 int FUNC_2 (struct bttv*,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct bttv *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 FUNC_4(VAR_4[VAR_5->c.type].gpiomask,
     VAR_4[VAR_5->c.type].gpiomask);
 VAR_9 = FUNC_0(VAR_0) & VAR_1;


 VAR_10 = VAR_7 || (VAR_5->opt_automute && (!VAR_9 || !VAR_5->users)
    && !VAR_5->has_radio_tuner);

 if (VAR_10)
  VAR_8 = VAR_4[VAR_5->c.type].gpiomute;
 else
  VAR_8 = VAR_4[VAR_5->c.type].gpiomux[VAR_6];

 switch (VAR_5->c.type) {
 case 128:
 case 129:
  VAR_8 = FUNC_2(VAR_5, VAR_8);
  break;

 default:
  FUNC_3(VAR_4[VAR_5->c.type].gpiomask, VAR_8);
 }

 if (VAR_3)
  FUNC_1(VAR_5, VAR_2[VAR_10 ? 4 : VAR_6]);
}
