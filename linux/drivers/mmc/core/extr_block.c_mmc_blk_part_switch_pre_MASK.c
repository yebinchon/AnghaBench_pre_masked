
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmdq_en; } ;
struct mmc_card {int host; TYPE_1__ ext_csd; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_card *VAR_1,
       unsigned int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 == VAR_0) {
  if (VAR_1->ext_csd.cmdq_en) {
   VAR_3 = FUNC_0(VAR_1);
   if (VAR_3)
    return VAR_3;
  }
  FUNC_1(VAR_1->host);
 }

 return VAR_3;
}
