
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw5864_dev {int slock; scalar_t__ irqmask; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct tw5864_dev*) ;

__attribute__((used)) static void FUNC_3(struct tw5864_dev *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->slock, VAR_1);
 VAR_0->irqmask = 0;
 FUNC_2(VAR_0);
 FUNC_1(&VAR_0->slock, VAR_1);
}
