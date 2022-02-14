
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_context {int pe_inserted; } ;


 scalar_t__ FUNC_0 (struct cxl_context*) ;
 scalar_t__ FUNC_1 (struct cxl_context*) ;

__attribute__((used)) static inline int FUNC_2(struct cxl_context *VAR_0)
{
 if (!VAR_0->pe_inserted)
  return 0;
 if (FUNC_1(VAR_0))
  return -1;
 if (FUNC_0(VAR_0))
  return -1;

 return 0;
}
