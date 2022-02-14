
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int dummy; } ;
struct macb {int tsu_incr; int ptp_clock_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct macb*,int *) ;
 int FUNC_1 (int *,struct timespec64*) ;
 int FUNC_2 (struct macb*,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 struct timespec64 FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct macb *VAR_1)
{
 struct timespec64 VAR_2;


 VAR_2 = FUNC_5(FUNC_4(FUNC_3()));


 FUNC_1(&VAR_1->ptp_clock_info, &VAR_2);


 FUNC_0(VAR_1, &VAR_1->tsu_incr);

 FUNC_2(VAR_1, VAR_0, 0);
}
