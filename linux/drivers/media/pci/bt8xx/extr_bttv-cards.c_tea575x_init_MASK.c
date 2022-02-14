
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mute; int * ops; struct bttv* private_data; } ;
struct TYPE_3__ {int nr; } ;
struct bttv {scalar_t__ has_radio; scalar_t__ has_tea575x; TYPE_2__ tea; TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct bttv *VAR_2)
{
 VAR_2->tea.private_data = VAR_2;
 VAR_2->tea.ops = &VAR_1;
 if (!FUNC_1(&VAR_2->tea)) {
  FUNC_0("%d: detected TEA575x radio\n", VAR_2->c.nr);
  VAR_2->tea.mute = 0;
  return 0;
 }

 VAR_2->has_tea575x = 0;
 VAR_2->has_radio = 0;

 return -VAR_0;
}
