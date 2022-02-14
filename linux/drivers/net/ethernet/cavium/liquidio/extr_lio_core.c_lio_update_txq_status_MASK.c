
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct octeon_instr_queue {size_t ifidx; int q_index; } ;
struct octeon_device {TYPE_4__* props; struct octeon_instr_queue** instr_queue; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ link_up; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
struct TYPE_7__ {TYPE_2__ link; } ;
struct lio {int oct_dev; TYPE_3__ linfo; } ;
struct TYPE_8__ {struct net_device* netdev; } ;


 struct lio* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,int ,int) ;
 scalar_t__ FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct octeon_device*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct octeon_device *VAR_1, int VAR_2)
{
 struct octeon_instr_queue *VAR_3 = VAR_1->instr_queue[VAR_2];
 struct net_device *VAR_4;
 struct lio *VAR_5;

 VAR_4 = VAR_1->props[VAR_3->ifidx].netdev;




 if (!VAR_4)
  return;

 VAR_5 = FUNC_0(VAR_4);
 if (FUNC_2(VAR_4, VAR_3->q_index) &&
     VAR_5->linfo.link.s.link_up &&
     (!FUNC_4(VAR_1, VAR_2))) {
  FUNC_3(VAR_4, VAR_3->q_index);
  FUNC_1(VAR_5->oct_dev, VAR_2,
       VAR_0, 1);
 }
}
