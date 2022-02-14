
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusbhc {int mmcie_mutex; int * mmcie; int mmcies_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct wusbhc *VAR_2)
{
 u8 VAR_3 = VAR_2->mmcies_max;
 VAR_2->mmcie = FUNC_0(VAR_3, sizeof(VAR_2->mmcie[0]), VAR_1);
 if (VAR_2->mmcie == ((void*)0))
  return -VAR_0;
 FUNC_1(&VAR_2->mmcie_mutex);
 return 0;
}
