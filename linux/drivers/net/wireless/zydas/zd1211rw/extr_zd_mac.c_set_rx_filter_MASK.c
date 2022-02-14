
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zd_mac {int chip; int lock; scalar_t__ pass_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct zd_mac *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5 = VAR_2;

 FUNC_0(&VAR_3->lock, VAR_4);
 if (VAR_3->pass_ctrl)
  VAR_5 |= VAR_1;
 FUNC_1(&VAR_3->lock, VAR_4);

 return FUNC_2(&VAR_3->chip, VAR_0, VAR_5);
}
