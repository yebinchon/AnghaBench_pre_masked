
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_referral_count {scalar_t__ referral_count; int list; } ;


 int FUNC_0 (struct nfs_referral_count*) ;
 int FUNC_1 (int *) ;
 struct nfs_referral_count* FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct nfs_referral_count *VAR_1;

 FUNC_3(&VAR_0);
 VAR_1 = FUNC_2();
 VAR_1->referral_count--;
 if (VAR_1->referral_count == 0)
  FUNC_1(&VAR_1->list);
 else
  VAR_1 = ((void*)0);
 FUNC_4(&VAR_0);
 FUNC_0(VAR_1);
}
