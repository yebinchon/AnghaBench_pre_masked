
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_fsf_ct_els {int handler; } ;
struct zfcp_fc_wka_port {int dummy; } ;
struct zfcp_adapter {int dummy; } ;
struct bsg_job {int timeout; struct zfcp_fsf_ct_els* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct zfcp_fc_wka_port* FUNC_0 (struct bsg_job*) ;
 int FUNC_1 (struct zfcp_fc_wka_port*) ;
 int FUNC_2 (struct zfcp_fc_wka_port*) ;
 int FUNC_3 (struct zfcp_fc_wka_port*,struct zfcp_fsf_ct_els*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct bsg_job *VAR_3,
          struct zfcp_adapter *VAR_4)
{
 int VAR_5;
 struct zfcp_fsf_ct_els *VAR_6 = VAR_3->dd_data;
 struct zfcp_fc_wka_port *VAR_7;

 VAR_7 = FUNC_0(VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_7);
 if (VAR_5)
  return VAR_5;

 VAR_6->handler = VAR_2;
 VAR_5 = FUNC_3(VAR_7, VAR_6, ((void*)0), VAR_3->timeout / VAR_1);
 if (VAR_5)
  FUNC_2(VAR_7);

 return VAR_5;
}
