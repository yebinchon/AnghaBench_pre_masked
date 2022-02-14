
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nic {TYPE_2__* csr; } ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ scb; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct nic *VAR_0)
{


 (void)FUNC_0(&VAR_0->csr->scb.status);
}
