
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int mmca_vsn; } ;
struct TYPE_3__ {int year; void* month; void* serial; void* prv; void** prod_name; void* oemid; void* manfid; void* fwrev; void* hwrev; } ;
struct mmc_card {TYPE_2__ csd; int host; TYPE_1__ cid; int * raw_cid; } ;


 int VAR_0 ;
 void* FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mmc_card *VAR_1)
{
 u32 *VAR_2 = VAR_1->raw_cid;





 switch (VAR_1->csd.mmca_vsn) {
 case 0:
 case 1:
  VAR_1->cid.manfid = FUNC_0(VAR_2, 104, 24);
  VAR_1->cid.prod_name[0] = FUNC_0(VAR_2, 96, 8);
  VAR_1->cid.prod_name[1] = FUNC_0(VAR_2, 88, 8);
  VAR_1->cid.prod_name[2] = FUNC_0(VAR_2, 80, 8);
  VAR_1->cid.prod_name[3] = FUNC_0(VAR_2, 72, 8);
  VAR_1->cid.prod_name[4] = FUNC_0(VAR_2, 64, 8);
  VAR_1->cid.prod_name[5] = FUNC_0(VAR_2, 56, 8);
  VAR_1->cid.prod_name[6] = FUNC_0(VAR_2, 48, 8);
  VAR_1->cid.hwrev = FUNC_0(VAR_2, 44, 4);
  VAR_1->cid.fwrev = FUNC_0(VAR_2, 40, 4);
  VAR_1->cid.serial = FUNC_0(VAR_2, 16, 24);
  VAR_1->cid.month = FUNC_0(VAR_2, 12, 4);
  VAR_1->cid.year = FUNC_0(VAR_2, 8, 4) + 1997;
  break;

 case 2:
 case 3:
 case 4:
  VAR_1->cid.manfid = FUNC_0(VAR_2, 120, 8);
  VAR_1->cid.oemid = FUNC_0(VAR_2, 104, 16);
  VAR_1->cid.prod_name[0] = FUNC_0(VAR_2, 96, 8);
  VAR_1->cid.prod_name[1] = FUNC_0(VAR_2, 88, 8);
  VAR_1->cid.prod_name[2] = FUNC_0(VAR_2, 80, 8);
  VAR_1->cid.prod_name[3] = FUNC_0(VAR_2, 72, 8);
  VAR_1->cid.prod_name[4] = FUNC_0(VAR_2, 64, 8);
  VAR_1->cid.prod_name[5] = FUNC_0(VAR_2, 56, 8);
  VAR_1->cid.prv = FUNC_0(VAR_2, 48, 8);
  VAR_1->cid.serial = FUNC_0(VAR_2, 16, 32);
  VAR_1->cid.month = FUNC_0(VAR_2, 12, 4);
  VAR_1->cid.year = FUNC_0(VAR_2, 8, 4) + 1997;
  break;

 default:
  FUNC_2("%s: card has unknown MMCA version %d\n",
   FUNC_1(VAR_1->host), VAR_1->csd.mmca_vsn);
  return -VAR_0;
 }

 return 0;
}
