
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_dbf_hba {int id; int tag; } ;
struct zfcp_dbf {int hba_lock; int hba; struct zfcp_dbf_hba hba_buf; } ;
struct zfcp_adapter {struct zfcp_dbf* dbf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const,struct zfcp_dbf_hba*,int) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct zfcp_dbf_hba*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(char *VAR_2, struct zfcp_adapter *VAR_3)
{
 struct zfcp_dbf *VAR_4 = VAR_3->dbf;
 struct zfcp_dbf_hba *VAR_5 = &VAR_4->hba_buf;
 static int const VAR_6 = 1;
 unsigned long VAR_7;

 if (FUNC_6(!FUNC_1(VAR_4->hba, VAR_6)))
  return;

 FUNC_4(&VAR_4->hba_lock, VAR_7);
 FUNC_3(VAR_5, 0, sizeof(*VAR_5));

 FUNC_2(VAR_5->tag, VAR_2, VAR_1);
 VAR_5->id = VAR_0;

 FUNC_0(VAR_4->hba, VAR_6, VAR_5, sizeof(*VAR_5));
 FUNC_5(&VAR_4->hba_lock, VAR_7);
}
