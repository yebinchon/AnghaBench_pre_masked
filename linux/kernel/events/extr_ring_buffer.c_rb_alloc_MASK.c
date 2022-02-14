
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int nr_pages; void* user_page; void** data_pages; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct ring_buffer*) ;
 struct ring_buffer* FUNC_2 (unsigned long,int ) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct ring_buffer*,long,int) ;

struct ring_buffer *FUNC_6(int VAR_3, long VAR_4, int VAR_5, int VAR_6)
{
 struct ring_buffer *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_8 = sizeof(struct ring_buffer);
 VAR_8 += VAR_3 * sizeof(void *);

 if (FUNC_3(VAR_8) >= VAR_2+VAR_1)
  goto fail;

 VAR_7 = FUNC_2(VAR_8, VAR_0);
 if (!VAR_7)
  goto fail;

 VAR_7->user_page = FUNC_4(VAR_5);
 if (!VAR_7->user_page)
  goto fail_user_page;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7->data_pages[VAR_9] = FUNC_4(VAR_5);
  if (!VAR_7->data_pages[VAR_9])
   goto fail_data_pages;
 }

 VAR_7->nr_pages = VAR_3;

 FUNC_5(VAR_7, VAR_4, VAR_6);

 return VAR_7;

fail_data_pages:
 for (VAR_9--; VAR_9 >= 0; VAR_9--)
  FUNC_0((unsigned long)VAR_7->data_pages[VAR_9]);

 FUNC_0((unsigned long)VAR_7->user_page);

fail_user_page:
 FUNC_1(VAR_7);

fail:
 return ((void*)0);
}
