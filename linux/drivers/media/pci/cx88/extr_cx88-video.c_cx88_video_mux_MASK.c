
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx88_core {unsigned int input; int tvaudio; scalar_t__ sd_wm8775; } ;
struct TYPE_2__ {int vmux; int gpio0; int gpio1; int gpio2; int gpio3; int type; scalar_t__ audioroute; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ FUNC_0 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct cx88_core*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_2 (struct cx88_core*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int,char*,unsigned int,int,int,int,int,int) ;
 int VAR_15 ;

int FUNC_8(struct cx88_core *VAR_16, unsigned int VAR_17)
{


 FUNC_7(1, "video_mux: %d [vmux=%d,gpio=0x%x,0x%x,0x%x,0x%x]\n",
  VAR_17, FUNC_0(VAR_17).vmux,
  FUNC_0(VAR_17).gpio0, FUNC_0(VAR_17).gpio1,
  FUNC_0(VAR_17).gpio2, FUNC_0(VAR_17).gpio3);
 VAR_16->input = VAR_17;
 FUNC_3(VAR_12, 0x03 << 14, FUNC_0(VAR_17).vmux << 14);
 FUNC_6(VAR_11, FUNC_0(VAR_17).gpio3);
 FUNC_6(VAR_8, FUNC_0(VAR_17).gpio0);
 FUNC_6(VAR_9, FUNC_0(VAR_17).gpio1);
 FUNC_6(VAR_10, FUNC_0(VAR_17).gpio2);

 switch (FUNC_0(VAR_17).type) {
 case 128:
  FUNC_5(VAR_5, 0x00000001);
  FUNC_5(VAR_12, 0x00010010);
  FUNC_5(VAR_6, 0x00002020);
  FUNC_5(VAR_7, 0x00002020);
  break;
 default:
  FUNC_4(VAR_5, 0x00000001);
  FUNC_4(VAR_12, 0x00010010);
  FUNC_4(VAR_6, 0x00002020);
  FUNC_4(VAR_7, 0x00002020);
  break;
 }





 if (FUNC_0(VAR_17).audioroute) {





  if (VAR_16->sd_wm8775) {
   FUNC_1(VAR_16, VAR_14, VAR_15,
     FUNC_0(VAR_17).audioroute, 0, 0);
  }





  if (FUNC_0(VAR_17).type != VAR_3 &&
      FUNC_0(VAR_17).type != VAR_2) {

   VAR_16->tvaudio = VAR_13;
   FUNC_2(VAR_16);
  } else {

   FUNC_6(VAR_1, 0x0);
   FUNC_4(VAR_0, VAR_4);
  }
 }

 return 0;
}
