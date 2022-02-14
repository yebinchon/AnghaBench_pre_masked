
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int num; } ;
struct av7110 {int arm_fw; int arm_rtsl; int arm_vid; int arm_app; int avtype; TYPE_1__ dvb_adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct av7110*,int,int*,int) ;
 int FUNC_2 (int,char*,struct av7110*) ;
 int FUNC_3 (char*,int ,...) ;

int FUNC_4(struct av7110 *VAR_3)
{
 u16 VAR_4[20];
 u16 VAR_5 = ((VAR_0 << 8) + VAR_2);

 FUNC_2(4, "%p\n", VAR_3);

 if (FUNC_1(VAR_3, VAR_5, VAR_4, 16)) {
  FUNC_3("dvb-ttpci: failed to boot firmware @ card %d\n",
         VAR_3->dvb_adapter.num);
  return -VAR_1;
 }

 VAR_3->arm_fw = (VAR_4[0] << 16) + VAR_4[1];
 VAR_3->arm_rtsl = (VAR_4[2] << 16) + VAR_4[3];
 VAR_3->arm_vid = (VAR_4[4] << 16) + VAR_4[5];
 VAR_3->arm_app = (VAR_4[6] << 16) + VAR_4[7];
 VAR_3->avtype = (VAR_4[8] << 16) + VAR_4[9];

 FUNC_3("dvb-ttpci: info @ card %d: firm %08x, rtsl %08x, vid %08x, app %08x\n",
        VAR_3->dvb_adapter.num, VAR_3->arm_fw,
        VAR_3->arm_rtsl, VAR_3->arm_vid, VAR_3->arm_app);


 if (FUNC_0(VAR_3->arm_app))
  FUNC_3("dvb-ttpci: firmware @ card %d supports CI link layer interface\n",
         VAR_3->dvb_adapter.num);
 else
  FUNC_3("dvb-ttpci: no firmware support for CI link layer interface @ card %d\n",
         VAR_3->dvb_adapter.num);

 return 0;
}
