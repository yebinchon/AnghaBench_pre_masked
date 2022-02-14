
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct zfcp_port {int d_id; int wwpn; int status; } ;
struct zfcp_adapter {int erp_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (char*,struct zfcp_adapter*,struct zfcp_port*,int *,int ,int ) ;

void FUNC_4(char *VAR_2,
          struct zfcp_adapter *VAR_3,
          u64 VAR_4, u32 VAR_5)
{
 unsigned long VAR_6;
 static struct zfcp_port VAR_7;

 FUNC_1(&VAR_3->erp_lock, VAR_6);




 FUNC_0(&VAR_7.status, -1);
 VAR_7.wwpn = VAR_4;
 VAR_7.d_id = VAR_5;
 FUNC_3(VAR_2, VAR_3, &VAR_7, ((void*)0),
     VAR_1,
     VAR_0);
 FUNC_2(&VAR_3->erp_lock, VAR_6);
}
