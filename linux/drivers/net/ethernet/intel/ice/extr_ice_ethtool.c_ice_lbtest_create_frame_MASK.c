
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ice_pf {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct ice_pf *VAR_3, u8 **VAR_4, u16 VAR_5)
{
 u8 *VAR_6;

 if (!VAR_3)
  return -VAR_0;

 VAR_6 = FUNC_0(&VAR_3->pdev->dev, VAR_5, VAR_2);
 if (!VAR_6)
  return -VAR_1;




 FUNC_1(VAR_6, 0xFF, VAR_5);
 VAR_6[32] = 0xDE;
 VAR_6[42] = 0xAD;
 VAR_6[44] = 0xBE;
 VAR_6[46] = 0xEF;

 *VAR_4 = VAR_6;

 return 0;
}
