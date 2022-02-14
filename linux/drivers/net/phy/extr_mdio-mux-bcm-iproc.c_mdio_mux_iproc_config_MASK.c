
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_mdiomux_desc {scalar_t__ base; scalar_t__ core_clk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct iproc_mdiomux_desc *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;


 VAR_9 = FUNC_2(VAR_7->base + VAR_5);
 VAR_9 |= FUNC_0(VAR_6);
 FUNC_3(VAR_9, VAR_7->base + VAR_5);

 if (VAR_7->core_clk) {



  VAR_8 = FUNC_1(VAR_7->core_clk) / VAR_0;
  VAR_8 = VAR_8 / (VAR_1 + 1);
  VAR_9 = VAR_8;
  VAR_9 |= VAR_1 << VAR_2;
  FUNC_3(VAR_9, VAR_7->base + VAR_3);
  FUNC_3(VAR_9, VAR_7->base + VAR_4);
 }
}
