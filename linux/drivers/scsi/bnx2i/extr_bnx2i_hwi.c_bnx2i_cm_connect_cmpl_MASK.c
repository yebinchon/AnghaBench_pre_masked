
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cnic_sock {int flags; scalar_t__ context; } ;
struct bnx2i_endpoint {int ofld_wait; void* state; TYPE_1__* hba; } ;
struct TYPE_2__ {int adapter_state; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cnic_sock *VAR_4)
{
 struct bnx2i_endpoint *VAR_5 = (struct bnx2i_endpoint *) VAR_4->context;

 if (FUNC_0(VAR_0, &VAR_5->hba->adapter_state))
  VAR_5->state = VAR_2;
 else if (FUNC_0(VAR_3, &VAR_4->flags))
  VAR_5->state = VAR_1;
 else
  VAR_5->state = VAR_2;

 FUNC_1(&VAR_5->ofld_wait);
}
