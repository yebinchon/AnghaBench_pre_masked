
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec64 {int tv_nsec; int tv_sec; } ;
struct ptp_clock_info {int dummy; } ;
struct TYPE_2__ {int nsec; int sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct timespec64*,struct timespec64*,int) ;
 int FUNC_2 (char*,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ptp_clock_info *VAR_6, struct timespec64 *VAR_7)
{
 unsigned long VAR_8;
 struct timespec64 VAR_9;

 FUNC_3(&VAR_5);

 VAR_8 = FUNC_0(VAR_2,
        VAR_4,
        VAR_1);
 if (VAR_8 != 0) {
  FUNC_2("clock offset hypercall ret %lu\n", VAR_8);
  FUNC_4(&VAR_5);
  return -VAR_0;
 }

 VAR_9.tv_sec = VAR_3.sec;
 VAR_9.tv_nsec = VAR_3.nsec;
 FUNC_4(&VAR_5);

 FUNC_1(VAR_7, &VAR_9, sizeof(struct timespec64));

 return 0;
}
