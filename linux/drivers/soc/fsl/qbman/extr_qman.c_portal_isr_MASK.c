
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qman_portal {int irq_sources; int p; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qman_portal*,int ) ;
 int FUNC_1 (struct qman_portal*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct qman_portal *VAR_9 = VAR_8;
 u32 VAR_10 = FUNC_2(&VAR_9->p, VAR_6) & VAR_9->irq_sources;
 u32 VAR_11 = 0;

 if (FUNC_4(!VAR_10))
  return VAR_1;


 if (VAR_10 & VAR_4) {
  FUNC_0(VAR_9, VAR_2);
  VAR_11 = VAR_3 | VAR_4;
 }

 VAR_11 |= FUNC_1(VAR_9, VAR_10) & VAR_5;
 FUNC_3(&VAR_9->p, VAR_6, VAR_11);
 return VAR_0;
}
