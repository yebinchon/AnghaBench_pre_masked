
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec64 {int tv_sec; int tv_nsec; } ;
struct ocelot {int ptp_clock_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ocelot*,int ) ;
 void* FUNC_3 (struct ocelot*,int ,int ) ;
 int FUNC_4 (struct ocelot*,int,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct ocelot *VAR_9, struct timespec64 *VAR_10)
{
 unsigned long VAR_11;
 u32 VAR_12;

 FUNC_5(&VAR_9->ptp_clock_lock, VAR_11);


 VAR_12 = FUNC_3(VAR_9, VAR_1, VAR_8);

 VAR_12 &= ~(VAR_4 | VAR_2 | VAR_3);
 VAR_12 |= FUNC_0(VAR_0);
 FUNC_4(VAR_9, VAR_12, VAR_1, VAR_8);
 VAR_10->tv_sec = FUNC_3(VAR_9, VAR_5, VAR_8);


 VAR_12 = FUNC_2(VAR_9, VAR_6);
 VAR_10->tv_nsec = FUNC_1(VAR_12);


 if ((VAR_10->tv_sec & 0x1) != !!(VAR_12 & VAR_7))
  VAR_10->tv_sec--;

 FUNC_6(&VAR_9->ptp_clock_lock, VAR_11);
}
