
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_balloon {unsigned long num_free_page_blocks; int free_page_list_lock; int free_page_list; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int *) ;
 int FUNC_1 (unsigned long,int ) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static unsigned long FUNC_5(struct virtio_balloon *VAR_1,
          unsigned long VAR_2)
{
 struct page *VAR_3;
 unsigned long VAR_4;

 FUNC_3(&VAR_1->free_page_list_lock);
 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_0(&VAR_1->free_page_list);
  if (!VAR_3)
   break;
  FUNC_1((unsigned long)FUNC_2(VAR_3),
      VAR_0);
 }
 VAR_1->num_free_page_blocks -= VAR_4;
 FUNC_4(&VAR_1->free_page_list_lock);

 return VAR_4;
}
