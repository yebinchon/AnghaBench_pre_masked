
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gntdev_copy_batch {unsigned int nr_pages; int * pages; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct gntdev_copy_batch *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_pages; VAR_1++)
  FUNC_0(VAR_0->pages[VAR_1]);
 VAR_0->nr_pages = 0;
}
