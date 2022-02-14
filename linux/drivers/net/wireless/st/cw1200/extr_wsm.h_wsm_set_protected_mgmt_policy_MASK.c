
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct wsm_protected_mgmt_policy {scalar_t__ encryptionForAuthFrame; scalar_t__ unprotectedMgmtFramesAllowed; scalar_t__ protectedMgmtEnable; } ;
struct cw1200_common {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cw1200_common*,int ,int *,int) ;

__attribute__((used)) static inline int FUNC_3(struct cw1200_common *VAR_1,
  struct wsm_protected_mgmt_policy *VAR_2)
{
 __le32 VAR_3 = 0;
 int VAR_4;
 if (VAR_2->protectedMgmtEnable)
  VAR_3 |= FUNC_1(FUNC_0(0));
 if (VAR_2->unprotectedMgmtFramesAllowed)
  VAR_3 |= FUNC_1(FUNC_0(1));
 if (VAR_2->encryptionForAuthFrame)
  VAR_3 |= FUNC_1(FUNC_0(2));
 VAR_4 = FUNC_2(VAR_1, VAR_0,
   &VAR_3, sizeof(VAR_3));
 return VAR_4;
}
