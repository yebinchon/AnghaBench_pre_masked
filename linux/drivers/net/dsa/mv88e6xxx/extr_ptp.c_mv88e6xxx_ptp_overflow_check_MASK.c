
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct timespec64 {int dummy; } ;
struct mv88e6xxx_chip {int overflow_work; int ptp_clock_info; } ;
struct delayed_work {int dummy; } ;


 int VAR_0 ;
 struct mv88e6xxx_chip* FUNC_0 (struct delayed_work*) ;
 int FUNC_1 (int *,struct timespec64*) ;
 int FUNC_2 (int *,int ) ;
 struct delayed_work* FUNC_3 (struct work_struct*) ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_1)
{
 struct delayed_work *VAR_2 = FUNC_3(VAR_1);
 struct mv88e6xxx_chip *VAR_3 = FUNC_0(VAR_2);
 struct timespec64 VAR_4;

 FUNC_1(&VAR_3->ptp_clock_info, &VAR_4);

 FUNC_2(&VAR_3->overflow_work,
         VAR_0);
}
