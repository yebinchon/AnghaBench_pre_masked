
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct nfs4_stateowner {TYPE_2__* so_ops; TYPE_1__ so_owner; } ;
struct TYPE_4__ {int (* so_free ) (struct nfs4_stateowner*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfs4_stateowner*) ;

__attribute__((used)) static inline void FUNC_2(struct nfs4_stateowner *VAR_0)
{
 FUNC_0(VAR_0->so_owner.data);
 VAR_0->so_ops->so_free(VAR_0);
}
