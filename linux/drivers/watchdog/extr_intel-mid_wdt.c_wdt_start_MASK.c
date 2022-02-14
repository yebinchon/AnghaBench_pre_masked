
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; } ;
struct device {int dummy; } ;
typedef int ipc_wd_start ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,int) ;
 struct device* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_2)
{
 struct device *VAR_3 = FUNC_2(VAR_2);
 int VAR_4, VAR_5;
 int VAR_6 = VAR_2->timeout;
 struct ipc_wd_start {
  u32 pretimeout;
  u32 timeout;
 } VAR_7 = { VAR_6 - VAR_0, VAR_6 };





 VAR_5 = FUNC_0(sizeof(VAR_7), 4);

 VAR_4 = FUNC_3(VAR_1, (u32 *)&VAR_7, VAR_5);
 if (VAR_4)
  FUNC_1(VAR_3, "error starting watchdog: %d\n", VAR_4);

 return VAR_4;
}
