
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct camif_dev {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct camif_dev*,int ) ;
 int FUNC_1 (struct camif_dev*,int ,unsigned int) ;

void FUNC_2(struct camif_dev *VAR_2, unsigned int VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_4 &= ~VAR_0;
 VAR_4 |= (VAR_3 << 27);
 FUNC_1(VAR_2, VAR_1, VAR_4);
}
