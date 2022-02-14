
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmci_ctx {int cid; } ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(struct vmci_ctx *VAR_1)
{
 if (!VAR_1)
  return VAR_0;
 return VAR_1->cid;
}
