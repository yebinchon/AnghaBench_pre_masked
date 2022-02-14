
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ican3_msg {int* data; void* len; int spec; } ;
struct can_bittiming {int brp; int sjw; int prop_seg; int phase_seg1; int phase_seg2; } ;
struct TYPE_2__ {int ctrlmode; struct can_bittiming bittiming; } ;
struct ican3_dev {scalar_t__ fwtype; TYPE_1__ can; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct ican3_dev*,struct ican3_msg*) ;
 int FUNC_2 (struct ican3_msg*,int ,int) ;
 int FUNC_3 (int*,char*) ;

__attribute__((used)) static int FUNC_4(struct ican3_dev *VAR_12, bool VAR_13)
{
 struct can_bittiming *VAR_14 = &VAR_12->can.bittiming;
 struct ican3_msg VAR_15;
 u8 VAR_16, VAR_17;
 int VAR_18;




 VAR_16 = ((VAR_14->brp - 1) & 0x3f) | (((VAR_14->sjw - 1) & 0x3) << 6);
 VAR_17 = ((VAR_14->prop_seg + VAR_14->phase_seg1 - 1) & 0xf) |
  (((VAR_14->phase_seg2 - 1) & 0x7) << 4);
 if (VAR_12->can.ctrlmode & VAR_0)
  VAR_17 |= 0x80;

 if (VAR_12->fwtype == VAR_3) {
  if (VAR_13) {

   FUNC_2(&VAR_15, 0, sizeof(VAR_15));
   VAR_15.spec = VAR_6;
   VAR_15.len = FUNC_0(4);
   VAR_15.data[0] = 0x00;
   VAR_15.data[1] = 0x00;
   VAR_15.data[2] = VAR_16;
   VAR_15.data[3] = VAR_17;

   VAR_18 = FUNC_1(VAR_12, &VAR_15);
   if (VAR_18)
    return VAR_18;
  }


  FUNC_2(&VAR_15, 0, sizeof(VAR_15));
  VAR_15.spec = VAR_13 ? VAR_8 : VAR_7;
  VAR_15.len = FUNC_0(0);

  return FUNC_1(VAR_12, &VAR_15);

 } else if (VAR_12->fwtype == VAR_2) {

  FUNC_2(&VAR_15, 0, sizeof(VAR_15));
  VAR_15.spec = VAR_9;
  if (VAR_13) {
   VAR_15.len = FUNC_0(4);
   VAR_15.data[0] = VAR_5;
   VAR_15.data[1] = 0;
   VAR_15.data[2] = VAR_16;
   VAR_15.data[3] = VAR_17;
  } else {
   VAR_15.len = FUNC_0(2);
   VAR_15.data[0] = VAR_4;
   VAR_15.data[1] = 0;
  }
  VAR_18 = FUNC_1(VAR_12, &VAR_15);
  if (VAR_18)
   return VAR_18;

  if (VAR_13) {





   FUNC_2(&VAR_15, 0, sizeof(VAR_15));
   VAR_15.spec = VAR_10;
   VAR_15.len = FUNC_0(11);
   VAR_15.data[0] = VAR_11;
   VAR_15.data[1] = 0;
   VAR_15.data[2] = 2;
   VAR_15.data[3] = 1;
   FUNC_3(VAR_15.data + 4, "locnod1");
   return FUNC_1(VAR_12, &VAR_15);
  }
  return 0;
 }
 return -VAR_1;
}
