
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ar9170 {TYPE_3__* hw; } ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct TYPE_8__ {TYPE_2__ chandef; } ;
struct TYPE_7__ {TYPE_4__ conf; } ;
struct TYPE_5__ {scalar_t__ band; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ar9170*,int ,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;

int FUNC_2(struct ar9170 *VAR_2)
{
 u32 VAR_3, VAR_4;

 if (FUNC_1(&VAR_2->hw->conf)) {

  VAR_3 = 0x1da;
  VAR_4 = 0x10a;
 } else {
  if (VAR_2->hw->conf.chandef.chan->band == VAR_1) {

   VAR_3 = 033;
   VAR_4 = 003;
  } else {

   VAR_3 = 0x1bb;
   VAR_4 = 0x10b;
  }
 }

 return FUNC_0(VAR_2, VAR_0,
      VAR_3 | (VAR_4) << 16);
}
