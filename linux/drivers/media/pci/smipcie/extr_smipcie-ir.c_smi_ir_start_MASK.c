
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_rc {struct smi_dev* dev; } ;
struct smi_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct smi_rc*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct smi_rc *VAR_6)
{
 struct smi_dev *VAR_7 = VAR_6->dev;

 FUNC_3(VAR_0,
    (((VAR_3 - 1) & 0xFFFF) << 16) |
    (VAR_2 & 0xFFFF));
 FUNC_0(20);
 FUNC_2(VAR_1, VAR_4 | VAR_5);

 FUNC_1(VAR_6);
}
