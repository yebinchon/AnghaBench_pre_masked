
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_ctx {scalar_t__ user_version; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct vmci_ctx *VAR_1)
{
 return VAR_1 && VAR_1->user_version >= VAR_0;
}
