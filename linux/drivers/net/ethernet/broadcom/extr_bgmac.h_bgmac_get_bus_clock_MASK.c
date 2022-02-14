
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bgmac {int (* get_bus_clock ) (struct bgmac*) ;} ;


 int FUNC_0 (struct bgmac*) ;

__attribute__((used)) static inline u32 FUNC_1(struct bgmac *VAR_0)
{
 return VAR_0->get_bus_clock(VAR_0);
}
