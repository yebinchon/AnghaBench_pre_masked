
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_ops {int (* bye ) (struct qmi_handle*,unsigned int) ;} ;
struct qmi_handle {struct qmi_ops ops; } ;


 int FUNC_0 (struct qmi_handle*,unsigned int,int) ;
 int FUNC_1 (struct qmi_handle*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct qmi_handle *VAR_0,
    unsigned int VAR_1)
{
 struct qmi_ops *VAR_2 = &VAR_0->ops;

 FUNC_0(VAR_0, VAR_1, -1);

 if (VAR_2->bye)
  VAR_2->bye(VAR_0, VAR_1);
}
