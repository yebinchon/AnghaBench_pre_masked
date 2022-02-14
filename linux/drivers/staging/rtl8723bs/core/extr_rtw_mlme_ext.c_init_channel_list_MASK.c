
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct p2p_reg_class {size_t channels; scalar_t__* channel; scalar_t__ reg_class; } ;
struct p2p_oper_class_map {int member_0; int member_1; int member_2; int member_3; int member_4; scalar_t__ member_5; scalar_t__ min_chan; scalar_t__ max_chan; int inc; scalar_t__ bw; scalar_t__ op_class; } ;
struct p2p_channels {int reg_classes; struct p2p_reg_class* reg_class; } ;
struct TYPE_2__ {scalar_t__ ht_enable; int bw_mode; } ;
struct adapter {TYPE_1__ registrypriv; } ;
typedef int RT_CHANNEL_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_5, RT_CHANNEL_INFO *VAR_6,
         u8 VAR_7,
         struct p2p_channels *VAR_8)
{

 struct p2p_oper_class_map VAR_9[] = {
  { VAR_4, 81, 1, 13, 1, VAR_0 },
  { VAR_4, 82, 14, 14, 1, VAR_0 },
  { VAR_3, 115, 36, 48, 4, VAR_0 },
  { VAR_3, 116, 36, 44, 8, VAR_2 },
  { VAR_3, 117, 40, 48, 8, VAR_1 },
  { VAR_3, 124, 149, 161, 4, VAR_0 },
  { VAR_3, 125, 149, 169, 4, VAR_0 },
  { VAR_3, 126, 149, 157, 8, VAR_2 },
  { VAR_3, 127, 153, 161, 8, VAR_1 },
  { -1, 0, 0, 0, 0, VAR_0 }
 };

 int VAR_10, VAR_11;

 VAR_10 = 0;

 for (VAR_11 = 0; VAR_9[VAR_11].op_class; VAR_11++) {
  u8 VAR_12;
  struct p2p_oper_class_map *VAR_13 = &VAR_9[VAR_11];
  struct p2p_reg_class *VAR_14 = ((void*)0);

  for (VAR_12 = VAR_13->min_chan; VAR_12 <= VAR_13->max_chan; VAR_12 += VAR_13->inc) {
   if (!FUNC_0(VAR_6, VAR_7, VAR_12))
    continue;

   if ((0 == VAR_5->registrypriv.ht_enable) && (8 == VAR_13->inc))
    continue;

   if ((0 < (VAR_5->registrypriv.bw_mode & 0xf0)) &&
    ((VAR_1 == VAR_13->bw) || (VAR_2 == VAR_13->bw)))
    continue;

   if (!VAR_14) {
    VAR_14 = &VAR_8->reg_class[VAR_10];
    VAR_10++;
    VAR_14->reg_class = VAR_13->op_class;
    VAR_14->channels = 0;
   }
   VAR_14->channel[VAR_14->channels] = VAR_12;
   VAR_14->channels++;
  }
 }
 VAR_8->reg_classes = VAR_10;

}
