
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock_info {int dummy; } ;
struct mv88e6xxx_chip {int tstamp_tc; } ;
typedef int s64 ;


 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 struct mv88e6xxx_chip* FUNC_2 (struct ptp_clock_info*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct ptp_clock_info *VAR_0, s64 VAR_1)
{
 struct mv88e6xxx_chip *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->tstamp_tc, VAR_1);
 FUNC_1(VAR_2);

 return 0;
}
