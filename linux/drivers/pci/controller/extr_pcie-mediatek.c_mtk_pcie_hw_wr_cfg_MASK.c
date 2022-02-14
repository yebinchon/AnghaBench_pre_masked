
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
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mtk_pcie_port*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct mtk_pcie_port *VAR_8, u32 VAR_9, u32 VAR_10,
         int VAR_11, int VAR_12, u32 VAR_13)
{

 FUNC_7(FUNC_0(VAR_1, VAR_2),
        VAR_8->base + VAR_4);
 FUNC_7(FUNC_1(VAR_11, VAR_12), VAR_8->base + VAR_5);
 FUNC_7(FUNC_2(VAR_11, FUNC_3(VAR_10), FUNC_4(VAR_10), VAR_9),
        VAR_8->base + VAR_6);


 VAR_13 = VAR_13 << 8 * (VAR_11 & 3);
 FUNC_7(VAR_13, VAR_8->base + VAR_7);


 VAR_13 = FUNC_6(VAR_8->base + VAR_3);
 VAR_13 |= VAR_0;
 FUNC_7(VAR_13, VAR_8->base + VAR_3);


 return FUNC_5(VAR_8);
}
