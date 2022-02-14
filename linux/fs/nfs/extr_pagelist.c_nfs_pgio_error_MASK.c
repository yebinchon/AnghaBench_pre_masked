
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_pgio_header {TYPE_1__* completion_ops; int flags; } ;
struct TYPE_2__ {int (* completion ) (struct nfs_pgio_header*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct nfs_pgio_header*) ;

__attribute__((used)) static void FUNC_2(struct nfs_pgio_header *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->flags);
 VAR_1->completion_ops->completion(VAR_1);
}
