
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock_request {int type; } ;
struct ptp_clock_info {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct ptp_clock_info*,struct ptp_clock_request*,int) ;
 int FUNC_1 (struct ptp_clock_info*,struct ptp_clock_request*,int) ;
 int FUNC_2 (struct ptp_clock_info*,struct ptp_clock_request*,int) ;

__attribute__((used)) static int FUNC_3(struct ptp_clock_info *VAR_1,
      struct ptp_clock_request *VAR_2,
      int VAR_3)
{
 switch (VAR_2->type) {
 case 130:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 case 129:
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 case 128:
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 default:
  return -VAR_0;
 }
 return 0;
}
