
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bm_portal {int dummy; } ;
struct bman_portal {int irq_sources; struct bm_portal p; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bm_portal*,int ) ;
 int FUNC_1 (struct bm_portal*,int ,int) ;
 int FUNC_2 (struct bman_portal*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct bman_portal *VAR_5 = VAR_4;
 struct bm_portal *VAR_6 = &VAR_5->p;
 u32 VAR_7 = VAR_5->irq_sources;
 u32 VAR_8 = FUNC_0(VAR_6, VAR_0) & VAR_5->irq_sources;

 if (FUNC_3(!VAR_8))
  return VAR_2;

 VAR_7 |= FUNC_2(VAR_5, VAR_8);
 FUNC_1(VAR_6, VAR_0, VAR_7);
 return VAR_1;
}
