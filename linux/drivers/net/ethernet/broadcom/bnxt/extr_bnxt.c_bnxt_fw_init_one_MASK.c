
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (struct bnxt*,int ,int) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_4(VAR_0->dev, "Firmware init phase 1 failed\n");
  return VAR_1;
 }
 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_4(VAR_0->dev, "Firmware init phase 2 failed\n");
  return VAR_1;
 }
 VAR_1 = FUNC_0(VAR_0, VAR_0->dev->dev_addr, 0);
 if (VAR_1)
  return VAR_1;
 FUNC_3(VAR_0);
 return 0;
}
