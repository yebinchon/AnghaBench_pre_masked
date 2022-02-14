
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sis_video_info {scalar_t__ sisfb_id; scalar_t__ video_vbase; int sisfb_heap; int havenoheap; } ;
struct sis_memreq {scalar_t__ size; scalar_t__ offset; } ;
struct SIS_OH {scalar_t__ offset; scalar_t__ size; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 struct SIS_OH* FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct sis_video_info *VAR_1, struct sis_memreq *VAR_2)
{
 struct SIS_OH *VAR_3 = ((void*)0);

 if((VAR_1) && (VAR_1->sisfb_id == VAR_0) && (!VAR_1->havenoheap))
  VAR_3 = FUNC_1(&VAR_1->sisfb_heap, (u32)VAR_2->size);

 if(VAR_3 == ((void*)0)) {
  VAR_2->offset = VAR_2->size = 0;
  FUNC_0("sisfb: Video RAM allocation failed\n");
 } else {
  VAR_2->offset = VAR_3->offset;
  VAR_2->size = VAR_3->size;
  FUNC_0("sisfb: Video RAM allocation succeeded: 0x%lx\n",
   (VAR_3->offset + VAR_1->video_vbase));
 }
}
