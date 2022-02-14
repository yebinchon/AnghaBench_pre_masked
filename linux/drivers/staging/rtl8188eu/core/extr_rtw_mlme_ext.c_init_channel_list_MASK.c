
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rt_channel_info {int dummy; } ;
struct p2p_reg_class {size_t channels; scalar_t__* channel; scalar_t__ reg_class; } ;
struct p2p_oper_class_map {int member_0; int member_1; int member_2; int member_3; int member_4; scalar_t__ min_chan; scalar_t__ max_chan; int inc; scalar_t__ bw; scalar_t__ op_class; int member_5; } ;
struct p2p_channels {int reg_classes; struct p2p_reg_class* reg_class; } ;
struct TYPE_2__ {int cbw40_enable; int ht_enable; } ;
struct adapter {TYPE_1__ registrypriv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rt_channel_info*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_4,
         struct rt_channel_info *VAR_5,
         u8 VAR_6,
         struct p2p_channels *VAR_7)
{
 struct p2p_oper_class_map VAR_8[] = {
  { VAR_3, 81, 1, 13, 1, VAR_0 },
  { VAR_3, 82, 14, 14, 1, VAR_0 },
  { -1, 0, 0, 0, 0, VAR_0 }
 };

 int VAR_9, VAR_10;

 VAR_9 = 0;

 for (VAR_10 = 0; VAR_8[VAR_10].op_class; VAR_10++) {
  u8 VAR_11;
  struct p2p_oper_class_map *VAR_12 = &VAR_8[VAR_10];
  struct p2p_reg_class *VAR_13 = ((void*)0);

  for (VAR_11 = VAR_12->min_chan; VAR_11 <= VAR_12->max_chan; VAR_11 += VAR_12->inc) {
   if (!FUNC_1(VAR_5, VAR_6, VAR_11))
    continue;

   if (!VAR_4->registrypriv.ht_enable && VAR_12->inc == 8)
    continue;

   if ((0 == (VAR_4->registrypriv.cbw40_enable & FUNC_0(1))) &&
       ((VAR_12->bw == VAR_1) || (VAR_12->bw == VAR_2)))
    continue;

   if (VAR_13 == ((void*)0)) {
    VAR_13 = &VAR_7->reg_class[VAR_9];
    VAR_9++;
    VAR_13->reg_class = VAR_12->op_class;
    VAR_13->channels = 0;
   }
   VAR_13->channel[VAR_13->channels] = VAR_11;
   VAR_13->channels++;
  }
 }
 VAR_7->reg_classes = VAR_9;
}
