
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpbe_display {struct vpbe_device* vpbe_dev; } ;
struct vpbe_device {int v4l2_dev; int venc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct vpbe_display *VAR_3)
{
 struct vpbe_device *VAR_4 = VAR_3->vpbe_dev;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_4->venc,
          VAR_1,
          VAR_2,
          VAR_0,
          &VAR_6);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->v4l2_dev,
    "Error in getting Field ID 0\n");
  return 1;
 }
 return VAR_6;
}
