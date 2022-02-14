
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {struct tm6000_fh* priv_data; } ;
struct tm6000_fh {struct tm6000_core* dev; } ;
struct TYPE_3__ {struct tm6000_buffer* buf; } ;
struct tm6000_core {int slock; TYPE_1__ isoc_ctl; } ;
struct TYPE_4__ {int state; } ;
struct tm6000_buffer {TYPE_2__ vb; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct videobuf_queue *VAR_1, struct tm6000_buffer *VAR_2)
{
 struct tm6000_fh *VAR_3 = VAR_1->priv_data;
 struct tm6000_core *VAR_4 = VAR_3->dev;
 unsigned long VAR_5;

 FUNC_0(FUNC_1());
 FUNC_2(&VAR_4->slock, VAR_5);
 if (VAR_4->isoc_ctl.buf == VAR_2)
  VAR_4->isoc_ctl.buf = ((void*)0);
 FUNC_3(&VAR_4->slock, VAR_5);

 FUNC_4(&VAR_2->vb);
 VAR_2->vb.state = VAR_0;
}
