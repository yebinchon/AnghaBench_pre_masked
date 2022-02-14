
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitid_info {int dummy; } ;
struct wait_opts {int wo_type; int wo_flags; struct rusage* wo_rusage; struct waitid_info* wo_info; struct pid* wo_pid; } ;
struct rusage {int dummy; } ;
struct pid {int dummy; } ;
typedef int pid_t ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;


 long VAR_0 ;
 int FUNC_0 (struct pid*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long FUNC_1 (struct pid*) ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 long FUNC_2 (struct wait_opts*) ;
 struct pid* FUNC_3 (int ) ;
 struct pid* FUNC_4 (int ,int) ;
 struct pid* FUNC_5 (int ) ;
 int FUNC_6 (struct pid*) ;

__attribute__((used)) static long FUNC_7(int VAR_13, pid_t VAR_14, struct waitid_info *VAR_15,
     int VAR_16, struct rusage *VAR_17)
{
 struct wait_opts VAR_18;
 struct pid *VAR_19 = ((void*)0);
 enum pid_type VAR_20;
 long VAR_21;

 if (VAR_16 & ~(VAR_6|VAR_7|VAR_5|VAR_8|VAR_4|
   VAR_11|VAR_10|VAR_9))
  return -VAR_0;
 if (!(VAR_16 & (VAR_5|VAR_8|VAR_4)))
  return -VAR_0;

 switch (VAR_13) {
 case 131:
  VAR_20 = VAR_1;
  break;
 case 129:
  VAR_20 = VAR_3;
  if (VAR_14 <= 0)
   return -VAR_0;

  VAR_19 = FUNC_3(VAR_14);
  break;
 case 130:
  VAR_20 = VAR_2;
  if (VAR_14 < 0)
   return -VAR_0;

  if (VAR_14)
   VAR_19 = FUNC_3(VAR_14);
  else
   VAR_19 = FUNC_4(VAR_12, VAR_2);
  break;
 case 128:
  VAR_20 = VAR_3;
  if (VAR_14 < 0)
   return -VAR_0;

  VAR_19 = FUNC_5(VAR_14);
  if (FUNC_0(VAR_19))
   return FUNC_1(VAR_19);
  break;
 default:
  return -VAR_0;
 }

 VAR_18.wo_type = VAR_20;
 VAR_18.wo_pid = VAR_19;
 VAR_18.wo_flags = VAR_16;
 VAR_18.wo_info = VAR_15;
 VAR_18.wo_rusage = VAR_17;
 VAR_21 = FUNC_2(&VAR_18);

 FUNC_6(VAR_19);
 return VAR_21;
}
