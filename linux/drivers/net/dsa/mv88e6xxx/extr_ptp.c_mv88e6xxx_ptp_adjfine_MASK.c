
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long u64 ;
typedef scalar_t__ u32 ;
struct ptp_clock_info {int dummy; } ;
struct mv88e6xxx_ptp_ops {long cc_mult_num; int cc_mult_dem; scalar_t__ cc_mult; } ;
struct TYPE_4__ {scalar_t__ mult; } ;
struct mv88e6xxx_chip {TYPE_1__ tstamp_cc; int tstamp_tc; TYPE_3__* info; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {struct mv88e6xxx_ptp_ops* ptp_ops; } ;


 scalar_t__ FUNC_0 (long,int ) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;
 struct mv88e6xxx_chip* FUNC_3 (struct ptp_clock_info*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ptp_clock_info *VAR_0, long VAR_1)
{
 struct mv88e6xxx_chip *VAR_2 = FUNC_3(VAR_0);
 const struct mv88e6xxx_ptp_ops *VAR_3 = VAR_2->info->ops->ptp_ops;
 int VAR_4 = 0;
 u32 VAR_5, VAR_6;
 u64 VAR_7;

 if (VAR_1 < 0) {
  VAR_4 = 1;
  VAR_1 = -VAR_1;
 }

 VAR_6 = VAR_3->cc_mult;
 VAR_7 = VAR_3->cc_mult_num;
 VAR_7 *= VAR_1;
 VAR_5 = FUNC_0(VAR_7, VAR_3->cc_mult_dem);

 FUNC_1(VAR_2);

 FUNC_4(&VAR_2->tstamp_tc);
 VAR_2->tstamp_cc.mult = VAR_4 ? VAR_6 - VAR_5 : VAR_6 + VAR_5;

 FUNC_2(VAR_2);

 return 0;
}
