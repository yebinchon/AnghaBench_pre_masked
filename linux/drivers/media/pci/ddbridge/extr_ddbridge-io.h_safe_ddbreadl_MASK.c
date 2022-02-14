
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ddb {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct ddb*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static inline u32 FUNC_2(struct ddb *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0, VAR_1);


 if (VAR_2 == ~0) {
  FUNC_1(&VAR_0->pdev->dev, "ddbreadl failure, adr=%08x\n", VAR_1);
  return 0;
 }

 return VAR_2;
}
