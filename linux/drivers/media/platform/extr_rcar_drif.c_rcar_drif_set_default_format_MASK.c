
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rcar_drif_sdr {scalar_t__ num_hw_ch; scalar_t__ num_cur_ch; int cur_ch_mask; int dev; int hw_ch_mask; TYPE_1__* fmt; } ;
struct TYPE_3__ {scalar_t__ num_ch; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned int,int ,scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct rcar_drif_sdr *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {

  if (VAR_2->num_hw_ch == VAR_1[VAR_3].num_ch) {
   VAR_2->fmt = &VAR_1[VAR_3];
   VAR_2->cur_ch_mask = VAR_2->hw_ch_mask;
   VAR_2->num_cur_ch = VAR_2->num_hw_ch;
   FUNC_1(VAR_2->dev, "default fmt[%u]: mask %lu num %u\n",
    VAR_3, VAR_2->cur_ch_mask, VAR_2->num_cur_ch);
   return 0;
  }
 }
 return -VAR_0;
}
