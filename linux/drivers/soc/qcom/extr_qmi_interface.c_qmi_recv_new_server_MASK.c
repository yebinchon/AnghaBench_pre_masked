
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_service {unsigned int service; unsigned int version; unsigned int instance; unsigned int node; unsigned int port; int list_node; } ;
struct qmi_ops {int (* new_server ) (struct qmi_handle*,struct qmi_service*) ;} ;
struct qmi_handle {int lookup_results; struct qmi_ops ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct qmi_service*) ;
 struct qmi_service* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct qmi_handle*,struct qmi_service*) ;

__attribute__((used)) static void FUNC_4(struct qmi_handle *VAR_1,
    unsigned int VAR_2, unsigned int VAR_3,
    unsigned int VAR_4, unsigned int VAR_5)
{
 struct qmi_ops *VAR_6 = &VAR_1->ops;
 struct qmi_service *VAR_7;
 int VAR_8;

 if (!VAR_6->new_server)
  return;


 if (!VAR_4 && !VAR_5)
  return;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return;

 VAR_7->service = VAR_2;
 VAR_7->version = VAR_3 & 0xff;
 VAR_7->instance = VAR_3 >> 8;
 VAR_7->node = VAR_4;
 VAR_7->port = VAR_5;

 VAR_8 = VAR_6->new_server(VAR_1, VAR_7);
 if (VAR_8 < 0)
  FUNC_0(VAR_7);
 else
  FUNC_2(&VAR_7->list_node, &VAR_1->lookup_results);
}
