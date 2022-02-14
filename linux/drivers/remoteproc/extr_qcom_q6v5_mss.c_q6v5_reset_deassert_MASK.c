
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6v5 {int mss_restart; int pdc_reset; scalar_t__ rmb_base; scalar_t__ has_alt_reset; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct q6v5 *VAR_1)
{
 int VAR_2;

 if (VAR_1->has_alt_reset) {
  FUNC_0(VAR_1->pdc_reset);
  FUNC_3(1, VAR_1->rmb_base + VAR_0);
  VAR_2 = FUNC_2(VAR_1->mss_restart);
  FUNC_3(0, VAR_1->rmb_base + VAR_0);
  FUNC_1(VAR_1->pdc_reset);
 } else {
  VAR_2 = FUNC_1(VAR_1->mss_restart);
 }

 return VAR_2;
}
