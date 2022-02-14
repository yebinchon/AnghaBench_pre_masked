
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct privcmd_buf_vma_private {unsigned int n_pages; int * pages; int list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct privcmd_buf_vma_private*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct privcmd_buf_vma_private *VAR_0)
{
 unsigned int VAR_1;

 FUNC_2(&VAR_0->list);

 for (VAR_1 = 0; VAR_1 < VAR_0->n_pages; VAR_1++)
  FUNC_0(VAR_0->pages[VAR_1]);

 FUNC_1(VAR_0);
}
