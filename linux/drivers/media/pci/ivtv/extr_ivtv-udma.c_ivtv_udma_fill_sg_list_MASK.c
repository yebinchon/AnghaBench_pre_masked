
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_user_dma {int ** map; int * SGlist; int ** bouncemap; } ;
struct ivtv_dma_page_info {int offset; int page_count; int tail; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (scalar_t__,void*,unsigned int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,unsigned int,int) ;

int FUNC_9 (struct ivtv_user_dma *VAR_2, struct ivtv_dma_page_info *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 unsigned long VAR_7;

 if (VAR_4 < 0)
  return VAR_4;

 VAR_6 = VAR_3->offset;


 for (VAR_5 = 0; VAR_5 < VAR_3->page_count; VAR_5++) {
  unsigned int VAR_8 = (VAR_5 == VAR_3->page_count - 1) ?
   VAR_3->tail : VAR_1 - VAR_6;

  if (FUNC_0(VAR_2->map[VAR_4])) {
   void *VAR_9;

   if (VAR_2->bouncemap[VAR_4] == ((void*)0))
    VAR_2->bouncemap[VAR_4] = FUNC_1(VAR_0);
   if (VAR_2->bouncemap[VAR_4] == ((void*)0))
    return -1;
   FUNC_5(VAR_7);
   VAR_9 = FUNC_2(VAR_2->map[VAR_4]) + VAR_6;
   FUNC_6(FUNC_7(VAR_2->bouncemap[VAR_4]) + VAR_6, VAR_9, VAR_8);
   FUNC_3(VAR_9);
   FUNC_4(VAR_7);
   FUNC_8(&VAR_2->SGlist[VAR_4], VAR_2->bouncemap[VAR_4], VAR_8, VAR_6);
  }
  else {
   FUNC_8(&VAR_2->SGlist[VAR_4], VAR_2->map[VAR_4], VAR_8, VAR_6);
  }
  VAR_6 = 0;
  VAR_4++;
 }
 return VAR_4;
}
