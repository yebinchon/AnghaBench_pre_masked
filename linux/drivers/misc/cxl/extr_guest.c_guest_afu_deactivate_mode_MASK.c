
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_afu {int modes_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxl_afu*) ;

__attribute__((used)) static int FUNC_1(struct cxl_afu *VAR_2, int VAR_3)
{
 if (!VAR_3)
  return 0;
 if (!(VAR_3 & VAR_2->modes_supported))
  return -VAR_1;

 if (VAR_3 == VAR_0)
  return FUNC_0(VAR_2);
 return 0;
}
