
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct sm_oob {int reserved; } ;
struct sm_ftl {int cis_block; int cis_boffset; scalar_t__ smallpagenand; TYPE_1__* trans; } ;
struct mtd_oob_ops {scalar_t__ oobretlen; scalar_t__ retlen; int * datbuf; scalar_t__ len; void* oobbuf; scalar_t__ ooblen; scalar_t__ ooboffs; int mode; } ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {struct mtd_info* mtd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,scalar_t__) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct mtd_info*,int ,struct mtd_oob_ops*) ;
 scalar_t__ FUNC_7 (int *,struct sm_oob*) ;
 int FUNC_8 (struct sm_ftl*,int,int,int) ;
 scalar_t__ FUNC_9 (struct sm_ftl*) ;
 int FUNC_10 (struct sm_oob*) ;

__attribute__((used)) static int FUNC_11(struct sm_ftl *VAR_5,
     int VAR_6, int VAR_7, int VAR_8,
     uint8_t *VAR_9, struct sm_oob *VAR_10)
{
 struct mtd_info *VAR_11 = VAR_5->trans->mtd;
 struct mtd_oob_ops VAR_12;
 struct sm_oob VAR_13;
 int VAR_14 = -VAR_0;
 int VAR_15 = 0;


 if (VAR_7 == -1) {
  FUNC_3(VAR_9, 0xFF, VAR_4);
  return 0;
 }


 if (!VAR_10)
  VAR_10 = &VAR_13;

 VAR_12.mode = VAR_5->smallpagenand ? VAR_2 : VAR_1;
 VAR_12.ooboffs = 0;
 VAR_12.ooblen = VAR_3;
 VAR_12.oobbuf = (void *)VAR_10;
 VAR_12.len = VAR_4;
 VAR_12.datbuf = VAR_9;

again:
 if (VAR_15++) {


  if (VAR_6 == 0 && VAR_7 == VAR_5->cis_block && VAR_8 ==
   VAR_5->cis_boffset)
   return VAR_14;


  if (VAR_15 == 3 || FUNC_9(VAR_5))
   return VAR_14;
 }



 VAR_14 = FUNC_6(VAR_11, FUNC_8(VAR_5, VAR_6, VAR_7, VAR_8), &VAR_12);


 if (VAR_14 != 0 && !FUNC_4(VAR_14)) {
  FUNC_1("read of block %d at zone %d, failed due to error (%d)",
   VAR_7, VAR_6, VAR_14);
  goto again;
 }


 if (VAR_10->reserved != 0xFFFFFFFF && !FUNC_2(~VAR_10->reserved))
  goto again;


 FUNC_0(VAR_12.oobretlen != VAR_3);
 FUNC_0(VAR_9 && VAR_12.retlen != VAR_4);

 if (!VAR_9)
  return 0;


 if (!FUNC_10(VAR_10)) {
  FUNC_1("read of block %d at zone %d, failed because it is marked"
   " as bad" , VAR_7, VAR_6);
  goto again;
 }


 if (FUNC_5(VAR_14) ||
  (VAR_5->smallpagenand && FUNC_7(VAR_9, VAR_10))) {

  FUNC_1("read of block %d at zone %d, failed due to ECC error",
   VAR_7, VAR_6);
  goto again;
 }

 return 0;
}
