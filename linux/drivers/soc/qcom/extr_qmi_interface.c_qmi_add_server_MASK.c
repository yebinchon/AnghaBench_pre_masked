
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_service {unsigned int service; unsigned int version; unsigned int instance; int list_node; } ;
struct qmi_handle {int services; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qmi_service* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct qmi_handle*,struct qmi_service*) ;

int FUNC_3(struct qmi_handle *VAR_2, unsigned int VAR_3,
     unsigned int VAR_4, unsigned int VAR_5)
{
 struct qmi_service *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->service = VAR_3;
 VAR_6->version = VAR_4;
 VAR_6->instance = VAR_5;

 FUNC_1(&VAR_6->list_node, &VAR_2->services);

 FUNC_2(VAR_2, VAR_6);

 return 0;
}
