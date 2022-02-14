
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6v5 {int mss_restart; int pdc_reset; scalar_t__ has_alt_reset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct q6v5 *VAR_0)
{
 int VAR_1;

 if (VAR_0->has_alt_reset) {
  FUNC_0(VAR_0->pdc_reset);
  VAR_1 = FUNC_2(VAR_0->mss_restart);
  FUNC_1(VAR_0->pdc_reset);
 } else {
  VAR_1 = FUNC_0(VAR_0->mss_restart);
 }

 return VAR_1;
}
