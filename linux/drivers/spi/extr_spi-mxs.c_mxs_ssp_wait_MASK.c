
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxs_ssp {scalar_t__ base; } ;
struct mxs_spi {struct mxs_ssp ssp; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long const) ;

__attribute__((used)) static int FUNC_3(struct mxs_spi *VAR_3, int VAR_4, int VAR_5, bool VAR_6)
{
 const unsigned long VAR_7 = VAR_2 + FUNC_0(VAR_1);
 struct mxs_ssp *VAR_8 = &VAR_3->ssp;
 u32 VAR_9;

 do {
  VAR_9 = FUNC_1(VAR_8->base + VAR_4);

  if (!VAR_6)
   VAR_9 = ~VAR_9;

  VAR_9 &= VAR_5;

  if (VAR_9 == VAR_5)
   return 0;
 } while (FUNC_2(VAR_2, VAR_7));

 return -VAR_0;
}
