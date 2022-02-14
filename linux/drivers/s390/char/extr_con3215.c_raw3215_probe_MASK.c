
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {struct ccw_device* cdev; } ;
struct ccw_device {int handler; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct raw3215_info* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct raw3215_info*) ;
 struct raw3215_info** VAR_3 ;
 struct raw3215_info* FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (struct raw3215_info*) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6 (struct ccw_device *VAR_6)
{
 struct raw3215_info *VAR_7;
 int VAR_8;


 if (VAR_3[0] && (VAR_3[0] == FUNC_0(&VAR_6->dev)))
  return 0;

 VAR_7 = FUNC_2();
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_7->cdev = VAR_6;
 FUNC_1(&VAR_6->dev, VAR_7);
 VAR_6->handler = VAR_5;

 FUNC_4(&VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (!VAR_3[VAR_8]) {
   VAR_3[VAR_8] = VAR_7;
   break;
  }
 }
 FUNC_5(&VAR_4);
 if (VAR_8 == VAR_2) {
  FUNC_3(VAR_7);
  return -VAR_0;
 }

 return 0;
}
