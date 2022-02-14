
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct omap_vout_device {int field_id; TYPE_2__* next_frm; TYPE_2__* cur_frm; int dma_queue; int sequence; scalar_t__ first_int; } ;
struct TYPE_6__ {int timestamp; } ;
struct TYPE_4__ {TYPE_3__ vb2_buf; scalar_t__ sequence; } ;
struct TYPE_5__ {TYPE_1__ vbuf; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_2(struct omap_vout_device *VAR_3,
  unsigned int VAR_4, u64 VAR_5)
{
 u32 VAR_6;

 if (VAR_3->first_int) {
  VAR_3->first_int = 0;
  goto err;
 }

 if (VAR_4 & VAR_1)
  VAR_6 = 1;
 else if (VAR_4 & VAR_0)
  VAR_6 = 0;
 else
  goto err;

 VAR_3->field_id ^= 1;
 if (VAR_6 != VAR_3->field_id) {
  if (VAR_6 == 0)
   VAR_3->field_id = VAR_6;
 } else if (0 == VAR_6) {
  if (VAR_3->cur_frm == VAR_3->next_frm)
   goto err;

  VAR_3->cur_frm->vbuf.vb2_buf.timestamp = VAR_5;
  VAR_3->cur_frm->vbuf.sequence = VAR_3->sequence++;
  FUNC_1(&VAR_3->cur_frm->vbuf.vb2_buf, VAR_2);
  VAR_3->cur_frm = VAR_3->next_frm;
 } else {
  if (FUNC_0(&VAR_3->dma_queue) ||
    (VAR_3->cur_frm != VAR_3->next_frm))
   goto err;
 }

 return VAR_3->field_id;
err:
 return 0;
}
