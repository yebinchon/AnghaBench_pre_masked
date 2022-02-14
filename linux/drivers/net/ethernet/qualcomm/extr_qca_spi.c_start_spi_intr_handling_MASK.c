
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qcaspi {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct qcaspi*,int ,scalar_t__*) ;
 int FUNC_2 (struct qcaspi*,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct qcaspi *VAR_3, u16 *VAR_4)
{
 *VAR_4 = 0;

 FUNC_2(VAR_3, VAR_1, 0, VAR_2);
 FUNC_1(VAR_3, VAR_0, VAR_4);
 FUNC_0(VAR_3->net_dev, "interrupts: 0x%04x\n", *VAR_4);
}
