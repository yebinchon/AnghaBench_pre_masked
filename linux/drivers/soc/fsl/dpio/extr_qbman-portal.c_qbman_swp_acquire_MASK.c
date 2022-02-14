
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct qbman_swp {int dummy; } ;
struct qbman_acquire_rslt {int verb; scalar_t__ rslt; unsigned int num; int * buf; } ;
struct qbman_acquire_desc {unsigned int num; int bpid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,...) ;
 struct qbman_acquire_rslt* FUNC_4 (struct qbman_swp*,struct qbman_acquire_desc*,int) ;
 struct qbman_acquire_desc* FUNC_5 (struct qbman_swp*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct qbman_swp *VAR_5, u16 VAR_6, u64 *VAR_7,
        unsigned int VAR_8)
{
 struct qbman_acquire_desc *VAR_9;
 struct qbman_acquire_rslt *VAR_10;
 int VAR_11;

 if (!VAR_8 || (VAR_8 > 7))
  return -VAR_1;


 VAR_9 = FUNC_5(VAR_5);

 if (!VAR_9)
  return -VAR_0;


 VAR_9->bpid = FUNC_1(VAR_6);
 VAR_9->num = VAR_8;


 VAR_10 = FUNC_4(VAR_5, VAR_9, VAR_3);
 if (FUNC_6(!VAR_10)) {
  FUNC_3("qbman: acquire from BPID %d failed, no response\n",
         VAR_6);
  return -VAR_2;
 }


 FUNC_0((VAR_10->verb & 0x7f) != VAR_3);


 if (FUNC_6(VAR_10->rslt != VAR_4)) {
  FUNC_3("qbman: acquire from BPID 0x%x failed, code=0x%02x\n",
         VAR_6, VAR_10->rslt);
  return -VAR_2;
 }

 FUNC_0(VAR_10->num > VAR_8);


 for (VAR_11 = 0; VAR_11 < VAR_10->num; VAR_11++)
  VAR_7[VAR_11] = FUNC_2(VAR_10->buf[VAR_11]);

 return (int)VAR_10->num;
}
