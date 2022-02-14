
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qman_fq {int fqid; } ;
struct qm_mcr_queryfq_np {int state; } ;
struct qm_fqd {scalar_t__ cgid; int fq_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__,int ) ;
 int FUNC_3 (struct qman_fq*,struct qm_fqd*) ;
 int FUNC_4 (struct qman_fq*,struct qm_mcr_queryfq_np*) ;

__attribute__((used)) static int FUNC_5(u32 VAR_6)
{




 struct qman_fq VAR_7 = {
  .fqid = VAR_3
 };
 int VAR_8;

 do {
  struct qm_mcr_queryfq_np VAR_9;

  VAR_8 = FUNC_4(&VAR_7, &VAR_9);
  if (VAR_8 == -VAR_1)

   return 0;
  else if (FUNC_0(VAR_8))
   return VAR_8;

  if ((VAR_9.state & VAR_4) != VAR_5) {
   struct qm_fqd VAR_10;

   VAR_8 = FUNC_3(&VAR_7, &VAR_10);
   if (FUNC_0(VAR_8))
    return VAR_8;
   if (FUNC_1(VAR_10.fq_ctrl) & VAR_2 &&
       VAR_10.cgid == VAR_6) {
    FUNC_2("CRGID 0x%x is being used by FQID 0x%x, CGR will be leaked\n",
           VAR_6, VAR_7.fqid);
    return -VAR_0;
   }
  }

  VAR_7.fqid++;
 } while (1);
}
