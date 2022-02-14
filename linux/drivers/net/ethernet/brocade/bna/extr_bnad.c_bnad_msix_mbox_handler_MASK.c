
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnad {int bna_lock; int bna; int run_flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_2, void *VAR_3)
{
 u32 VAR_4;
 unsigned long VAR_5;
 struct bnad *VAR_6 = (struct bnad *)VAR_3;

 FUNC_3(&VAR_6->bna_lock, VAR_5);
 if (FUNC_6(FUNC_5(VAR_0, &VAR_6->run_flags))) {
  FUNC_4(&VAR_6->bna_lock, VAR_5);
  return VAR_1;
 }

 FUNC_1(&VAR_6->bna, VAR_4);

 if (FUNC_0(&VAR_6->bna, VAR_4))
  FUNC_2(&VAR_6->bna, VAR_4);

 FUNC_4(&VAR_6->bna_lock, VAR_5);

 return VAR_1;
}
