
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct d7s {int regs; scalar_t__ flipped; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct d7s* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_4, struct file *VAR_5)
{




 if (FUNC_0(&VAR_2) && !VAR_3) {
  struct d7s *VAR_6 = VAR_1;
  u8 VAR_7 = 0;

  VAR_7 = FUNC_1(VAR_6->regs);
  if (VAR_6->flipped)
   VAR_7 |= VAR_0;
  else
   VAR_7 &= ~VAR_0;
  FUNC_2(VAR_7, VAR_6->regs);
 }

 return 0;
}
