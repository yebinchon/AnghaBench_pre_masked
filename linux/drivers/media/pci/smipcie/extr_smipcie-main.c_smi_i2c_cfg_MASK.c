
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smi_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct smi_dev *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 VAR_2 &= ~0x18;
 VAR_2 |= 0x21;
 VAR_2 &= ~0xff00;
 VAR_2 |= 0x6400;
 FUNC_2(VAR_1, VAR_2);
 FUNC_0(20);
 VAR_2 = FUNC_1(VAR_1);
 VAR_2 &= ~0x20;
 FUNC_2(VAR_1, VAR_2);
}
