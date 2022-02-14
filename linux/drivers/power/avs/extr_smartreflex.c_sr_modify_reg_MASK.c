
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_sr {scalar_t__ ip_type; unsigned int base; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct omap_sr *VAR_6, unsigned VAR_7, u32 VAR_8,
     u32 VAR_9)
{
 u32 VAR_10;
 if (VAR_6->ip_type == VAR_4 && VAR_7 == VAR_1)
  VAR_8 |= VAR_0;
 else if (VAR_6->ip_type == VAR_5 && VAR_7 == VAR_2)
  VAR_8 |= VAR_3;

 VAR_10 = FUNC_0(VAR_6->base + VAR_7);
 VAR_10 &= ~VAR_8;

 VAR_9 &= VAR_8;

 VAR_10 |= VAR_9;

 FUNC_1(VAR_10, (VAR_6->base + VAR_7));
}
