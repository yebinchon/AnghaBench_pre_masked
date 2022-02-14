
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct octeon_soft_command {int caller_is_done; int sc_status; int complete; int iq_no; } ;
struct octeon_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* txpciq; } ;
struct lio {TYPE_3__ linfo; struct octeon_device* oct_dev; } ;
struct TYPE_4__ {int q_no; } ;
struct TYPE_5__ {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 struct octeon_soft_command* FUNC_2 (struct octeon_device*,int ,int,int ) ;
 int FUNC_3 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_4 (struct octeon_device*,struct octeon_soft_command*,int ,int ,int ,int,int) ;
 int FUNC_5 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_6 (struct octeon_device*,struct octeon_soft_command*,int ) ;

__attribute__((used)) static int FUNC_7(struct lio *VAR_5, int VAR_6, bool VAR_7)
{
 struct octeon_device *VAR_8 = VAR_5->oct_dev;
 struct octeon_soft_command *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_8, 0, 16, 0);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->iq_no = VAR_5->linfo.txpciq[0].s.q_no;


 FUNC_4(VAR_8, VAR_9, VAR_3,
        VAR_4, 0, VAR_6 + 1,
        VAR_7);

 FUNC_1(&VAR_9->complete);
 VAR_9->sc_status = VAR_2;

 VAR_10 = FUNC_5(VAR_8, VAR_9);
 if (VAR_10 == VAR_1) {
  FUNC_3(VAR_8, VAR_9);
  VAR_10 = -1;
 } else {

  VAR_10 = FUNC_6(VAR_8, VAR_9, 0);
  if (VAR_10)
   return (VAR_10);

  FUNC_0(VAR_9->caller_is_done, 1);
 }

 return VAR_10;
}
