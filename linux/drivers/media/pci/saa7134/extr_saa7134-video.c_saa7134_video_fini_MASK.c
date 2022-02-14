
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pt; } ;
struct TYPE_3__ {int pt; } ;
struct saa7134_dev {int radio_ctrl_handler; int ctrl_handler; TYPE_2__ vbi_q; int pci; int vbi_vbq; TYPE_1__ video_q; int video_vbq; } ;


 scalar_t__ FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct saa7134_dev *VAR_0)
{

 FUNC_3(&VAR_0->video_vbq);
 FUNC_1(VAR_0->pci, &VAR_0->video_q.pt);
 FUNC_3(&VAR_0->vbi_vbq);
 FUNC_1(VAR_0->pci, &VAR_0->vbi_q.pt);
 FUNC_2(&VAR_0->ctrl_handler);
 if (FUNC_0(VAR_0))
  FUNC_2(&VAR_0->radio_ctrl_handler);
}
