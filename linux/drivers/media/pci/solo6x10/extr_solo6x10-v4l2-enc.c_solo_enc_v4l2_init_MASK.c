
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vop_header ;
struct solo_dev {int vh_size; int nr_chans; scalar_t__ type; int enc_bw_remain; int fps; TYPE_2__** v4l2_enc; TYPE_4__* pdev; int * vh_buf; int vh_dma; int ring_thread_wait; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {TYPE_1__* vfd; } ;
struct TYPE_8__ {int num; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_4__*,int,int *) ;
 int FUNC_5 (TYPE_4__*,int,int *,int ) ;
 TYPE_2__* FUNC_6 (struct solo_dev*,int,unsigned int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct solo_dev*) ;

int FUNC_9(struct solo_dev *VAR_2, unsigned VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_2->ring_thread_wait);

 VAR_2->vh_size = sizeof(vop_header);
 VAR_2->vh_buf = FUNC_4(VAR_2->pdev,
      VAR_2->vh_size,
      &VAR_2->vh_dma);
 if (VAR_2->vh_buf == ((void*)0))
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_2->nr_chans; VAR_4++) {
  VAR_2->v4l2_enc[VAR_4] = FUNC_6(VAR_2, VAR_4, VAR_3);
  if (FUNC_0(VAR_2->v4l2_enc[VAR_4]))
   break;
 }

 if (VAR_4 != VAR_2->nr_chans) {
  int VAR_5 = FUNC_1(VAR_2->v4l2_enc[VAR_4]);

  while (VAR_4--)
   FUNC_7(VAR_2->v4l2_enc[VAR_4]);
  FUNC_5(VAR_2->pdev, VAR_2->vh_size,
        VAR_2->vh_buf, VAR_2->vh_dma);
  VAR_2->vh_buf = ((void*)0);
  return VAR_5;
 }

 if (VAR_2->type == VAR_1)
  VAR_2->enc_bw_remain = VAR_2->fps * 4 * 4;
 else
  VAR_2->enc_bw_remain = VAR_2->fps * 4 * 5;

 FUNC_2(&VAR_2->pdev->dev, "Encoders as /dev/video%d-%d\n",
   VAR_2->v4l2_enc[0]->vfd->num,
   VAR_2->v4l2_enc[VAR_2->nr_chans - 1]->vfd->num);

 return FUNC_8(VAR_2);
}
