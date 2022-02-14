
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pdev; } ;
struct switchtec_ntb {int* direct_mw_to_bar; size_t nr_lut_mw; TYPE_1__ ntb; } ;
typedef size_t resource_size_t ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct switchtec_ntb *VAR_3,
      int VAR_4, phys_addr_t *VAR_5,
      resource_size_t *VAR_6)
{
 int VAR_7 = VAR_3->direct_mw_to_bar[VAR_4];
 size_t VAR_8 = 0;

 if (VAR_7 < 0)
  return -VAR_0;

 if (VAR_4 == 0) {






  VAR_8 = VAR_1 * VAR_3->nr_lut_mw;
 }

 if (VAR_5)
  *VAR_5 = FUNC_1(VAR_3->ntb.pdev, VAR_7) + VAR_8;

 if (VAR_6) {
  *VAR_6 = FUNC_0(VAR_3->ntb.pdev, VAR_7) - VAR_8;
  if (VAR_8 && *VAR_6 > VAR_8)
   *VAR_6 = VAR_8;

  if (*VAR_6 > VAR_2)
   *VAR_6 = VAR_2;
 }

 return 0;
}
