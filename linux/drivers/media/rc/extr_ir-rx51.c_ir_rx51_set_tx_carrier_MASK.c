
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {struct ir_rx51* priv; } ;
struct ir_rx51 {int freq; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct rc_dev *VAR_1, u32 VAR_2)
{
 struct ir_rx51 *VAR_3 = VAR_1->priv;

 if (VAR_2 > 500000 || VAR_2 < 20000)
  return -VAR_0;

 VAR_3->freq = VAR_2;

 return 0;
}
