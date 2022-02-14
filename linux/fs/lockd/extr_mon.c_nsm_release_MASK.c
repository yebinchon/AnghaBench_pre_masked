
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsm_handle {int sm_addrbuf; int sm_name; int sm_link; int sm_count; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct nsm_handle*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct nsm_handle *VAR_1)
{
 if (FUNC_3(&VAR_1->sm_count, &VAR_0)) {
  FUNC_2(&VAR_1->sm_link);
  FUNC_4(&VAR_0);
  FUNC_0("lockd: destroyed nsm_handle for %s (%s)\n",
    VAR_1->sm_name, VAR_1->sm_addrbuf);
  FUNC_1(VAR_1);
 }
}
