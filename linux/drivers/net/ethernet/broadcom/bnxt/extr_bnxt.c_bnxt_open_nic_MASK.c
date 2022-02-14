
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int dev; } ;


 int FUNC_0 (struct bnxt*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(struct bnxt *VAR_0, bool VAR_1, bool VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_0->dev, "nic open fail (rc: %x)\n", VAR_3);
  FUNC_1(VAR_0->dev);
 }
 return VAR_3;
}
