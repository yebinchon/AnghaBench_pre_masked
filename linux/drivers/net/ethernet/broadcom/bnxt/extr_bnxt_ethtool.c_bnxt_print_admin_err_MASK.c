
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int dev; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_0)
{
 FUNC_0(VAR_0->dev, "PF does not have admin privileges to flash or reset the device\n");
}
