
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt2x00lib_conf {TYPE_2__* conf; int channel; int rf; } ;
struct rt2x00_dev {int dummy; } ;
struct TYPE_3__ {int chan; } ;
struct TYPE_4__ {int power_level; TYPE_1__ chandef; } ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 int FUNC_0 (struct rt2x00_dev*,TYPE_2__*,int *,int *) ;
 int FUNC_1 (struct rt2x00_dev*,struct rt2x00lib_conf*) ;
 int FUNC_2 (struct rt2x00_dev*,struct rt2x00lib_conf*) ;
 int FUNC_3 (struct rt2x00_dev*,struct rt2x00lib_conf*) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int ) ;

void FUNC_5(struct rt2x00_dev *VAR_4,
     struct rt2x00lib_conf *VAR_5,
     const unsigned int VAR_6)
{

 FUNC_1(VAR_4, VAR_5);

 if (VAR_6 & VAR_0) {
  FUNC_0(VAR_4, VAR_5->conf,
          &VAR_5->rf, &VAR_5->channel);
  FUNC_4(VAR_4, VAR_5->conf->chandef.chan,
          VAR_5->conf->power_level);
 }
 if (VAR_6 & VAR_1)
  FUNC_4(VAR_4, VAR_5->conf->chandef.chan,
          VAR_5->conf->power_level);
 if (VAR_6 & VAR_3)
  FUNC_3(VAR_4, VAR_5);
 if (VAR_6 & VAR_2)
  FUNC_2(VAR_4, VAR_5);
}
