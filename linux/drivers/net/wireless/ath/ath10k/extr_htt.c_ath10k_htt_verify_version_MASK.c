
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_htt {int target_version_major; int target_version_minor; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*,int,int ) ;
 int FUNC_1 (struct ath10k*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct ath10k_htt *VAR_2)
{
 struct ath10k *VAR_3 = VAR_2->ar;

 FUNC_0(VAR_3, VAR_0, "htt target version %d.%d\n",
     VAR_2->target_version_major, VAR_2->target_version_minor);

 if (VAR_2->target_version_major != 2 &&
     VAR_2->target_version_major != 3) {
  FUNC_1(VAR_3, "unsupported htt major version %d. supported versions are 2 and 3\n",
      VAR_2->target_version_major);
  return -VAR_1;
 }

 return 0;
}
