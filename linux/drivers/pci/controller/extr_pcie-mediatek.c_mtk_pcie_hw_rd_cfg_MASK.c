
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_pcie_port {scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct mtk_pcie_port*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct mtk_pcie_port *VAR_10, u32 VAR_11, u32 VAR_12,
         int VAR_13, int VAR_14, u32 *VAR_15)
{
 u32 VAR_16;


 FUNC_7(FUNC_0(VAR_2, VAR_1),
        VAR_10->base + VAR_6);
 FUNC_7(FUNC_1(VAR_13, VAR_14), VAR_10->base + VAR_7);
 FUNC_7(FUNC_2(VAR_13, FUNC_3(VAR_12), FUNC_4(VAR_12), VAR_11),
        VAR_10->base + VAR_8);


 VAR_16 = FUNC_6(VAR_10->base + VAR_5);
 VAR_16 |= VAR_0;
 FUNC_7(VAR_16, VAR_10->base + VAR_5);


 if (FUNC_5(VAR_10))
  return VAR_3;


 *VAR_15 = FUNC_6(VAR_10->base + VAR_9);

 if (VAR_14 == 1)
  *VAR_15 = (*VAR_15 >> (8 * (VAR_13 & 3))) & 0xff;
 else if (VAR_14 == 2)
  *VAR_15 = (*VAR_15 >> (8 * (VAR_13 & 3))) & 0xffff;

 return VAR_4;
}
