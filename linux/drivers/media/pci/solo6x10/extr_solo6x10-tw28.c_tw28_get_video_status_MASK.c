
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct solo_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct solo_dev*,int,int ,int ) ;

int FUNC_1(struct solo_dev *VAR_2, u8 VAR_3)
{
 u8 VAR_4, VAR_5;


 VAR_5 = VAR_3 / 4;
 VAR_3 %= 4;

 VAR_4 = FUNC_0(VAR_2, VAR_5, VAR_0,
     VAR_1) & 0x0f;

 return VAR_4 & (1 << VAR_3) ? 1 : 0;
}
