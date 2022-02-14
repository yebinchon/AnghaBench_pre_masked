
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtk_nfc {int dev; scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int,int,int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct mtk_nfc *VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_1(VAR_3->regs + VAR_1, VAR_5,
           VAR_5 & VAR_2, 10, VAR_0);
 if (VAR_4 < 0)
  FUNC_0(VAR_3->dev, "data not ready\n");
}
