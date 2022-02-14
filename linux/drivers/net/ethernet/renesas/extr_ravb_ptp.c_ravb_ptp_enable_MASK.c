
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock_request {int type; int perout; int extts; } ;
struct ptp_clock_info {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct ptp_clock_info*,int *,int) ;
 int FUNC_1 (struct ptp_clock_info*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ptp_clock_info *VAR_1,
      struct ptp_clock_request *VAR_2, int VAR_3)
{
 switch (VAR_2->type) {
 case 129:
  return FUNC_0(VAR_1, &VAR_2->extts, VAR_3);
 case 128:
  return FUNC_1(VAR_1, &VAR_2->perout, VAR_3);
 default:
  return -VAR_0;
 }
}
