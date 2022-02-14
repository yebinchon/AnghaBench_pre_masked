
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int s_addr; } ;
struct TYPE_8__ {int sin_port; TYPE_3__ sin_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {int sin_port; TYPE_1__ sin_addr; } ;
struct cxgbi_sock {int err; TYPE_4__ daddr; TYPE_2__ saddr; int flags; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct cxgbi_sock*) ;
 int FUNC_1 (struct cxgbi_sock*,int ) ;
 int FUNC_2 (char*,struct cxgbi_sock*,int ,int ,int *,int ,int *,int ,int) ;

void FUNC_3(struct cxgbi_sock *VAR_1, int VAR_2)
{
 FUNC_2("csk 0x%p,%u,%lx, %pI4:%u-%pI4:%u, err %d.\n",
   VAR_1, VAR_1->state, VAR_1->flags,
   &VAR_1->saddr.sin_addr.s_addr, VAR_1->saddr.sin_port,
   &VAR_1->daddr.sin_addr.s_addr, VAR_1->daddr.sin_port,
   VAR_2);

 FUNC_1(VAR_1, VAR_0);
 VAR_1->err = VAR_2;
 FUNC_0(VAR_1);
}
