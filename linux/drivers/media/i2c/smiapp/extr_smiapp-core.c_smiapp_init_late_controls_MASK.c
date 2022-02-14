
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct smiapp_sensor {unsigned long* valid_link_freqs; size_t compressed_min_bpp; TYPE_4__* src; TYPE_3__* hwcfg; int link_freq; TYPE_2__* pixel_array; int * test_data; TYPE_1__* csi_format; } ;
struct TYPE_10__ {int error; } ;
struct TYPE_9__ {TYPE_5__ ctrl_handler; } ;
struct TYPE_8__ {int op_sys_clock; } ;
struct TYPE_7__ {int ctrl_handler; } ;
struct TYPE_6__ {size_t compressed; int width; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*,int *,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int *,scalar_t__,int ,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct smiapp_sensor *VAR_3)
{
 unsigned long *VAR_4 = &VAR_3->valid_link_freqs[
  VAR_3->csi_format->compressed - VAR_3->compressed_min_bpp];
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3->test_data); VAR_5++) {
  int VAR_6 = (1 << VAR_3->csi_format->width) - 1;

  VAR_3->test_data[VAR_5] = FUNC_4(
    &VAR_3->pixel_array->ctrl_handler,
    &VAR_2, VAR_1 + VAR_5,
    0, VAR_6, 1, VAR_6);
 }

 VAR_3->link_freq = FUNC_3(
  &VAR_3->src->ctrl_handler, &VAR_2,
  VAR_0, FUNC_2(*VAR_4),
  FUNC_1(*VAR_4), VAR_3->hwcfg->op_sys_clock);

 return VAR_3->src->ctrl_handler.error;
}
