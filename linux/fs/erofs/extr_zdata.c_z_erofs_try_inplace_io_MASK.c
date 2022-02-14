
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z_erofs_pcluster {scalar_t__ compressed_pages; int clusterbits; } ;
struct z_erofs_collector {scalar_t__ compressedpages; struct z_erofs_pcluster* pcl; } ;
struct page {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,struct page*) ;

__attribute__((used)) static inline bool FUNC_2(struct z_erofs_collector *VAR_0,
       struct page *VAR_1)
{
 struct z_erofs_pcluster *const VAR_2 = VAR_0->pcl;
 const unsigned int VAR_3 = FUNC_0(VAR_2->clusterbits);

 while (VAR_0->compressedpages < VAR_2->compressed_pages + VAR_3) {
  if (!FUNC_1(VAR_0->compressedpages++, ((void*)0), VAR_1))
   return 1;
 }
 return 0;
}
