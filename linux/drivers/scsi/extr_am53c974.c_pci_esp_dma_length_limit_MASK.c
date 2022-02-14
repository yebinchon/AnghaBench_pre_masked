
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct esp {int config2; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct esp *VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4 = 16;
 u32 VAR_5, VAR_6;





 if (VAR_1->config2 & VAR_0)
  VAR_4 = 24;

 if (VAR_3 > (1U << VAR_4))
  VAR_3 = (1U << VAR_4);




 VAR_5 = VAR_2 & ((1U << 24) - 1U);
 VAR_6 = VAR_5 + VAR_3;
 if (VAR_6 > (1U << 24))
  VAR_6 = (1U <<24);
 VAR_3 = VAR_6 - VAR_5;

 return VAR_3;
}
