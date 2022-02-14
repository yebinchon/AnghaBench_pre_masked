
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_dbf {int dummy; } ;
struct zfcp_adapter {struct zfcp_dbf* dbf; } ;


 int FUNC_0 (struct zfcp_dbf*) ;

void FUNC_1(struct zfcp_adapter *VAR_0)
{
 struct zfcp_dbf *VAR_1 = VAR_0->dbf;

 VAR_0->dbf = ((void*)0);
 FUNC_0(VAR_1);
}
