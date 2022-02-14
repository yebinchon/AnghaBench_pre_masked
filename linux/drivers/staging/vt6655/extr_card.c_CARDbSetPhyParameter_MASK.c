
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct vnt_private {scalar_t__ byRFType; int* abyBBVGA; int basic_rates; unsigned char bySIFS; unsigned char byDIFS; scalar_t__ byEIFS; unsigned char bySlot; unsigned char byCWMaxMin; int byPacketType; scalar_t__ PortOffset; scalar_t__ bShortSlotTime; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct vnt_private*,int,unsigned char*) ;
 int FUNC_1 (struct vnt_private*,int,int) ;
 int FUNC_2 (struct vnt_private*) ;
 int FUNC_3 (struct vnt_private*) ;
 int FUNC_4 (struct vnt_private*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (scalar_t__,unsigned char) ;

bool FUNC_7(struct vnt_private *VAR_18, u8 VAR_19)
{
 unsigned char VAR_20 = 0;
 unsigned char VAR_21 = 0;
 unsigned char VAR_22 = 0;
 unsigned char VAR_23 = 0;
 unsigned char VAR_24;
 int VAR_25;


 if (VAR_19 == VAR_0) {
  if (VAR_18->byRFType == VAR_15) {

   FUNC_5(VAR_18->PortOffset, VAR_2);
   VAR_18->abyBBVGA[0] = 0x20;
   VAR_18->abyBBVGA[2] = 0x10;
   VAR_18->abyBBVGA[3] = 0x10;
   FUNC_0(VAR_18, 0xE7, &VAR_24);
   if (VAR_24 == 0x1C)
    FUNC_1(VAR_18, 0xE7, VAR_18->abyBBVGA[0]);

  } else if (VAR_18->byRFType == VAR_17) {
   FUNC_5(VAR_18->PortOffset, VAR_0);
   VAR_18->abyBBVGA[0] = 0x18;
   FUNC_0(VAR_18, 0xE7, &VAR_24);
   if (VAR_24 == 0x14) {
    FUNC_1(VAR_18, 0xE7, VAR_18->abyBBVGA[0]);
    FUNC_1(VAR_18, 0xE1, 0x57);
   }
  } else {
   FUNC_5(VAR_18->PortOffset, VAR_0);
  }
  FUNC_1(VAR_18, 0x88, 0x03);
  VAR_21 = VAR_7;
  VAR_22 = VAR_4;
  VAR_23 = VAR_4 + 2 * VAR_7;
  VAR_20 = 0xA4;
 } else if (VAR_19 == VAR_1) {
  FUNC_5(VAR_18->PortOffset, VAR_1);
  if (VAR_18->byRFType == VAR_15) {
   VAR_18->abyBBVGA[0] = 0x1C;
   VAR_18->abyBBVGA[2] = 0x00;
   VAR_18->abyBBVGA[3] = 0x00;
   FUNC_0(VAR_18, 0xE7, &VAR_24);
   if (VAR_24 == 0x20)
    FUNC_1(VAR_18, 0xE7, VAR_18->abyBBVGA[0]);

  } else if (VAR_18->byRFType == VAR_17) {
   VAR_18->abyBBVGA[0] = 0x14;
   FUNC_0(VAR_18, 0xE7, &VAR_24);
   if (VAR_24 == 0x18) {
    FUNC_1(VAR_18, 0xE7, VAR_18->abyBBVGA[0]);
    FUNC_1(VAR_18, 0xE1, 0xD3);
   }
  }
  FUNC_1(VAR_18, 0x88, 0x02);
  VAR_21 = VAR_6;
  VAR_22 = VAR_5;
  VAR_23 = VAR_5 + 2 * VAR_6;
  VAR_20 = 0xA5;
 } else {
  FUNC_5(VAR_18->PortOffset, VAR_2);
  if (VAR_18->byRFType == VAR_15) {
   VAR_18->abyBBVGA[0] = 0x1C;
   VAR_18->abyBBVGA[2] = 0x00;
   VAR_18->abyBBVGA[3] = 0x00;
   FUNC_0(VAR_18, 0xE7, &VAR_24);
   if (VAR_24 == 0x20)
    FUNC_1(VAR_18, 0xE7, VAR_18->abyBBVGA[0]);

  } else if (VAR_18->byRFType == VAR_17) {
   VAR_18->abyBBVGA[0] = 0x14;
   FUNC_0(VAR_18, 0xE7, &VAR_24);
   if (VAR_24 == 0x18) {
    FUNC_1(VAR_18, 0xE7, VAR_18->abyBBVGA[0]);
    FUNC_1(VAR_18, 0xE1, 0xD3);
   }
  }
  FUNC_1(VAR_18, 0x88, 0x08);
  VAR_22 = VAR_5;

  if (VAR_18->bShortSlotTime) {
   VAR_21 = VAR_7;
   VAR_23 = VAR_5 + 2 * VAR_7;
  } else {
   VAR_21 = VAR_6;
   VAR_23 = VAR_5 + 2 * VAR_6;
  }

  VAR_20 = 0xa4;

  for (VAR_25 = VAR_13; VAR_25 >= VAR_14; VAR_25--) {
   if (VAR_18->basic_rates & ((u32)(0x1 << VAR_25))) {
    VAR_20 |= 0x1;
    break;
   }
  }
 }

 if (VAR_18->byRFType == VAR_16) {




  VAR_22 -= 3;
  VAR_23 -= 3;





 }

 if (VAR_18->bySIFS != VAR_22) {
  VAR_18->bySIFS = VAR_22;
  FUNC_6(VAR_18->PortOffset + VAR_11, VAR_18->bySIFS);
 }
 if (VAR_18->byDIFS != VAR_23) {
  VAR_18->byDIFS = VAR_23;
  FUNC_6(VAR_18->PortOffset + VAR_9, VAR_18->byDIFS);
 }
 if (VAR_18->byEIFS != VAR_3) {
  VAR_18->byEIFS = VAR_3;
  FUNC_6(VAR_18->PortOffset + VAR_10, VAR_18->byEIFS);
 }
 if (VAR_18->bySlot != VAR_21) {
  VAR_18->bySlot = VAR_21;
  FUNC_6(VAR_18->PortOffset + VAR_12, VAR_18->bySlot);

  FUNC_2(VAR_18);
 }
 if (VAR_18->byCWMaxMin != VAR_20) {
  VAR_18->byCWMaxMin = VAR_20;
  FUNC_6(VAR_18->PortOffset + VAR_8,
        VAR_18->byCWMaxMin);
 }

 VAR_18->byPacketType = FUNC_3(VAR_18);

 FUNC_4(VAR_18, VAR_19);

 return 1;
}
