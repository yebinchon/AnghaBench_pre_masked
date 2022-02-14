
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270 {struct raw3270* ascebc; } ;
struct ccw_device {int dev; } ;


 int VAR_0 ;
 struct raw3270* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct raw3270*) ;
 char* FUNC_3 (int,int) ;
 struct raw3270* FUNC_4 (int,int) ;
 int FUNC_5 (struct ccw_device*,struct raw3270*,char*) ;

__attribute__((used)) static struct raw3270 *
FUNC_6(struct ccw_device *VAR_3)
{
 struct raw3270 *VAR_4;
 char *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(sizeof(struct raw3270), VAR_2 | VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 VAR_5 = FUNC_3(256, VAR_2);
 if (!VAR_5) {
  FUNC_2(VAR_4);
  return FUNC_0(-VAR_0);
 }
 VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_2(VAR_4->ascebc);
  FUNC_2(VAR_4);
  VAR_4 = FUNC_0(VAR_6);
 }

 FUNC_1(&VAR_3->dev);
 return VAR_4;
}
