
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_ops {int (* del_client ) (struct qmi_handle*,unsigned int,unsigned int) ;} ;
struct qmi_handle {struct qmi_ops ops; } ;


 int FUNC_0 (struct qmi_handle*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct qmi_handle *VAR_0,
    unsigned int VAR_1, unsigned int VAR_2)
{
 struct qmi_ops *VAR_3 = &VAR_0->ops;

 if (VAR_3->del_client)
  VAR_3->del_client(VAR_0, VAR_1, VAR_2);
}
