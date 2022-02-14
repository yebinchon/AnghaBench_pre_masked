
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int * pages; int bflags; int refs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

bool FUNC_9(struct extent_buffer *VAR_2)
{
 int VAR_3;
 int VAR_4;
 bool VAR_5;

 FUNC_4(VAR_2);

 VAR_5 = FUNC_7(VAR_0, &VAR_2->bflags);

 VAR_4 = FUNC_5(VAR_2);
 FUNC_2(FUNC_3(&VAR_2->refs) == 0);
 FUNC_2(!FUNC_8(VAR_1, &VAR_2->bflags));

 if (!VAR_5)
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
   FUNC_6(VAR_2->pages[VAR_3]);






 return VAR_5;
}
