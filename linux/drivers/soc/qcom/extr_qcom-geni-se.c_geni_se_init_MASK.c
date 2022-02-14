
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct geni_se {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct geni_se*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(struct geni_se *VAR_6, u32 VAR_7, u32 VAR_8)
{
 u32 VAR_9;

 FUNC_2(VAR_6);
 FUNC_0(VAR_6->base);
 FUNC_1(VAR_6->base);

 FUNC_4(VAR_7, VAR_6->base + VAR_3);
 FUNC_4(VAR_8, VAR_6->base + VAR_2);

 VAR_9 = FUNC_3(VAR_6->base + VAR_1);
 VAR_9 |= VAR_0;
 FUNC_4(VAR_9, VAR_6->base + VAR_1);

 VAR_9 = FUNC_3(VAR_6->base + VAR_4);
 VAR_9 |= VAR_5;
 FUNC_4(VAR_9, VAR_6->base + VAR_4);
}
