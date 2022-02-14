
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct rt2x00lib_conf {TYPE_3__* conf; } ;
struct rt2x00_dev {short lna_gain; } ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct TYPE_4__ {scalar_t__ band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_5,
        struct rt2x00lib_conf *VAR_6)
{
 u16 VAR_7;
 short VAR_8 = 0;

 if (VAR_6->conf->chandef.chan->band == VAR_4) {
  if (FUNC_2(VAR_5))
   VAR_8 += 14;

  VAR_7 = FUNC_0(VAR_5, VAR_2);
  VAR_8 -= FUNC_1(VAR_7, VAR_3);
 } else {
  VAR_7 = FUNC_0(VAR_5, VAR_0);
  VAR_8 -= FUNC_1(VAR_7, VAR_1);
 }

 VAR_5->lna_gain = VAR_8;
}
