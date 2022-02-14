
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ion_system_heap {int dummy; } ;
struct ion_buffer {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (struct ion_system_heap*,struct ion_buffer*,unsigned int) ;
 unsigned long FUNC_1 (unsigned int) ;
 unsigned int* VAR_1 ;

__attribute__((used)) static struct page *FUNC_2(struct ion_system_heap *VAR_2,
         struct ion_buffer *VAR_3,
         unsigned long VAR_4,
         unsigned int VAR_5)
{
 struct page *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_4 < FUNC_1(VAR_1[VAR_7]))
   continue;
  if (VAR_5 < VAR_1[VAR_7])
   continue;

  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_1[VAR_7]);
  if (!VAR_6)
   continue;

  return VAR_6;
 }

 return ((void*)0);
}
