
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wmi {int fat_pipe_exist; int lock; int parent_dev; int * stream_exist_for_ac; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct wmi *VAR_1)
{
 u16 VAR_2;
 u8 VAR_3;
 int VAR_4;







 FUNC_1(&VAR_1->lock);
 VAR_3 = VAR_1->fat_pipe_exist;
 FUNC_2(&VAR_1->lock);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3 & (1 << VAR_4)) {




   FUNC_1(&VAR_1->lock);
   VAR_2 = VAR_1->stream_exist_for_ac[VAR_4];
   FUNC_2(&VAR_1->lock);





   if (!VAR_2) {
    VAR_3 &= ~(1 << VAR_4);




    FUNC_0(VAR_1->parent_dev,
           VAR_4, 0);
   }
  }
 }


 FUNC_1(&VAR_1->lock);
 VAR_1->fat_pipe_exist = VAR_3;
 FUNC_2(&VAR_1->lock);
}
