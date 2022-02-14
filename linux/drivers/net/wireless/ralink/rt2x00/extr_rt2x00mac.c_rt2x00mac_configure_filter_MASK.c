
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rt2x00_dev {unsigned int packet_filter; TYPE_2__* ops; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {int (* config_filter ) (struct rt2x00_dev*,unsigned int) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*,unsigned int) ;

void FUNC_3(struct ieee80211_hw *VAR_6,
    unsigned int VAR_7,
    unsigned int *VAR_8,
    u64 VAR_9)
{
 struct rt2x00_dev *VAR_10 = VAR_6->priv;





 *VAR_8 &=
     VAR_0 |
     VAR_2 |
     VAR_4 |
     VAR_1 |
     VAR_5 |
     VAR_3;







 *VAR_8 |= VAR_0;
 if (!FUNC_1(VAR_10)) {
  if (*VAR_8 & VAR_1 || *VAR_8 & VAR_5)
   *VAR_8 |= VAR_1 | VAR_5;
 }
 if (!FUNC_0(VAR_10)) {
  if (*VAR_8 & VAR_1)
   *VAR_8 |= VAR_5;
 }

 VAR_10->packet_filter = *VAR_8;

 VAR_10->ops->lib->config_filter(VAR_10, *VAR_8);
}
