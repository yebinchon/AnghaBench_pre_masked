
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct sis_video_info* vinfo; } ;
struct sis_video_info {TYPE_1__ sisfb_heap; } ;
struct sis_memreq {scalar_t__ size; scalar_t__ offset; } ;


 int FUNC_0 (struct sis_video_info*,struct sis_memreq*) ;
 TYPE_1__* VAR_0 ;

void
FUNC_1(struct sis_memreq *VAR_1)
{
 struct sis_video_info *VAR_2 = VAR_0->vinfo;

 if(&VAR_2->sisfb_heap == VAR_0)
  FUNC_0(VAR_2, VAR_1);
 else
  VAR_1->offset = VAR_1->size = 0;
}
