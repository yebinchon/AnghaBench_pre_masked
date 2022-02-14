
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx88_core {int dummy; } ;
struct cx88_audio_dev {int substream; int count; struct cx88_core* core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 (int *,int) ;
 int VAR_10 ;
 int FUNC_2 (char*,int ,int ,int,int) ;
 int FUNC_3 (struct cx88_core*,int *) ;
 int * VAR_11 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_12 ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct cx88_audio_dev *VAR_13)
{
 struct cx88_core *VAR_14 = VAR_13->core;
 u32 VAR_15, VAR_16;

 VAR_15 = FUNC_5(VAR_8);
 VAR_16 = FUNC_5(VAR_7);
 if (0 == (VAR_15 & VAR_16))
  return;
 FUNC_6(VAR_8, VAR_15);
 if (VAR_12 > 1 || (VAR_15 & VAR_16 & ~0xff))
  FUNC_2("irq aud",
       VAR_10, FUNC_0(VAR_10),
       VAR_15, VAR_16);

 if (VAR_15 & VAR_2) {
  FUNC_8("Audio risc op code error\n");
  FUNC_4(VAR_6, 0x11);
  FUNC_3(VAR_14, &VAR_11[VAR_9]);
 }
 if (VAR_15 & VAR_1) {
  FUNC_7(1, "Downstream sync error\n");
  FUNC_6(VAR_5, VAR_3);
  return;
 }

 if (VAR_15 & VAR_0) {
  FUNC_1(&VAR_13->count, FUNC_5(VAR_4));
  FUNC_9(VAR_13->substream);
 }

}
