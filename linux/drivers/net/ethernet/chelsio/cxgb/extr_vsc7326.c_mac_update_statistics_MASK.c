
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmac_statistics {int TxOctetsOK; int RxOctetsBad; int RxOctetsOK; } ;
struct cmac {struct cmac_statistics const stats; TYPE_1__* instance; } ;
struct TYPE_2__ {scalar_t__ ticks; int index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cmac*) ;
 int FUNC_4 (struct cmac*,int ,int *) ;

__attribute__((used)) static const struct cmac_statistics *FUNC_5(struct cmac *VAR_2,
          int VAR_3)
{
 if (VAR_3 == VAR_0 ||
     VAR_2->instance->ticks >= VAR_1) {
  FUNC_3(VAR_2);
  VAR_2->instance->ticks = 0;
 } else {
  int VAR_4 = VAR_2->instance->index;

  FUNC_4(VAR_2, FUNC_1(VAR_4),
       &VAR_2->stats.RxOctetsOK);
  FUNC_4(VAR_2, FUNC_0(VAR_4),
       &VAR_2->stats.RxOctetsBad);
  FUNC_4(VAR_2, FUNC_2(VAR_4),
       &VAR_2->stats.TxOctetsOK);
  VAR_2->instance->ticks++;
 }
 return &VAR_2->stats;
}
