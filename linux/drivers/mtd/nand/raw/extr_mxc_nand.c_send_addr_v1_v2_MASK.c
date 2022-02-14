
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mxc_nand_host {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct mxc_nand_host*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mxc_nand_host *VAR_3, uint16_t VAR_4, int VAR_5)
{
 FUNC_0(VAR_3->dev, "send_addr(host, 0x%x %d)\n", VAR_4, VAR_5);

 FUNC_2(VAR_4, VAR_2);
 FUNC_2(VAR_0, VAR_1);


 FUNC_1(VAR_3, VAR_5);
}
