
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {int dummy; } ;
struct ccw_device {int dev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct ccw_device*) ;
 struct raw3215_info* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 struct raw3215_info** VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct raw3215_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6 (struct ccw_device *VAR_3)
{
 struct raw3215_info *VAR_4;
 unsigned int VAR_5;

 FUNC_0(VAR_3);
 VAR_4 = FUNC_1(&VAR_3->dev);
 if (VAR_4) {
  FUNC_4(&VAR_2);
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
   if (VAR_1[VAR_5] == VAR_4)
    break;
  VAR_1[VAR_5] = ((void*)0);
  FUNC_5(&VAR_2);
  FUNC_2(&VAR_3->dev, ((void*)0));
  FUNC_3(VAR_4);
 }
}
