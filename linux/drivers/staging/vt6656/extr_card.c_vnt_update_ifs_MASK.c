
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vnt_private {scalar_t__ packet_type; int slot; int rf_type; scalar_t__ eifs; void* difs; void* sifs; int bb_type; scalar_t__ short_slot_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct vnt_private*,int ,int ,int ,int,int*) ;

void FUNC_1(struct vnt_private *VAR_12)
{
 u8 VAR_13 = 0;
 u8 VAR_14[4];

 if (VAR_12->packet_type == VAR_11) {
  VAR_12->slot = VAR_6;
  VAR_12->sifs = VAR_3;
  VAR_12->difs = VAR_3 + 2 * VAR_6;
  VAR_13 = 4;
 } else {
  VAR_12->sifs = VAR_4;

  if (VAR_12->short_slot_time) {
   VAR_12->slot = VAR_6;
   VAR_13 = 4;
  } else {
   VAR_12->slot = VAR_5;
   VAR_13 = 5;
  }

  VAR_12->difs = VAR_4 + 2 * VAR_12->slot;
 }

 VAR_12->eifs = VAR_2;

 switch (VAR_12->rf_type) {
 case 129:
  if (VAR_12->bb_type != VAR_1) {
   VAR_12->sifs -= 1;
   VAR_12->difs -= 1;
   break;
  }

 case 135:
 case 134:
 case 133:
  if (VAR_12->bb_type != VAR_1)
   break;

 case 131:
 case 130:
 case 128:
  VAR_12->sifs -= 3;
  VAR_12->difs -= 3;
  break;
 case 132:
  if (VAR_12->bb_type == VAR_0) {
   VAR_12->sifs -= 5;
   VAR_12->difs -= 5;
  } else {
   VAR_12->sifs -= 2;
   VAR_12->difs -= 2;
  }

  break;
 }

 VAR_14[0] = (u8)VAR_12->sifs;
 VAR_14[1] = (u8)VAR_12->difs;
 VAR_14[2] = (u8)VAR_12->eifs;
 VAR_14[3] = (u8)VAR_12->slot;

 FUNC_0(VAR_12, VAR_10, VAR_8,
   VAR_9, 4, &VAR_14[0]);

 VAR_13 |= 0xa0;

 FUNC_0(VAR_12, VAR_10, VAR_7,
   VAR_9, 1, &VAR_13);
}
