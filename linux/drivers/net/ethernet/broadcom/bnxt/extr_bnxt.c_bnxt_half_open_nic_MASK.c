
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int dev; } ;


 int FUNC_0 (struct bnxt*,int) ;
 int FUNC_1 (struct bnxt*,int) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;

int FUNC_6(struct bnxt *VAR_0)
{
 int VAR_1 = 0;

 VAR_1 = FUNC_0(VAR_0, 0);
 if (VAR_1) {
  FUNC_5(VAR_0->dev, "bnxt_alloc_mem err: %x\n", VAR_1);
  goto half_open_err;
 }
 VAR_1 = FUNC_3(VAR_0, 0);
 if (VAR_1) {
  FUNC_5(VAR_0->dev, "bnxt_init_nic err: %x\n", VAR_1);
  goto half_open_err;
 }
 return 0;

half_open_err:
 FUNC_2(VAR_0);
 FUNC_1(VAR_0, 0);
 FUNC_4(VAR_0->dev);
 return VAR_1;
}
