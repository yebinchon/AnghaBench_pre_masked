
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct urdev {int dummy; } ;
struct ccw_device {int dev; } ;


 struct ccw_device* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_0 ;
 struct urdev* FUNC_3 (struct ccw_device*) ;

__attribute__((used)) static struct urdev *FUNC_4(u16 VAR_1)
{
 char VAR_2[16];
 struct ccw_device *VAR_3;
 struct urdev *VAR_4;

 FUNC_2(VAR_2, "0.0.%04x", VAR_1);
 VAR_3 = FUNC_0(&VAR_0, VAR_2);
 if (!VAR_3)
  return ((void*)0);
 VAR_4 = FUNC_3(VAR_3);
 FUNC_1(&VAR_3->dev);
 return VAR_4;
}
