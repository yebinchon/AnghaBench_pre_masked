
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_ecc {scalar_t__ regs; struct device* dev; } ;
struct device {int dummy; } ;
typedef enum mtk_ecc_operation { ____Placeholder_mtk_ecc_operation } mtk_ecc_operation ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,char*) ;
 int FUNC_2 (scalar_t__,int,int,int,int ) ;

__attribute__((used)) static inline void FUNC_3(struct mtk_ecc *VAR_3,
         enum mtk_ecc_operation VAR_4)
{
 struct device *VAR_5 = VAR_3->dev;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3->regs + FUNC_0(VAR_4), VAR_6,
     VAR_6 & VAR_1,
     10, VAR_2);
 if (VAR_7)
  FUNC_1(VAR_5, "%s NOT idle\n",
    VAR_4 == VAR_0 ? "encoder" : "decoder");
}
