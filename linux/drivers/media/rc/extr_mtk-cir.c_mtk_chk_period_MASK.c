
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_ir {int dev; TYPE_1__* data; int bus; } ;
struct TYPE_2__ {int div; } ;


 int FUNC_0 (unsigned long,int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static inline u32 FUNC_3(struct mtk_ir *VAR_1)
{
 u32 VAR_2;


 VAR_2 = FUNC_0(1000000000ul,
    FUNC_1(VAR_1->bus) / VAR_1->data->div);





 VAR_2 = FUNC_0(VAR_0, VAR_2);

 FUNC_2(VAR_1->dev, "@pwm clk  = \t%lu\n",
  FUNC_1(VAR_1->bus) / VAR_1->data->div);
 FUNC_2(VAR_1->dev, "@chkperiod = %08x\n", VAR_2);

 return VAR_2;
}
