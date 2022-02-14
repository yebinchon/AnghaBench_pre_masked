
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {void* raw_exception_status; void* raw_bkops_status; } ;
struct mmc_card {TYPE_1__ ext_csd; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (struct mmc_card*,void***) ;

__attribute__((used)) static int FUNC_2(struct mmc_card *VAR_2)
{
 int VAR_3;
 u8 *VAR_4;

 VAR_3 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_2->ext_csd.raw_bkops_status = VAR_4[VAR_0];
 VAR_2->ext_csd.raw_exception_status = VAR_4[VAR_1];
 FUNC_0(VAR_4);
 return 0;
}
