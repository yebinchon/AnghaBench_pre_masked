
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sin_port; } ;
struct cxgbi_sock {scalar_t__ state; TYPE_2__* cdev; scalar_t__ dst; TYPE_1__ saddr; int tid; int flags; } ;
struct TYPE_4__ {int (* csk_release_offload_resources ) (struct cxgbi_sock*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxgbi_sock*) ;
 int FUNC_1 (struct cxgbi_sock*) ;
 int FUNC_2 (struct cxgbi_sock*,int ) ;
 int FUNC_3 (struct cxgbi_sock*,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,char*,struct cxgbi_sock*,scalar_t__,int ,int ) ;
 int FUNC_6 (struct cxgbi_sock*) ;
 int FUNC_7 (struct cxgbi_sock*) ;

void FUNC_8(struct cxgbi_sock *VAR_4)
{
 FUNC_5(1 << VAR_3, "csk 0x%p,%u,0x%lx,%u.\n",
  VAR_4, (VAR_4)->state, (VAR_4)->flags, (VAR_4)->tid);
 FUNC_2(VAR_4, VAR_0);
 if (VAR_4->state == VAR_1 || VAR_4->state == VAR_2)
  return;
 if (VAR_4->saddr.sin_port)
  FUNC_6(VAR_4);
 if (VAR_4->dst)
  FUNC_4(VAR_4->dst);
 VAR_4->cdev->csk_release_offload_resources(VAR_4);
 FUNC_3(VAR_4, VAR_2);
 FUNC_0(VAR_4);
 FUNC_1(VAR_4);
}
