
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct timer_list {int dummy; } ;
struct ahd_softc {int hs_mailbox; scalar_t__ cmdcmplt_total; scalar_t__ int_coalescing_threshold; scalar_t__ int_coalescing_stop_threshold; int cmdcmplt_bucket; scalar_t__* cmdcmplt_counts; int stat_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ahd_softc* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ahd_softc*,int) ;
 int FUNC_1 (struct ahd_softc*,int *) ;
 int FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ahd_softc*,int *) ;
 struct ahd_softc* FUNC_5 (int ,struct timer_list*,int ) ;
 int FUNC_6 (char*,int ,char*,scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_7(struct timer_list *VAR_7)
{
 struct ahd_softc *VAR_8 = FUNC_5(VAR_8, VAR_7, VAR_6);
 u_long VAR_9;
 int VAR_10;

 FUNC_1(VAR_8, &VAR_9);

 VAR_10 = VAR_8->hs_mailbox & VAR_3;
 if (VAR_8->cmdcmplt_total > VAR_8->int_coalescing_threshold)
  VAR_10 |= VAR_3;
 else if (VAR_8->cmdcmplt_total < VAR_8->int_coalescing_stop_threshold)
  VAR_10 &= ~VAR_3;

 if (VAR_10 != (VAR_8->hs_mailbox & VAR_3)) {
  FUNC_0(VAR_8, VAR_10);
 }

 VAR_8->cmdcmplt_bucket = (VAR_8->cmdcmplt_bucket+1) & (VAR_1-1);
 VAR_8->cmdcmplt_total -= VAR_8->cmdcmplt_counts[VAR_8->cmdcmplt_bucket];
 VAR_8->cmdcmplt_counts[VAR_8->cmdcmplt_bucket] = 0;
 FUNC_3(&VAR_8->stat_timer, VAR_2);
 FUNC_4(VAR_8, &VAR_9);
}
