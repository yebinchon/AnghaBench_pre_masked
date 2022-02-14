
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sis_video_info {scalar_t__ sisfb_id; int sisfb_heap; scalar_t__ havenoheap; } ;
struct SIS_OH {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 scalar_t__ VAR_0 ;
 struct SIS_OH* FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct sis_video_info *VAR_1, u32 VAR_2)
{
 struct SIS_OH *VAR_3;

 if((!VAR_1) || (VAR_1->sisfb_id != VAR_0) || (VAR_1->havenoheap))
  return;

 VAR_3 = FUNC_1(&VAR_1->sisfb_heap, VAR_2);

 if(VAR_3 == ((void*)0)) {
  FUNC_0("sisfb: sisfb_poh_free() failed at base 0x%x\n",
   (unsigned int) VAR_2);
 }
}
