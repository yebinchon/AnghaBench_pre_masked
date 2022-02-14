
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wkup_m3_ipc {int state; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct wkup_m3_ipc*,int ,int) ;
 int FUNC_2 (struct wkup_m3_ipc*) ;
 int FUNC_3 (struct wkup_m3_ipc*) ;

__attribute__((used)) static int FUNC_4(struct wkup_m3_ipc *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 int VAR_6 = 0;

 if (!FUNC_2(VAR_4))
  return -VAR_1;

 FUNC_1(VAR_4, VAR_2, 1);
 FUNC_1(VAR_4, VAR_0, 2);

 VAR_4->state = VAR_3;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_5, "Unable to ping CM3\n");
  return VAR_6;
 }

 return 0;
}
