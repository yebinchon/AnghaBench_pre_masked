
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct saa7134_dmaqueue {TYPE_3__* curr; int seq_nr; } ;
struct saa7134_dev {int dummy; } ;
struct TYPE_5__ {int timestamp; } ;
struct TYPE_4__ {TYPE_2__ vb2_buf; scalar_t__ sequence; } ;
struct TYPE_6__ {TYPE_1__ vb2; } ;


 int FUNC_0 (char*,TYPE_3__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;

void FUNC_3(struct saa7134_dev *VAR_0,
      struct saa7134_dmaqueue *VAR_1,
      unsigned int VAR_2)
{
 FUNC_0("buffer_finish %p\n", VAR_1->curr);


 VAR_1->curr->vb2.vb2_buf.timestamp = FUNC_1();
 VAR_1->curr->vb2.sequence = VAR_1->seq_nr++;
 FUNC_2(&VAR_1->curr->vb2.vb2_buf, VAR_2);
 VAR_1->curr = ((void*)0);
}
