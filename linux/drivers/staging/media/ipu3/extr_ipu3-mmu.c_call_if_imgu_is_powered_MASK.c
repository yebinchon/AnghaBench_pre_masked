
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_mmu {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct imgu_mmu *VAR_0,
        void (*VAR_1)(struct imgu_mmu *VAR_2))
{
 if (!FUNC_0(VAR_0->dev))
  return;

 VAR_1(VAR_0);
 FUNC_1(VAR_0->dev);
}
