
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_pcluster {int ** compressed_pages; } ;
struct z_erofs_collection {scalar_t__ vcnt; scalar_t__ nr_pages; int lock; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 struct z_erofs_collection* FUNC_1 (struct z_erofs_pcluster*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
 struct z_erofs_pcluster *VAR_2 = VAR_1;
 struct z_erofs_collection *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4;

 FUNC_0(&VAR_3->lock);
 VAR_3->nr_pages = 0;
 VAR_3->vcnt = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
  VAR_2->compressed_pages[VAR_4] = ((void*)0);
}
