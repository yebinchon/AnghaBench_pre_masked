
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int nr_chans; int vh_dma; scalar_t__ vh_buf; int vh_size; int pdev; int * v4l2_enc; } ;


 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct solo_dev*) ;

void FUNC_3(struct solo_dev *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_chans; VAR_1++)
  FUNC_1(VAR_0->v4l2_enc[VAR_1]);

 if (VAR_0->vh_buf)
  FUNC_0(VAR_0->pdev, VAR_0->vh_size,
       VAR_0->vh_buf, VAR_0->vh_dma);
}
