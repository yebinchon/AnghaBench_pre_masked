
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {struct device* dev; } ;
struct msm_dma {unsigned int count; int dir; int phys; int enable_bit; int chan; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,unsigned int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_1, struct msm_dma *VAR_2)
{
 struct device *VAR_3 = VAR_1->dev;
 unsigned int VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_2->count;
 VAR_2->count = 0;

 FUNC_1(VAR_2->chan);
 VAR_5 = FUNC_2(VAR_1, VAR_0);
 VAR_5 &= ~VAR_2->enable_bit;
 FUNC_3(VAR_1, VAR_5, VAR_0);

 if (VAR_4)
  FUNC_0(VAR_3, VAR_2->phys, VAR_4, VAR_2->dir);
}
