
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ion_page_pool {int low_count; int order; scalar_t__ high_count; } ;



__attribute__((used)) static int FUNC_0(struct ion_page_pool *VAR_0, bool VAR_1)
{
 int VAR_2 = VAR_0->low_count;

 if (VAR_1)
  VAR_2 += VAR_0->high_count;

 return VAR_2 << VAR_0->order;
}
