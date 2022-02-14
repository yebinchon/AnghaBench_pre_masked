
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_4__ {TYPE_1__* frame; } ;
struct s2255_vc {int last_frame; TYPE_2__ buffer; scalar_t__ frame_count; scalar_t__ cur_frame; scalar_t__ bad_payload; } ;
struct TYPE_3__ {scalar_t__ cur_size; int ulState; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct s2255_vc*) ;
 struct s2255_vc* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_2, unsigned int VAR_3)
{
 struct s2255_vc *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 VAR_4->last_frame = -1;
 VAR_4->bad_payload = 0;
 VAR_4->cur_frame = 0;
 VAR_4->frame_count = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4->buffer.frame[VAR_5].ulState = VAR_0;
  VAR_4->buffer.frame[VAR_5].cur_size = 0;
 }
 return FUNC_0(VAR_4);
}
