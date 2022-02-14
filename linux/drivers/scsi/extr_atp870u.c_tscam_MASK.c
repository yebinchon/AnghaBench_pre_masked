
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct atp_unit {unsigned short* host_id; } ;
struct Scsi_Host {int hostdata; } ;


 int FUNC_0 (struct atp_unit*,int ,int) ;
 int FUNC_1 (struct atp_unit*,int ,int) ;
 int FUNC_2 (struct atp_unit*,int ,int,int) ;
 int FUNC_3 (struct atp_unit*,int ,int,unsigned short) ;
 int FUNC_4 () ;
 unsigned char FUNC_5 (struct atp_unit*,unsigned short*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct Scsi_Host *VAR_0, bool VAR_1, u8 VAR_2)
{

 unsigned char VAR_3, VAR_4, VAR_5;
 unsigned long VAR_6;
 unsigned short int VAR_7, VAR_8, VAR_9;
 unsigned char VAR_10[33], VAR_11[2];
 struct atp_unit *VAR_12 = (struct atp_unit *)&VAR_0->hostdata;
 static unsigned char VAR_13[8] = {
  0x38, 0x31, 0x32, 0x2b, 0x34, 0x2d, 0x2e, 0x27
 };
 FUNC_2(VAR_12, 0, 1, 0x08);
 FUNC_2(VAR_12, 0, 2, 0x7f);
 FUNC_2(VAR_12, 0, 0x11, 0x20);

 if ((VAR_2 & 0x40) == 0) {
  return;
 }
 VAR_7 = 1;
 VAR_7 <<= VAR_12->host_id[0];
 VAR_4 = 16;
 if (!VAR_1) {
  VAR_7 |= 0xff00;
  VAR_4 = 8;
 }
 VAR_8 = VAR_7;
 FUNC_2(VAR_12, 0, 0x02, 0x02);
 FUNC_2(VAR_12, 0, 0x03, 0);
 FUNC_2(VAR_12, 0, 0x04, 0);
 FUNC_2(VAR_12, 0, 0x05, 0);
 FUNC_2(VAR_12, 0, 0x06, 0);
 FUNC_2(VAR_12, 0, 0x07, 0);
 FUNC_2(VAR_12, 0, 0x08, 0);

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_7 = 1;
  VAR_7 = VAR_7 << VAR_3;
  if ((VAR_7 & VAR_8) != 0) {
   continue;
  }
  FUNC_2(VAR_12, 0, 0x0f, 0);
  FUNC_2(VAR_12, 0, 0x12, 0);
  FUNC_2(VAR_12, 0, 0x13, 0);
  FUNC_2(VAR_12, 0, 0x14, 0);
  if (VAR_3 > 7) {
   VAR_5 = (VAR_3 & 0x07) | 0x40;
  } else {
   VAR_5 = VAR_3;
  }
  FUNC_2(VAR_12, 0, 0x15, VAR_5);
  if (VAR_1)
   FUNC_2(VAR_12, 0, 0x1b, 0x01);
  else
   FUNC_2(VAR_12, 0, 0x1b, 0x00);
  do {
   FUNC_2(VAR_12, 0, 0x18, 0x09);

   while ((FUNC_0(VAR_12, 0, 0x1f) & 0x80) == 0x00)
    FUNC_4();
   VAR_5 = FUNC_0(VAR_12, 0, 0x17);
   if ((VAR_5 == 0x85) || (VAR_5 == 0x42))
    break;
   if (VAR_5 != 0x16)
    FUNC_2(VAR_12, 0, 0x10, 0x41);
  } while (VAR_5 != 0x16);
  if ((VAR_5 == 0x85) || (VAR_5 == 0x42))
   continue;
  VAR_8 |= VAR_7;

 }
 FUNC_2(VAR_12, 0, 0x02, 0x7f);
 FUNC_2(VAR_12, 0, 0x1b, 0x02);

 FUNC_8(2);

 VAR_9 = 0x0080;
 FUNC_3(VAR_12, 0, 0x1c, VAR_9);
 VAR_9 |= 0x0040;
 FUNC_3(VAR_12, 0, 0x1c, VAR_9);
 VAR_9 |= 0x0004;
 FUNC_3(VAR_12, 0, 0x1c, VAR_9);
 FUNC_8(2);
 VAR_9 &= 0x007f;
 FUNC_3(VAR_12, 0, 0x1c, VAR_9);
 FUNC_7(128);
 VAR_9 &= 0x00fb;
 FUNC_3(VAR_12, 0, 0x1c, VAR_9);
 while ((FUNC_0(VAR_12, 0, 0x1c) & 0x04) != 0)
  ;
 FUNC_8(2);
 FUNC_8(100);
 for (VAR_6 = 0; VAR_6 < 0x30000; VAR_6++)
  if ((FUNC_0(VAR_12, 0, 0x1c) & 0x80) != 0)
   break;
 if (VAR_6 < 0x30000)
  for (VAR_6 = 0; VAR_6 < 0x30000; VAR_6++)
   if ((FUNC_0(VAR_12, 0, 0x1c) & 0x81) == 0x0081) {
    FUNC_8(2);
    VAR_9 |= 0x8003;
    FUNC_3(VAR_12, 0, 0x1c, VAR_9);
    FUNC_8(2);
    VAR_9 &= 0x00bf;
    FUNC_3(VAR_12, 0, 0x1c, VAR_9);
    FUNC_8(2);
    break;
   }
 while (1) {
 FUNC_6(2);
 FUNC_8(48);
 if ((FUNC_0(VAR_12, 0, 0x1c) & 0x80) == 0x00) {
  FUNC_3(VAR_12, 0, 0x1c, 0);
  FUNC_2(VAR_12, 0, 0x1b, 0);
  FUNC_2(VAR_12, 0, 0x15, 0);
  FUNC_2(VAR_12, 0, 0x18, 0x09);
  while ((FUNC_0(VAR_12, 0, 0x1f) & 0x80) == 0)
   FUNC_4();
  FUNC_0(VAR_12, 0, 0x17);
  return;
 }
 VAR_9 &= 0x00ff;
 VAR_9 |= 0x3f00;
 FUNC_5(VAR_12, &VAR_9);
 FUNC_8(2);
 VAR_9 &= 0x00ff;
 VAR_9 |= 0x2000;
 FUNC_5(VAR_12, &VAR_9);
 FUNC_8(2);
 VAR_3 = 8;
 VAR_4 = 0;

 while (1) {
  if ((FUNC_1(VAR_12, 0, 0x1c) & 0x2000) == 0)
   continue;
  FUNC_8(2);
  VAR_9 &= 0x00ff;
  VAR_9 |= 0x2000;
  VAR_5 = FUNC_5(VAR_12, &VAR_9);
  if ((VAR_5 & 0x03) == 0)
   break;
  VAR_10[VAR_4] <<= 0x01;
  VAR_10[VAR_4] &= 0xfe;
  if ((VAR_5 & 0x02) != 0)
   VAR_10[VAR_4] |= 0x01;
  VAR_3--;
  if (VAR_3 > 0)
   continue;
  VAR_4++;
  VAR_3 = 8;
 }




 VAR_3 = 15;
 VAR_4 = VAR_10[0];
 if ((VAR_4 & 0x20) != 0) {
  VAR_3 = 7;
 }
 if ((VAR_4 & 0x06) != 0) {
  VAR_5 = VAR_10[1];
  while (1) {
   VAR_7 = 1;
   VAR_7 <<= VAR_5;
   if ((VAR_7 & VAR_8) == 0)
    break;
   if (VAR_5 > 0)
    VAR_5--;
   else
    break;
  }
 }
 if ((VAR_7 & VAR_8) != 0) {
  VAR_5 = VAR_3;
  while (1) {
   VAR_7 = 1;
   VAR_7 <<= VAR_5;
   if ((VAR_7 & VAR_8) == 0)
    break;
   if (VAR_5 > 0)
    VAR_5--;
   else
    break;
  }
 }

 VAR_8 |= VAR_7;
 if (VAR_5 < 8) {
  VAR_11[0] = 0x38;
 } else {
  VAR_11[0] = 0x31;
 }
 VAR_5 &= 0x07;
 VAR_11[1] = VAR_13[VAR_5];

 VAR_9 &= 0x00ff;
 VAR_7 = VAR_11[0] << 8;
 VAR_9 |= VAR_7;
 FUNC_5(VAR_12, &VAR_9);
 VAR_9 &= 0x00ff;
 VAR_7 = VAR_11[1] << 8;
 VAR_9 |= VAR_7;
 FUNC_5(VAR_12, &VAR_9);

 }
}
