
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int nr_pages; scalar_t__* data_pages; scalar_t__ user_page; } ;


 int FUNC_0 (struct ring_buffer*) ;
 int FUNC_1 (unsigned long) ;

void FUNC_2(struct ring_buffer *VAR_0)
{
 int VAR_1;

 FUNC_1((unsigned long)VAR_0->user_page);
 for (VAR_1 = 0; VAR_1 < VAR_0->nr_pages; VAR_1++)
  FUNC_1((unsigned long)VAR_0->data_pages[VAR_1]);
 FUNC_0(VAR_0);
}
