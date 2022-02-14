
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct smem_ptable {int version; int magic; } ;
struct qcom_smem {int dev; TYPE_1__* regions; } ;
struct TYPE_2__ {int size; int virt_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smem_ptable* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

__attribute__((used)) static struct smem_ptable *FUNC_4(struct qcom_smem *VAR_4)
{
 struct smem_ptable *VAR_5;
 u32 VAR_6;

 VAR_5 = VAR_4->regions[0].virt_base + VAR_4->regions[0].size - VAR_3;
 if (FUNC_3(VAR_5->magic, VAR_2, sizeof(VAR_5->magic)))
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_2(VAR_5->version);
 if (VAR_6 != 1) {
  FUNC_1(VAR_4->dev,
   "Unsupported partition header version %d\n", VAR_6);
  return FUNC_0(-VAR_0);
 }
 return VAR_5;
}
