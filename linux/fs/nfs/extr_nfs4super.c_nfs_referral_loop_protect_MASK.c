
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_referral_count {int referral_count; int list; int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfs_referral_count*) ;
 struct nfs_referral_count* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 struct nfs_referral_count* FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct nfs_referral_count *VAR_7, *VAR_8;
 int VAR_9 = -VAR_1;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  goto out;
 VAR_8->task = VAR_4;
 VAR_8->referral_count = 1;

 VAR_9 = 0;
 FUNC_4(&VAR_6);
 VAR_7 = FUNC_3();
 if (VAR_7 != ((void*)0)) {
  if (VAR_7->referral_count >= VAR_3)
   VAR_9 = -VAR_0;
  else
   VAR_7->referral_count++;
 } else {
  FUNC_2(&VAR_8->list, &VAR_5);
  VAR_8 = ((void*)0);
 }
 FUNC_5(&VAR_6);
 FUNC_0(VAR_8);
out:
 return VAR_9;
}
