
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wkup_m3_ipc {int resume_addr; int mem_type; int state; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct wkup_m3_ipc*,int,int) ;
 int FUNC_2 (struct wkup_m3_ipc*) ;
 int FUNC_3 (struct wkup_m3_ipc*) ;
 int FUNC_4 (struct wkup_m3_ipc*) ;

__attribute__((used)) static int FUNC_5(struct wkup_m3_ipc *VAR_6, int VAR_7)
{
 struct device *VAR_8 = VAR_6->dev;
 int VAR_9;
 int VAR_10 = 0;

 if (!FUNC_2(VAR_6))
  return -VAR_1;

 switch (VAR_7) {
 case 130:
  VAR_9 = VAR_2;
  break;
 case 128:
  VAR_9 = VAR_4;
  break;
 case 129:
  VAR_9 = VAR_3;
  break;
 default:
  return 1;
 }


 FUNC_1(VAR_6, VAR_6->resume_addr, 0);
 FUNC_1(VAR_6, VAR_9, 1);
 FUNC_1(VAR_6, VAR_6->mem_type, 4);

 FUNC_1(VAR_6, VAR_0, 2);
 FUNC_1(VAR_6, VAR_0, 3);
 FUNC_1(VAR_6, VAR_0, 5);
 FUNC_1(VAR_6, VAR_0, 6);
 FUNC_1(VAR_6, VAR_0, 7);

 VAR_6->state = VAR_5;

 if (VAR_7 == 129)
  VAR_10 = FUNC_4(VAR_6);
 else
  VAR_10 = FUNC_3(VAR_6);

 if (VAR_10) {
  FUNC_0(VAR_8, "Unable to ping CM3\n");
  return VAR_10;
 }

 return 0;
}
