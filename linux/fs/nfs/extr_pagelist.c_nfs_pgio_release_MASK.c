
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pgio_header {TYPE_1__* completion_ops; } ;
struct TYPE_2__ {int (* completion ) (struct nfs_pgio_header*) ;} ;


 int FUNC_0 (struct nfs_pgio_header*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct nfs_pgio_header *VAR_1 = VAR_0;
 VAR_1->completion_ops->completion(VAR_1);
}
