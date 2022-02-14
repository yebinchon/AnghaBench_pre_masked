
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct sm_oob {int dummy; } ;
struct sm_ftl {int cis_block; scalar_t__ smallpagenand; scalar_t__ unstable; int readonly; TYPE_1__* trans; } ;
struct mtd_oob_ops {scalar_t__ oobretlen; scalar_t__ retlen; void* oobbuf; scalar_t__ ooblen; scalar_t__ ooboffs; int * datbuf; scalar_t__ len; int mode; } ;
struct mtd_info {int dummy; } ;
struct TYPE_2__ {struct mtd_info* mtd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct mtd_info*,int ,struct mtd_oob_ops*) ;
 int FUNC_4 (struct sm_ftl*,int,int,int) ;
 int FUNC_5 (struct sm_ftl*) ;

__attribute__((used)) static int FUNC_6(struct sm_ftl *VAR_5,
      int VAR_6, int VAR_7, int VAR_8,
      uint8_t *VAR_9, struct sm_oob *VAR_10)
{
 struct mtd_oob_ops VAR_11;
 struct mtd_info *VAR_12 = VAR_5->trans->mtd;
 int VAR_13;

 FUNC_0(VAR_5->readonly);

 if (VAR_6 == 0 && (VAR_7 == VAR_5->cis_block || VAR_7 == 0)) {
  FUNC_2("attempted to write the CIS!");
  return -VAR_0;
 }

 if (VAR_5->unstable)
  return -VAR_0;

 VAR_11.mode = VAR_5->smallpagenand ? VAR_2 : VAR_1;
 VAR_11.len = VAR_4;
 VAR_11.datbuf = VAR_9;
 VAR_11.ooboffs = 0;
 VAR_11.ooblen = VAR_3;
 VAR_11.oobbuf = (void *)VAR_10;

 VAR_13 = FUNC_3(VAR_12, FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8), &VAR_11);



 if (VAR_13) {
  FUNC_2("write to block %d at zone %d, failed with error %d",
   VAR_7, VAR_6, VAR_13);

  FUNC_5(VAR_5);
  return VAR_13;
 }


 FUNC_1(VAR_11.oobretlen != VAR_3);
 FUNC_1(VAR_9 && VAR_11.retlen != VAR_4);

 return 0;
}
