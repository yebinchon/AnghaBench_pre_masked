
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vpbe_layer {TYPE_2__* next_frm; TYPE_2__* cur_frm; } ;
struct vpbe_display {int dummy; } ;
struct TYPE_6__ {int timestamp; } ;
struct TYPE_4__ {TYPE_3__ vb2_buf; } ;
struct TYPE_5__ {TYPE_1__ vb; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_2(struct vpbe_display *VAR_1,
    struct vpbe_layer *VAR_2)
{
 if (VAR_2->cur_frm == VAR_2->next_frm)
  return;

 VAR_2->cur_frm->vb.vb2_buf.timestamp = FUNC_0();
 FUNC_1(&VAR_2->cur_frm->vb.vb2_buf, VAR_0);

 VAR_2->cur_frm = VAR_2->next_frm;
}
