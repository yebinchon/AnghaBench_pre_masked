
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct qbman_swp {int dummy; } ;
struct dpaa2_io_notification_ctx {int (* cb ) (struct dpaa2_io_notification_ctx*) ;} ;
struct dpaa2_io {struct qbman_swp* swp; } ;
struct dpaa2_dq {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct dpaa2_dq const*) ;
 scalar_t__ FUNC_2 (struct dpaa2_dq const*) ;
 int FUNC_3 (struct qbman_swp*,struct dpaa2_dq const*) ;
 struct dpaa2_dq* FUNC_4 (struct qbman_swp*) ;
 int FUNC_5 (struct qbman_swp*,int ) ;
 int FUNC_6 (struct qbman_swp*) ;
 int FUNC_7 (struct qbman_swp*,int ) ;
 int FUNC_8 (struct dpaa2_io_notification_ctx*) ;

irqreturn_t FUNC_9(struct dpaa2_io *VAR_3)
{
 const struct dpaa2_dq *VAR_4;
 int VAR_5 = 0;
 struct qbman_swp *VAR_6;
 u32 VAR_7;

 VAR_6 = VAR_3->swp;
 VAR_7 = FUNC_6(VAR_6);
 if (!VAR_7)
  return VAR_2;

 VAR_4 = FUNC_4(VAR_6);
 while (VAR_4) {
  if (FUNC_2(VAR_4)) {
   struct dpaa2_io_notification_ctx *VAR_8;
   u64 VAR_9;

   VAR_9 = FUNC_1(VAR_4);
   VAR_8 = (void *)(uintptr_t)VAR_9;
   VAR_8->cb(VAR_8);
  } else {
   FUNC_0("fsl-mc-dpio: Unrecognised/ignored DQRR entry\n");
  }
  FUNC_3(VAR_6, VAR_4);
  ++VAR_5;
  if (VAR_5 > VAR_0)
   goto done;
  VAR_4 = FUNC_4(VAR_6);
 }
done:
 FUNC_5(VAR_6, VAR_7);
 FUNC_7(VAR_6, 0);
 return VAR_1;
}
