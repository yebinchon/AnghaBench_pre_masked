
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int * VAR_0 ;
 struct platform_device* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct platform_device*,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1 != ((void*)0));

 VAR_4 = FUNC_3(&VAR_2);
 if (VAR_4) {
  FUNC_1(&VAR_3->dev, "can't register omapdss device\n");
  return VAR_4;
 }


 VAR_1 = VAR_3;
 if (VAR_0 != ((void*)0))
  FUNC_2(VAR_1, VAR_0);
 return 0;
}
