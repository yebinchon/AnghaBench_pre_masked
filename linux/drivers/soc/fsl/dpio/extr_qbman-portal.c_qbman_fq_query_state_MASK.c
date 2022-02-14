
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qbman_swp {int dummy; } ;
struct qbman_fq_query_np_rslt {int verb; int rslt; } ;
struct qbman_fq_query_desc {int fqid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,...) ;
 void* FUNC_3 (struct qbman_swp*,struct qbman_fq_query_desc*,int) ;
 scalar_t__ FUNC_4 (struct qbman_swp*) ;

int FUNC_5(struct qbman_swp *VAR_5, u32 VAR_6,
    struct qbman_fq_query_np_rslt *VAR_7)
{
 struct qbman_fq_query_desc *VAR_8;
 void *VAR_9;

 VAR_8 = (struct qbman_fq_query_desc *)FUNC_4(VAR_5);
 if (!VAR_8)
  return -VAR_0;


 VAR_8->fqid = FUNC_1(VAR_6 & 0x00FFFFFF);
 VAR_9 = FUNC_3(VAR_5, VAR_8, VAR_2);
 if (!VAR_9) {
  FUNC_2("qbman: Query FQID %d NP fields failed, no response\n",
         VAR_6);
  return -VAR_1;
 }
 *VAR_7 = *(struct qbman_fq_query_np_rslt *)VAR_9;

 FUNC_0((VAR_7->verb & VAR_4) != VAR_2);


 if (VAR_7->rslt != VAR_3) {
  FUNC_2("Query NP fields of FQID 0x%x failed, code=0x%02x\n",
         VAR_8->fqid, VAR_7->rslt);
  return -VAR_1;
 }

 return 0;
}
