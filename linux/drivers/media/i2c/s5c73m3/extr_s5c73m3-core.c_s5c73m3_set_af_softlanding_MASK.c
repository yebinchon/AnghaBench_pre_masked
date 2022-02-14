
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct s5c73m3 {int sensor_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct s5c73m3*,int ,scalar_t__*) ;
 int FUNC_3 (struct s5c73m3*,int ,int ) ;
 int FUNC_4 (int *,char*,...) ;

__attribute__((used)) static int FUNC_5(struct s5c73m3 *VAR_5)
{
 unsigned long VAR_6 = VAR_4;
 u16 VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 const char *VAR_10;

 VAR_9 = FUNC_3(VAR_5, VAR_0,
     VAR_1);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_5->sensor_sd, "AF soft-landing failed\n");
  return VAR_9;
 }

 for (;;) {
  VAR_9 = FUNC_2(VAR_5, VAR_0,
       &VAR_7);
  if (VAR_9 < 0) {
   VAR_10 = "failed";
   break;
  }
  if (VAR_7 == VAR_2) {
   VAR_10 = "succeeded";
   break;
  }
  if (++VAR_8 > 100) {
   VAR_9 = -VAR_3;
   VAR_10 = "timed out";
   break;
  }
  FUNC_1(25);
 }

 FUNC_4(&VAR_5->sensor_sd, "AF soft-landing %s after %dms\n",
    VAR_10, FUNC_0(VAR_4 - VAR_6));

 return VAR_9;
}
