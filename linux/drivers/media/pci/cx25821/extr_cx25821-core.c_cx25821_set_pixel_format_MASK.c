
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cx25821_dev {TYPE_2__* channels; } ;
struct TYPE_4__ {int pixel_formats; TYPE_1__* sram_channels; } ;
struct TYPE_3__ {int pix_frmt; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct cx25821_dev *VAR_0, int VAR_1,
         u32 VAR_2)
{
 if (VAR_1 <= 7 && VAR_1 >= 0) {
  FUNC_0(VAR_0->channels[VAR_1].sram_channels->pix_frmt,
    VAR_2);
 }
 VAR_0->channels[VAR_1].pixel_formats = VAR_2;
}
