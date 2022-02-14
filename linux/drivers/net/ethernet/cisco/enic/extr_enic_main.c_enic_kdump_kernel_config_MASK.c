
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mtu; int wq_desc_count; int rq_desc_count; } ;
struct enic {int rq_count; int wq_count; TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct enic*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct enic *VAR_3)
{
 if (FUNC_2()) {
  FUNC_0(FUNC_1(VAR_3), "Running from within kdump kernel. Using minimal resources\n");
  VAR_3->rq_count = 1;
  VAR_3->wq_count = 1;
  VAR_3->config.rq_desc_count = VAR_0;
  VAR_3->config.wq_desc_count = VAR_1;
  VAR_3->config.mtu = FUNC_3(VAR_2, 1500, VAR_3->config.mtu);
 }
}
