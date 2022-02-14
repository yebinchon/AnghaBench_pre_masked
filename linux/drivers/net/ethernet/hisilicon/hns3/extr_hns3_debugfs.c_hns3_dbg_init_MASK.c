
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int hnae3_dbgfs; int pdev; } ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*,int,int ,struct hnae3_handle*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (int ) ;

void FUNC_3(struct hnae3_handle *VAR_2)
{
 const char *VAR_3 = FUNC_2(VAR_2->pdev);

 VAR_2->hnae3_dbgfs = FUNC_0(VAR_3, VAR_1);

 FUNC_1("cmd", 0600, VAR_2->hnae3_dbgfs, VAR_2,
       &VAR_0);
}
