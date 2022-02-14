
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qman_fq {int fqid; } ;
struct qm_mcr_queryfq_np {int state; } ;
struct qm_fqd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct qm_fqd*) ;
 int FUNC_2 (struct qman_fq*,struct qm_fqd*) ;
 int FUNC_3 (struct qman_fq*,struct qm_mcr_queryfq_np*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(u32 VAR_4)
{






 struct qman_fq VAR_5 = {
  .fqid = VAR_1
 };
 int VAR_6;

 do {
  struct qm_mcr_queryfq_np VAR_7;

  VAR_6 = FUNC_3(&VAR_5, &VAR_7);
  if (VAR_6 == -VAR_0)

   return 0;
  else if (FUNC_0(VAR_6))
   return VAR_6;

  if ((VAR_7.state & VAR_2) != VAR_3) {
   struct qm_fqd VAR_8;

   VAR_6 = FUNC_2(&VAR_5, &VAR_8);
   if (FUNC_0(VAR_6))
    return VAR_6;
   if (FUNC_1(&VAR_8) == VAR_4) {

    VAR_6 = FUNC_4(VAR_5.fqid);
    if (VAR_6)




     return VAR_6;
   }
  }

  VAR_5.fqid++;
 } while (1);
}
