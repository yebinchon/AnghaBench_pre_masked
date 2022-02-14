
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qbman_swp {int dummy; } ;
struct qbman_alt_fq_state_rslt {int verb; scalar_t__ rslt; } ;
struct qbman_alt_fq_state_desc {int fqid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,...) ;
 struct qbman_alt_fq_state_rslt* FUNC_3 (struct qbman_swp*,struct qbman_alt_fq_state_desc*,int) ;
 struct qbman_alt_fq_state_desc* FUNC_4 (struct qbman_swp*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct qbman_swp *VAR_5, u32 VAR_6,
      u8 VAR_7)
{
 struct qbman_alt_fq_state_desc *VAR_8;
 struct qbman_alt_fq_state_rslt *VAR_9;


 VAR_8 = FUNC_4(VAR_5);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->fqid = FUNC_1(VAR_6 & VAR_0);


 VAR_9 = FUNC_3(VAR_5, VAR_8, VAR_7);
 if (FUNC_5(!VAR_9)) {
  FUNC_2("qbman: mgmt cmd failed, no response (verb=0x%x)\n",
         VAR_7);
  return -VAR_2;
 }


 FUNC_0((VAR_9->verb & VAR_4) != VAR_7);


 if (FUNC_5(VAR_9->rslt != VAR_3)) {
  FUNC_2("qbman: ALT FQID %d failed: verb = 0x%08x code = 0x%02x\n",
         VAR_6, VAR_9->verb, VAR_9->rslt);
  return -VAR_2;
 }

 return 0;
}
