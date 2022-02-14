
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bman_portal {int irq_sources; int p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

int FUNC_3(struct bman_portal *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(VAR_4);
 VAR_2->irq_sources |= VAR_3 & VAR_0;
 FUNC_0(&VAR_2->p, VAR_1, VAR_2->irq_sources);
 FUNC_1(VAR_4);
 return 0;
}
