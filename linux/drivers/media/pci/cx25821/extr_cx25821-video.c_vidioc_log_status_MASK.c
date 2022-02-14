
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sram_channel {int dma_ctl; } ;
struct file {int dummy; } ;
struct cx25821_dev {int dummy; } ;
struct cx25821_channel {struct sram_channel* sram_channels; struct cx25821_dev* dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 struct cx25821_channel* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1)
{
 struct cx25821_channel *VAR_2 = FUNC_2(VAR_0);
 struct cx25821_dev *VAR_3 = VAR_2->dev;
 const struct sram_channel *VAR_4 = VAR_2->sram_channels;
 u32 VAR_5 = 0;

 VAR_5 = FUNC_0(VAR_4->dma_ctl);
 FUNC_1("Video input 0 is %s\n",
  (VAR_5 & 0x11) ? "streaming" : "stopped");
 return 0;
}
