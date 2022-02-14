
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx23885_dev {int * sram_channels; int name; struct cx23885_audio_dev* audio_dev; } ;
struct cx23885_audio_dev {int substream; int count; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cx23885_dev*,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct cx23885_dev *VAR_9, u32 VAR_10, u32 VAR_11)
{
 struct cx23885_audio_dev *VAR_12 = VAR_9->audio_dev;

 if (0 == (VAR_10 & VAR_11))
  return 0;

 FUNC_4(VAR_0, VAR_10);


 if (VAR_10 & VAR_7) {
  FUNC_6("%s/1: Audio risc op code error\n",
   VAR_9->name);
  FUNC_2(VAR_4, 0x11);
  FUNC_1(VAR_9,
   &VAR_9->sram_channels[VAR_1]);
 }
 if (VAR_10 & VAR_6) {
  FUNC_5(1, "Downstream sync error\n");
  FUNC_4(VAR_3, VAR_8);
  return 1;
 }

 if (VAR_10 & VAR_5) {
  FUNC_0(&VAR_12->count, FUNC_3(VAR_2));
  FUNC_7(VAR_12->substream);
 }


 return 1;
}
