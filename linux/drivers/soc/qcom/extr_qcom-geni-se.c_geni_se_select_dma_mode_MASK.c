
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct geni_se {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct geni_se*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct geni_se *VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_2);

 VAR_3 = FUNC_1(VAR_2->base + VAR_1);
 VAR_3 |= VAR_0;
 FUNC_2(VAR_3, VAR_2->base + VAR_1);
}
