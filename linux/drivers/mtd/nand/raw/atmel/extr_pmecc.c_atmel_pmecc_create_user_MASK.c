
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int strength; int bytes; int nsectors; int sectorsize; scalar_t__ ooboffset; } ;
struct atmel_pmecc_user_req {TYPE_3__ ecc; scalar_t__ oobsize; } ;
struct TYPE_5__ {int cfg; scalar_t__ eaddr; scalar_t__ saddr; scalar_t__ sarea; } ;
struct atmel_pmecc_user {int eccbytes; TYPE_2__ cache; struct atmel_pmecc_gf_tables const* gf_tables; int * dmu; int * delta; int * mu; struct atmel_pmecc_user* smu; struct atmel_pmecc_user* lmu; struct atmel_pmecc_user* si; struct atmel_pmecc_user* partial_syn; struct atmel_pmecc* pmecc; } ;
struct atmel_pmecc_gf_tables {int dummy; } ;
struct atmel_pmecc {TYPE_1__* caps; } ;
typedef int s32 ;
typedef struct atmel_pmecc_user s16 ;
struct TYPE_4__ {int nstrengths; int* strengths; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 struct atmel_pmecc_user* FUNC_1 (struct atmel_pmecc_gf_tables const*) ;
 struct atmel_pmecc_user* FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct atmel_pmecc_gf_tables const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct atmel_pmecc_user*,int) ;
 struct atmel_pmecc_gf_tables* FUNC_7 (struct atmel_pmecc_user_req*) ;
 int FUNC_8 (struct atmel_pmecc*,struct atmel_pmecc_user_req*) ;
 int FUNC_9 (struct atmel_pmecc_user*) ;
 struct atmel_pmecc_user* FUNC_10 (int,int ) ;

struct atmel_pmecc_user *
FUNC_11(struct atmel_pmecc *VAR_3,
   struct atmel_pmecc_user_req *VAR_4)
{
 struct atmel_pmecc_user *VAR_5;
 const struct atmel_pmecc_gf_tables *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_9 = FUNC_8(VAR_3, VAR_4);
 if (VAR_9)
  return FUNC_2(VAR_9);

 VAR_8 = sizeof(*VAR_5);
 VAR_8 = FUNC_0(VAR_8, sizeof(u16));

 VAR_8 += ((2 * VAR_4->ecc.strength) + 1) * sizeof(u16) *
  (2 + VAR_4->ecc.strength + 2);

 VAR_8 += (VAR_4->ecc.strength + 1) * sizeof(u16);

 VAR_8 = FUNC_0(VAR_8, sizeof(s32));
 VAR_8 += (VAR_4->ecc.strength + 1) * sizeof(s32) * 3;

 VAR_5 = FUNC_10(VAR_8, VAR_1);
 if (!VAR_5)
  return FUNC_2(-VAR_0);

 VAR_5->pmecc = VAR_3;

 VAR_5->partial_syn = (s16 *)FUNC_6(VAR_5 + 1, sizeof(u16));
 VAR_5->si = VAR_5->partial_syn + ((2 * VAR_4->ecc.strength) + 1);
 VAR_5->lmu = VAR_5->si + ((2 * VAR_4->ecc.strength) + 1);
 VAR_5->smu = VAR_5->lmu + (VAR_4->ecc.strength + 1);
 VAR_5->mu = (s32 *)FUNC_6(VAR_5->smu +
        (((2 * VAR_4->ecc.strength) + 1) *
         (VAR_4->ecc.strength + 2)),
        sizeof(s32));
 VAR_5->dmu = VAR_5->mu + VAR_4->ecc.strength + 1;
 VAR_5->delta = VAR_5->dmu + VAR_4->ecc.strength + 1;

 VAR_6 = FUNC_7(VAR_4);
 if (FUNC_3(VAR_6)) {
  FUNC_9(VAR_5);
  return FUNC_1(VAR_6);
 }

 VAR_5->gf_tables = VAR_6;

 VAR_5->eccbytes = VAR_4->ecc.bytes / VAR_4->ecc.nsectors;

 for (VAR_7 = 0; VAR_7 < VAR_3->caps->nstrengths; VAR_7++) {
  if (VAR_3->caps->strengths[VAR_7] == VAR_4->ecc.strength)
   break;
 }

 VAR_5->cache.cfg = FUNC_4(VAR_7) |
     FUNC_5(VAR_4->ecc.nsectors);

 if (VAR_4->ecc.sectorsize == 1024)
  VAR_5->cache.cfg |= VAR_2;

 VAR_5->cache.sarea = VAR_4->oobsize - 1;
 VAR_5->cache.saddr = VAR_4->ecc.ooboffset;
 VAR_5->cache.eaddr = VAR_4->ecc.ooboffset + VAR_4->ecc.bytes - 1;

 return VAR_5;
}
