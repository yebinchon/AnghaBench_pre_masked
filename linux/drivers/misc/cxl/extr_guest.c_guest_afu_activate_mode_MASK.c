
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_afu {int modes_supported; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxl_afu*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct cxl_afu *VAR_3, int VAR_4)
{
 if (!VAR_4)
  return 0;
 if (!(VAR_4 & VAR_3->modes_supported))
  return -VAR_2;

 if (VAR_4 == VAR_1)
  return FUNC_0(VAR_3);

 if (VAR_4 == VAR_0)
  FUNC_1(&VAR_3->dev, "Dedicated mode not supported\n");

 return -VAR_2;
}
