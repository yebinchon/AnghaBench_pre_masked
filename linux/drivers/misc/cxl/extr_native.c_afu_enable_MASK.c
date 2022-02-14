
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_afu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxl_afu*,int ,int ,int ,int ,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct cxl_afu *VAR_3)
{
 FUNC_1("AFU enable request\n");

 return FUNC_0(VAR_3, VAR_0, 0,
      VAR_1,
      VAR_2, 1);
}
