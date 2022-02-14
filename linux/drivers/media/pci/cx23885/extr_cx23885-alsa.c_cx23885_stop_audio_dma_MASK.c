
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx23885_dev {int * sram_channels; } ;
struct cx23885_audio_dev {struct cx23885_dev* dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct cx23885_dev*,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static int FUNC_3(struct cx23885_audio_dev *VAR_9)
{
 struct cx23885_dev *VAR_10 = VAR_9->dev;
 FUNC_2(1, "Stopping audio DMA\n");


 FUNC_1(VAR_2, 0x11);


 FUNC_1(VAR_6, VAR_7);
 FUNC_1(VAR_0, VAR_5 | VAR_4 |
        VAR_3);

 if (VAR_8)
  FUNC_0(VAR_9->dev,
   &VAR_10->sram_channels[VAR_1]);

 return 0;
}
