
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smem_header {int * version; } ;
struct qcom_smem {TYPE_1__* regions; } ;
typedef int __le32 ;
struct TYPE_2__ {struct smem_header* virt_base; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct qcom_smem *VAR_1)
{
 struct smem_header *VAR_2;
 __le32 *VAR_3;

 VAR_2 = VAR_1->regions[0].virt_base;
 VAR_3 = VAR_2->version;

 return FUNC_0(VAR_3[VAR_0]);
}
