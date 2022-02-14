
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ucsi_ccg {int dev_resp; struct device* dev; } ;
struct device {int dummy; } ;
typedef int intval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ucsi_ccg*,int ,int*,int) ;
 int FUNC_1 (struct ucsi_ccg*,int ,int*,int) ;
 int FUNC_2 (struct device*,char*) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct ucsi_ccg *VAR_5)
{
 unsigned long VAR_6 = VAR_4 + FUNC_3(1000);
 struct device *VAR_7 = VAR_5->dev;
 u8 VAR_8;
 int VAR_9;


 do {
  VAR_9 = FUNC_0(VAR_5, VAR_0, &VAR_8,
      sizeof(VAR_8));
  if (VAR_9 < 0)
   return VAR_9;

  if (VAR_8 & VAR_2)
   break;
  FUNC_6(500, 600);
 } while (FUNC_4(VAR_6));

 if (FUNC_5(VAR_6)) {
  FUNC_2(VAR_7, "response timeout error\n");
  return -VAR_3;
 }

 VAR_9 = FUNC_0(VAR_5, VAR_1, (u8 *)&VAR_5->dev_resp,
     sizeof(VAR_5->dev_resp));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_5, VAR_0, &VAR_8, sizeof(VAR_8));
 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}
