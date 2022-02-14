
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_pfn {int ndns; int uuid; } ;
struct dev_pagemap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nd_pfn*,struct dev_pagemap*) ;
 int FUNC_1 (struct nd_pfn*) ;

int FUNC_2(struct nd_pfn *VAR_1, struct dev_pagemap *VAR_2)
{
 int VAR_3;

 if (!VAR_1->uuid || !VAR_1->ndns)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return VAR_3;


 return FUNC_0(VAR_1, VAR_2);
}
