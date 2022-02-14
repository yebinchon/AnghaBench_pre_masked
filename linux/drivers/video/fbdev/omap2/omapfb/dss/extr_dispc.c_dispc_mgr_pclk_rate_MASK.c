
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {unsigned long tv_pclk_rate; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int ) ;
 TYPE_1__ VAR_0 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static unsigned long FUNC_5(enum omap_channel VAR_1)
{
 unsigned long VAR_2;

 if (FUNC_4(VAR_1)) {
  int VAR_3;
  u32 VAR_4;

  VAR_4 = FUNC_3(FUNC_0(VAR_1));

  VAR_3 = FUNC_1(VAR_4, 7, 0);

  VAR_2 = FUNC_2(VAR_1);

  return VAR_2 / VAR_3;
 } else {
  return VAR_0.tv_pclk_rate;
 }
}
