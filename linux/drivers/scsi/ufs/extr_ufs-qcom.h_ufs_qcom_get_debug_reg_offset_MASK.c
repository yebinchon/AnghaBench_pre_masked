
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int major; } ;
struct ufs_qcom_host {TYPE_1__ hw_ver; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u32
FUNC_2(struct ufs_qcom_host *VAR_0, u32 VAR_1)
{
 if (VAR_0->hw_ver.major <= 0x02)
  return FUNC_0(VAR_1);

 return FUNC_1(VAR_1);
}
