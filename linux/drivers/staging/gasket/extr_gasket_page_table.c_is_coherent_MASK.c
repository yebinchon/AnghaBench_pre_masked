
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef scalar_t__ u64 ;
struct gasket_page_table {int num_coherent_pages; TYPE_1__* coherent_pages; } ;
struct TYPE_2__ {scalar_t__ user_virt; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct gasket_page_table *VAR_1, ulong VAR_2)
{
 u64 VAR_3, VAR_4;


 if (!VAR_1->coherent_pages)
  return 0;

 VAR_3 = (u64)VAR_1->coherent_pages[0].user_virt;
 VAR_4 = VAR_3 + VAR_0 * VAR_1->num_coherent_pages;

 return VAR_3 <= VAR_2 && VAR_2 < VAR_4;
}
