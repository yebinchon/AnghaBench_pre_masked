
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt3_board {TYPE_3__* pdev; } ;
struct TYPE_5__ {struct pt3_board* priv; } ;
struct pt3_adapter {int num_bufs; int num_desc_bufs; TYPE_4__* desc_buf; TYPE_2__* buffer; TYPE_1__ dvb_adap; } ;
struct TYPE_8__ {int b_addr; int descs; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int b_addr; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;

void FUNC_1(struct pt3_adapter *VAR_2)
{
 struct pt3_board *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->dvb_adap.priv;
 for (VAR_4 = 0; VAR_4 < VAR_2->num_bufs; VAR_4++)
  FUNC_0(&VAR_3->pdev->dev, VAR_0,
   VAR_2->buffer[VAR_4].data, VAR_2->buffer[VAR_4].b_addr);
 VAR_2->num_bufs = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_desc_bufs; VAR_4++)
  FUNC_0(&VAR_3->pdev->dev, VAR_1,
   VAR_2->desc_buf[VAR_4].descs, VAR_2->desc_buf[VAR_4].b_addr);
 VAR_2->num_desc_bufs = 0;
}
