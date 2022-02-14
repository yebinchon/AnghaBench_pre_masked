
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid ;
struct wm831x {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct wm831x*,char*) ;

int FUNC_4(struct wm831x *VAR_2)
{
 char VAR_3[VAR_0];
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2->dev, &VAR_1);
 if (VAR_4 != 0)
  FUNC_1(VAR_2->dev, "Unique ID attribute not created: %d\n",
   VAR_4);

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4 == 0)
  FUNC_0(VAR_3, sizeof(VAR_3));
 else
  FUNC_1(VAR_2->dev, "Failed to read UUID: %d\n", VAR_4);

 return VAR_4;
}
