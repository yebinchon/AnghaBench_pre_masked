
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_iocpf {int fw_mismatch_notified; TYPE_1__* ioc; } ;
struct TYPE_2__ {int iocpf_timer; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_iocpf *VAR_2)
{

 if (!VAR_2->fw_mismatch_notified)
  FUNC_0(VAR_2->ioc);

 VAR_2->fw_mismatch_notified = 1;
 FUNC_1(&(VAR_2->ioc)->iocpf_timer, VAR_1 +
  FUNC_2(VAR_0));
}
