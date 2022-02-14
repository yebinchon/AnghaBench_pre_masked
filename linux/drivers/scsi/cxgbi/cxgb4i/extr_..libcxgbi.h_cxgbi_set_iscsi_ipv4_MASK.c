
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cxgbi_hba {TYPE_2__* ndev; int ipv4addr; TYPE_1__* cdev; } ;
typedef int __be32 ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct cxgbi_hba *VAR_1, __be32 VAR_2)
{
 if (VAR_1->cdev->flags & VAR_0)
  VAR_1->ipv4addr = VAR_2;
 else
  FUNC_0("set iscsi ipv4 NOT supported, using %s ipv4.\n",
   VAR_1->ndev->name);
}
