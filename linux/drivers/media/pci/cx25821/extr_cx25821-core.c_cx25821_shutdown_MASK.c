
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cx25821_dev {TYPE_2__* channels; } ;
struct TYPE_4__ {TYPE_1__* sram_channels; } ;
struct TYPE_3__ {int int_msk; int dma_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct cx25821_dev *VAR_8)
{
 int VAR_9;


 FUNC_0(VAR_2, 0);


 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  FUNC_0(VAR_8->channels[VAR_9].sram_channels->dma_ctl, 0);
  FUNC_0(VAR_8->channels[VAR_9].sram_channels->int_msk, 0);
 }

 for (VAR_9 = VAR_6;
  VAR_9 <= VAR_7; VAR_9++) {
  FUNC_0(VAR_8->channels[VAR_9].sram_channels->dma_ctl, 0);
  FUNC_0(VAR_8->channels[VAR_9].sram_channels->int_msk, 0);
 }


 FUNC_0(VAR_1, 0);


 FUNC_0(VAR_4, 0);


 FUNC_0(VAR_3, 0);
 FUNC_0(VAR_0, 0);
}
