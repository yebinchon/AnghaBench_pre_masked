
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dc_wdt {int lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct dc_wdt *VAR_4, u32 VAR_5)
{
 unsigned long VAR_6;

 FUNC_0(&VAR_4->lock, VAR_6);

 FUNC_2(0, VAR_4->base + VAR_0);
 FUNC_2(VAR_5, VAR_4->base + VAR_1);
 FUNC_2(VAR_2 | VAR_3,
         VAR_4->base + VAR_0);

 FUNC_1(&VAR_4->lock, VAR_6);
}
