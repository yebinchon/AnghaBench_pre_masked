
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chip; } ;
struct adapter {scalar_t__ t4_bar0; TYPE_1__ params; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct adapter*,int ) ;

int FUNC_7(struct adapter *VAR_9, int VAR_10, int VAR_11, u32 *VAR_12,
        u32 *VAR_13, u32 *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17;
 VAR_15 = FUNC_0(FUNC_6(VAR_9, VAR_1));
 if (VAR_11 == VAR_3) {
  *VAR_12 = 2 * (VAR_15 * 1024 * 1024);
 } else if (VAR_11 != VAR_5) {
  *VAR_12 = (VAR_11 * (VAR_15 * 1024 * 1024));
 } else {
  VAR_16 = FUNC_1(FUNC_6(VAR_9,
            VAR_2));
  *VAR_12 = (VAR_4 * VAR_15 + VAR_16) * 1024 * 1024;
 }
 VAR_17 = FUNC_6(VAR_9,
         FUNC_3(VAR_7,
        VAR_10));

 if (VAR_17 == 0xffffffff)
  return -VAR_0;

 *VAR_14 = 1 << (FUNC_4(VAR_17) + VAR_8);
 *VAR_13 = FUNC_2(VAR_17) << VAR_6;
 if (FUNC_5(VAR_9->params.chip))
  *VAR_13 -= VAR_9->t4_bar0;

 return 0;
}
