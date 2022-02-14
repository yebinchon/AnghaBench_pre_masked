
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct net_device* u32 ;
struct ns83820 {scalar_t__ base; scalar_t__ ihr; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ns83820* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,struct net_device*) ;
 int FUNC_2 (struct net_device*,struct net_device*) ;
 struct net_device* FUNC_3 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;
 struct ns83820 *VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6;
 FUNC_1("ns83820_irq(%p)\n", VAR_4);

 VAR_5->ihr = 0;

 VAR_6 = FUNC_3(VAR_5->base + VAR_1);
 FUNC_1("irq: %08x\n", VAR_6);
 FUNC_2(VAR_4, VAR_6);
 return VAR_0;
}
