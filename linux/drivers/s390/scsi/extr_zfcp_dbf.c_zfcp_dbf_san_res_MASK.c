
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct zfcp_fsf_req {int req_id; struct zfcp_fsf_ct_els* data; TYPE_1__* adapter; } ;
struct zfcp_fsf_ct_els {int d_id; int resp; } ;
struct zfcp_dbf {int san; } ;
struct TYPE_2__ {struct zfcp_dbf* dbf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,struct zfcp_dbf*,char*,int ,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (char*,struct zfcp_fsf_req*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(char *VAR_2, struct zfcp_fsf_req *VAR_3)
{
 struct zfcp_dbf *VAR_4 = VAR_3->adapter->dbf;
 struct zfcp_fsf_ct_els *VAR_5 = VAR_3->data;
 u16 VAR_6;

 if (FUNC_1(!FUNC_0(VAR_4->san, VAR_0)))
  return;

 VAR_6 = (u16)FUNC_4(VAR_5->resp);
 FUNC_2(VAR_2, VAR_4, "san_res", VAR_5->resp, VAR_1,
       VAR_6, VAR_3->req_id, VAR_5->d_id,
       FUNC_3(VAR_2, VAR_3, VAR_6));
}
