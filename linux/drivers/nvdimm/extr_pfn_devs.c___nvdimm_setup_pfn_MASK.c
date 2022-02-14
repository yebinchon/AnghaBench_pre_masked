
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct vmem_altmap {scalar_t__ start; scalar_t__ end; void* end_pfn; scalar_t__ alloc; void* free; int reserve; int base_pfn; } ;
struct resource {scalar_t__ start; scalar_t__ end; void* end_pfn; scalar_t__ alloc; void* free; int reserve; int base_pfn; } ;
struct nd_pfn_sb {int npfns; int end_trunc; int start_pad; int dataoff; } ;
struct nd_pfn {scalar_t__ mode; void* npfns; struct nd_pfn_sb* pfn_sb; int dev; struct nd_namespace_common* ndns; } ;
struct nd_namespace_io {struct vmem_altmap res; } ;
struct nd_namespace_common {int dev; } ;
struct dev_pagemap {int flags; struct vmem_altmap altmap; struct vmem_altmap res; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,void*,void*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct vmem_altmap*,struct vmem_altmap*,int) ;
 scalar_t__ FUNC_8 (struct vmem_altmap*) ;
 struct nd_namespace_io* FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct nd_pfn *VAR_5, struct dev_pagemap *VAR_6)
{
 struct resource *VAR_7 = &VAR_6->res;
 struct vmem_altmap *VAR_8 = &VAR_6->altmap;
 struct nd_pfn_sb *VAR_9 = VAR_5->pfn_sb;
 u64 VAR_10 = FUNC_6(VAR_9->dataoff);
 u32 VAR_11 = FUNC_1(VAR_9->start_pad);
 u32 VAR_12 = FUNC_1(VAR_9->end_trunc);
 u32 VAR_13 = FUNC_3();
 struct nd_namespace_common *VAR_14 = VAR_5->ndns;
 struct nd_namespace_io *VAR_15 = FUNC_9(&VAR_14->dev);
 resource_size_t VAR_16 = VAR_15->res.start + VAR_11;
 resource_size_t VAR_17 = VAR_15->res.end - VAR_12;
 struct vmem_altmap VAR_18 = {
  .base_pfn = FUNC_4(VAR_16),
  .reserve = FUNC_5(VAR_16),
  .end_pfn = FUNC_0(VAR_17),
 };

 FUNC_7(VAR_7, &VAR_15->res, sizeof(*VAR_7));
 VAR_7->start += VAR_11;
 VAR_7->end -= VAR_12;

 if (VAR_5->mode == VAR_3) {
  if (VAR_10 < VAR_13)
   return -VAR_0;
  VAR_5->npfns = FUNC_6(VAR_9->npfns);
 } else if (VAR_5->mode == VAR_2) {
  VAR_5->npfns = FUNC_0((FUNC_8(VAR_7) - VAR_10));
  if (FUNC_6(VAR_5->pfn_sb->npfns) > VAR_5->npfns)
   FUNC_2(&VAR_5->dev,
     "number of pfns truncated from %lld to %ld\n",
     FUNC_6(VAR_5->pfn_sb->npfns),
     VAR_5->npfns);
  FUNC_7(VAR_8, &VAR_18, sizeof(*VAR_8));
  VAR_8->free = FUNC_0(VAR_10 - VAR_13);
  VAR_8->alloc = 0;
  VAR_6->flags |= VAR_4;
 } else
  return -VAR_1;

 return 0;
}
