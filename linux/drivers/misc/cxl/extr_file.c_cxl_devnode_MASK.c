
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct device {int devt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 char* FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static char *FUNC_4(struct device *VAR_2, umode_t *VAR_3)
{
 if (FUNC_1(VAR_0) &&
     FUNC_0(VAR_2->devt)) {




  return ((void*)0);
 }
 return FUNC_3(VAR_1, "cxl/%s", FUNC_2(VAR_2));
}
