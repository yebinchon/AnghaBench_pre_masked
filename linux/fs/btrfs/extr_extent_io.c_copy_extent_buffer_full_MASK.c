
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {scalar_t__ len; int * pages; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct extent_buffer *VAR_0,
        struct extent_buffer *VAR_1)
{
 int VAR_2;
 int VAR_3;

 FUNC_0(VAR_0->len == VAR_1->len);

 VAR_3 = FUNC_2(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  FUNC_1(FUNC_3(VAR_0->pages[VAR_2]),
    FUNC_3(VAR_1->pages[VAR_2]));
}
