
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sizeimage; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct TYPE_8__ {TYPE_3__ fmt; } ;
struct vpfe_device {TYPE_1__* next_frm; TYPE_1__* cur_frm; TYPE_4__ fmt; } ;
struct TYPE_5__ {int done; int size; int state; int ts; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vpfe_device *VAR_1)
{
 VAR_1->cur_frm->ts = FUNC_0();
 VAR_1->cur_frm->state = VAR_0;
 VAR_1->cur_frm->size = VAR_1->fmt.fmt.pix.sizeimage;
 FUNC_1(&VAR_1->cur_frm->done);
 VAR_1->cur_frm = VAR_1->next_frm;
}
