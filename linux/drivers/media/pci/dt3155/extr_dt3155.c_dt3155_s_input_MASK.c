
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct dt3155_priv {unsigned int input; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 struct dt3155_priv* FUNC_0 (struct file*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6, unsigned int VAR_7)
{
 struct dt3155_priv *VAR_8 = FUNC_0(VAR_5);

 if (VAR_7 > 3)
  return -VAR_3;
 VAR_8->input = VAR_7;
 FUNC_1(VAR_8->regs, VAR_0, VAR_2);
 FUNC_1(VAR_8->regs, VAR_1, (VAR_7 << 6) | (VAR_7 << 4) | VAR_4);
 return 0;
}
