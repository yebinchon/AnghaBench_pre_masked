
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock_request {int type; } ;
struct ptp_clock_info {int dummy; } ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct mv88e6xxx_chip*,struct ptp_clock_request*,int) ;
 struct mv88e6xxx_chip* FUNC_1 (struct ptp_clock_info*) ;

__attribute__((used)) static int FUNC_2(struct ptp_clock_info *VAR_1,
    struct ptp_clock_request *VAR_2, int VAR_3)
{
 struct mv88e6xxx_chip *VAR_4 = FUNC_1(VAR_1);

 switch (VAR_2->type) {
 case 128:
  return FUNC_0(VAR_4, VAR_2, VAR_3);
 default:
  return -VAR_0;
 }
}
