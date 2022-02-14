
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvec_chip {int i2c_addr; int irq; scalar_t__ base; int i2c_clk; int rst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct nvec_chip *VAR_9)
{
 u32 VAR_10;

 FUNC_0(VAR_9->i2c_clk);

 FUNC_3(VAR_9->rst);
 FUNC_5(2);
 FUNC_4(VAR_9->rst);

 VAR_10 = VAR_2 | VAR_3 |
     (0x2 << VAR_1);
 FUNC_6(VAR_10, VAR_9->base + VAR_0);

 FUNC_1(VAR_9->i2c_clk, 8 * 80000);

 FUNC_6(VAR_8, VAR_9->base + VAR_6);
 FUNC_6(0x1E, VAR_9->base + VAR_7);

 FUNC_6(VAR_9->i2c_addr >> 1, VAR_9->base + VAR_4);
 FUNC_6(0, VAR_9->base + VAR_5);

 FUNC_2(VAR_9->irq);
}
