
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int year; void* month; void* serial; void* fwrev; void* hwrev; void** prod_name; void* oemid; void* manfid; } ;
struct mmc_card {TYPE_1__ cid; int * raw_cid; } ;


 void* FUNC_0 (int *,int,int) ;

void FUNC_1(struct mmc_card *VAR_0)
{
 u32 *VAR_1 = VAR_0->raw_cid;





 VAR_0->cid.manfid = FUNC_0(VAR_1, 120, 8);
 VAR_0->cid.oemid = FUNC_0(VAR_1, 104, 16);
 VAR_0->cid.prod_name[0] = FUNC_0(VAR_1, 96, 8);
 VAR_0->cid.prod_name[1] = FUNC_0(VAR_1, 88, 8);
 VAR_0->cid.prod_name[2] = FUNC_0(VAR_1, 80, 8);
 VAR_0->cid.prod_name[3] = FUNC_0(VAR_1, 72, 8);
 VAR_0->cid.prod_name[4] = FUNC_0(VAR_1, 64, 8);
 VAR_0->cid.hwrev = FUNC_0(VAR_1, 60, 4);
 VAR_0->cid.fwrev = FUNC_0(VAR_1, 56, 4);
 VAR_0->cid.serial = FUNC_0(VAR_1, 24, 32);
 VAR_0->cid.year = FUNC_0(VAR_1, 12, 8);
 VAR_0->cid.month = FUNC_0(VAR_1, 8, 4);

 VAR_0->cid.year += 2000;
}
