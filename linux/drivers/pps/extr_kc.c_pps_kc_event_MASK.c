
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_event_time {int ts_raw; int ts_real; } ;
struct pps_device {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 struct pps_device* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct pps_device *VAR_3, struct pps_event_time *VAR_4,
  int VAR_5)
{
 unsigned long VAR_6;


 FUNC_1(&VAR_1, VAR_6);
 if (VAR_3 == VAR_0 && VAR_5 & VAR_2)
  FUNC_0(&VAR_4->ts_real, &VAR_4->ts_raw);
 FUNC_2(&VAR_1, VAR_6);
}
