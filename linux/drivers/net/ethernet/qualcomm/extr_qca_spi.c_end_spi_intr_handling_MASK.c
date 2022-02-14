
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qcaspi {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct qcaspi*,int ,int,int ) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2(struct qcaspi *VAR_7, u16 VAR_8)
{
 u16 VAR_9 = (VAR_0 |
      VAR_1 |
      VAR_2 |
      VAR_3);

 FUNC_1(VAR_7, VAR_4, VAR_8, 0);
 FUNC_1(VAR_7, VAR_5, VAR_9, VAR_6);
 FUNC_0(VAR_7->net_dev, "acking int: 0x%04x\n", VAR_8);
}
