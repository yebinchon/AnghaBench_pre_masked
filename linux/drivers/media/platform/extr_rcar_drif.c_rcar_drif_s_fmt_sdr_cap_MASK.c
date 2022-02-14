
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_5__ {int reserved; int buffersize; int pixelformat; } ;
struct TYPE_6__ {TYPE_1__ sdr; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct rcar_drif_sdr {scalar_t__ num_hw_ch; scalar_t__ num_cur_ch; int cur_ch_mask; int hw_ch_mask; TYPE_3__* fmt; struct vb2_queue vb_queue; } ;
struct file {int dummy; } ;
struct TYPE_7__ {scalar_t__ num_ch; int buffersize; int pixelformat; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct rcar_drif_sdr*,char*,unsigned int,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct vb2_queue*) ;
 struct rcar_drif_sdr* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_2, void *VAR_3,
       struct v4l2_format *VAR_4)
{
 struct rcar_drif_sdr *VAR_5 = FUNC_5(VAR_2);
 struct vb2_queue *VAR_6 = &VAR_5->vb_queue;
 unsigned int VAR_7;

 if (FUNC_4(VAR_6))
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  if (VAR_1[VAR_7].pixelformat == VAR_4->fmt.sdr.pixelformat)
   break;
 }

 if (VAR_7 == FUNC_0(VAR_1))
  VAR_7 = 0;

 VAR_5->fmt = &VAR_1[VAR_7];
 VAR_4->fmt.sdr.pixelformat = VAR_5->fmt->pixelformat;
 VAR_4->fmt.sdr.buffersize = VAR_1[VAR_7].buffersize;
 FUNC_2(VAR_4->fmt.sdr.reserved, 0, sizeof(VAR_4->fmt.sdr.reserved));





 if (VAR_1[VAR_7].num_ch < VAR_5->num_hw_ch) {
  VAR_5->cur_ch_mask = FUNC_1(0);
  VAR_5->num_cur_ch = VAR_1[VAR_7].num_ch;
 } else {
  VAR_5->cur_ch_mask = VAR_5->hw_ch_mask;
  VAR_5->num_cur_ch = VAR_5->num_hw_ch;
 }

 FUNC_3(VAR_5, "cur: idx %u mask %lu num %u\n",
    VAR_7, VAR_5->cur_ch_mask, VAR_5->num_cur_ch);

 return 0;
}
