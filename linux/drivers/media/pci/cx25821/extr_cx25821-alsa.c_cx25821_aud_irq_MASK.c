
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx25821_dev {int name; } ;
struct cx25821_audio_dev {int substream; int count; struct cx25821_dev* dev; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int ) ;
 int VAR_11 ;
 int FUNC_2 (int ,char*,int ,int ,int,int) ;
 int FUNC_3 (struct cx25821_dev*,int *) ;
 int * VAR_12 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_13 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct cx25821_audio_dev *VAR_14, u32 VAR_15,
       u32 VAR_16)
{
 struct cx25821_dev *VAR_17 = VAR_14->dev;

 if (0 == (VAR_15 & VAR_16))
  return;

 FUNC_6(VAR_3, VAR_15);
 if (VAR_13 > 1 || (VAR_15 & VAR_16 & ~0xff))
  FUNC_2(VAR_17->name, "irq aud", VAR_11,
    FUNC_0(VAR_11), VAR_15, VAR_16);


 if (VAR_15 & VAR_7) {
  FUNC_7("WARNING %s/1: Audio risc op code error\n", VAR_17->name);

  FUNC_4(VAR_4,
    VAR_9 | VAR_8);
  FUNC_3(VAR_17,
    &VAR_12[VAR_0]);
 }
 if (VAR_15 & VAR_6) {
  FUNC_7("WARNING %s: Downstream sync error!\n", VAR_17->name);
  FUNC_6(VAR_2, VAR_10);
  return;
 }


 if (VAR_15 & VAR_5) {
  FUNC_1(&VAR_14->count, FUNC_5(VAR_1));
  FUNC_8(VAR_14->substream);
 }
}
