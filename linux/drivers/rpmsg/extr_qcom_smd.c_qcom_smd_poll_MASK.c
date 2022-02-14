
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_endpoint {int dummy; } ;
struct qcom_smd_endpoint {struct qcom_smd_channel* qsch; } ;
struct qcom_smd_channel {int fblockread_event; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (struct qcom_smd_channel*) ;
 struct qcom_smd_endpoint* FUNC_2 (struct rpmsg_endpoint*) ;

__attribute__((used)) static __poll_t FUNC_3(struct rpmsg_endpoint *VAR_2,
      struct file *VAR_3, poll_table *VAR_4)
{
 struct qcom_smd_endpoint *VAR_5 = FUNC_2(VAR_2);
 struct qcom_smd_channel *VAR_6 = VAR_5->qsch;
 __poll_t VAR_7 = 0;

 FUNC_0(VAR_3, &VAR_6->fblockread_event, VAR_4);

 if (FUNC_1(VAR_6) > 20)
  VAR_7 |= VAR_0 | VAR_1;

 return VAR_7;
}
