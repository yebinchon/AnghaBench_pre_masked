
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds_device {int * ep; } ;


 size_t VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_0 (unsigned char*,char*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct ds_device *VAR_10, unsigned char *VAR_11, int VAR_12)
{
 int VAR_13;

 FUNC_1("0x%x: count=%d, status: ", VAR_10->ep[VAR_0], VAR_12);
 for (VAR_13 = 0; VAR_13 < VAR_12; ++VAR_13)
  FUNC_1("%02x ", VAR_11[VAR_13]);
 FUNC_1("\n");

 if (VAR_12 >= 16) {
  FUNC_0(VAR_11, "enable flag", 0);
  FUNC_0(VAR_11, "1-wire speed", 1);
  FUNC_0(VAR_11, "strong pullup duration", 2);
  FUNC_0(VAR_11, "programming pulse duration", 3);
  FUNC_0(VAR_11, "pulldown slew rate control", 4);
  FUNC_0(VAR_11, "write-1 low time", 5);
  FUNC_0(VAR_11, "data sample offset/write-0 recovery time",
   6);
  FUNC_0(VAR_11, "reserved (test register)", 7);
  FUNC_0(VAR_11, "device status flags", 8);
  FUNC_0(VAR_11, "communication command byte 1", 9);
  FUNC_0(VAR_11, "communication command byte 2", 10);
  FUNC_0(VAR_11, "communication command buffer status", 11);
  FUNC_0(VAR_11, "1-wire data output buffer status", 12);
  FUNC_0(VAR_11, "1-wire data input buffer status", 13);
  FUNC_0(VAR_11, "reserved", 14);
  FUNC_0(VAR_11, "reserved", 15);
 }
 for (VAR_13 = 16; VAR_13 < VAR_12; ++VAR_13) {
  if (VAR_11[VAR_13] == VAR_4) {
   FUNC_0(VAR_11, "new device detect", VAR_13);
   continue;
  }
  FUNC_0(VAR_11, "Result Register Value: ", VAR_13);
  if (VAR_11[VAR_13] & VAR_6)
   FUNC_1("NRS: Reset no presence or ...\n");
  if (VAR_11[VAR_13] & VAR_8)
   FUNC_1("SH: short on reset or set path\n");
  if (VAR_11[VAR_13] & VAR_1)
   FUNC_1("APP: alarming presence on reset\n");
  if (VAR_11[VAR_13] & VAR_9)
   FUNC_1("VPP: 12V expected not seen\n");
  if (VAR_11[VAR_13] & VAR_2)
   FUNC_1("CMP: compare error\n");
  if (VAR_11[VAR_13] & VAR_3)
   FUNC_1("CRC: CRC error detected\n");
  if (VAR_11[VAR_13] & VAR_7)
   FUNC_1("RDP: redirected page\n");
  if (VAR_11[VAR_13] & VAR_5)
   FUNC_1("EOS: end of search error\n");
 }
}
