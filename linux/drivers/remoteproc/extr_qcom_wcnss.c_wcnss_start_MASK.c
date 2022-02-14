
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {scalar_t__ priv; } ;
struct qcom_wcnss {scalar_t__ ready_irq; int iris_lock; int vregs; int num_vregs; int iris; int dev; int start_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (struct qcom_wcnss*) ;
 int FUNC_12 (struct qcom_wcnss*) ;

__attribute__((used)) static int FUNC_13(struct rproc *VAR_3)
{
 struct qcom_wcnss *VAR_4 = (struct qcom_wcnss *)VAR_3->priv;
 int VAR_5;

 FUNC_2(&VAR_4->iris_lock);
 if (!VAR_4->iris) {
  FUNC_0(VAR_4->dev, "no iris registered\n");
  VAR_5 = -VAR_0;
  goto release_iris_lock;
 }

 VAR_5 = FUNC_9(VAR_4->num_vregs, VAR_4->vregs);
 if (VAR_5)
  goto release_iris_lock;

 VAR_5 = FUNC_5(VAR_4->iris);
 if (VAR_5)
  goto disable_regulators;

 FUNC_12(VAR_4);
 FUNC_11(VAR_4);

 VAR_5 = FUNC_6(VAR_2);
 if (VAR_5) {
  FUNC_0(VAR_4->dev,
   "failed to authenticate image and release reset\n");
  goto disable_iris;
 }

 VAR_5 = FUNC_10(&VAR_4->start_done,
       FUNC_1(5000));
 if (VAR_4->ready_irq > 0 && VAR_5 == 0) {

  FUNC_0(VAR_4->dev, "start timed out\n");
  FUNC_7(VAR_2);
  VAR_5 = -VAR_1;
  goto disable_iris;
 }

 VAR_5 = 0;

disable_iris:
 FUNC_4(VAR_4->iris);
disable_regulators:
 FUNC_8(VAR_4->num_vregs, VAR_4->vregs);
release_iris_lock:
 FUNC_3(&VAR_4->iris_lock);

 return VAR_5;
}
