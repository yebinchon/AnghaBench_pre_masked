
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunxi_sid {scalar_t__ base; } ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(const struct sunxi_sid *VAR_6,
          const unsigned int VAR_7,
          u32 *VAR_8)
{
 u32 VAR_9;
 int VAR_10;


 VAR_9 = (VAR_7 & VAR_0)
    << VAR_1;
 VAR_9 |= VAR_2 | VAR_5;
 FUNC_2(VAR_9, VAR_6->base + VAR_3);

 VAR_10 = FUNC_1(VAR_6->base + VAR_3, VAR_9,
     !(VAR_9 & VAR_5), 100, 250000);
 if (VAR_10)
  return VAR_10;

 if (VAR_8)
  *VAR_8 = FUNC_0(VAR_6->base + VAR_4);

 FUNC_2(0, VAR_6->base + VAR_3);

 return 0;
}
