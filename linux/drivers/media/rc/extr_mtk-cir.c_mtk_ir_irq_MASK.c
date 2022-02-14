
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct mtk_ir {TYPE_1__* data; int rc; int dev; } ;
struct ir_raw_event {int pulse; int duration; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int * regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct ir_raw_event*) ;
 int FUNC_5 (struct mtk_ir*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct mtk_ir*,int ) ;
 int FUNC_7 (struct mtk_ir*,int,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_9, void *VAR_10)
{
 struct mtk_ir *VAR_11 = VAR_10;
 u8 VAR_12 = 0;
 u32 VAR_13, VAR_14, VAR_15;
 struct ir_raw_event VAR_16 = {};
 FUNC_3(VAR_11->rc);


 VAR_16.pulse = 0;


 for (VAR_13 = 0 ; VAR_13 < VAR_1 ; VAR_13++) {
  VAR_15 = FUNC_6(VAR_11, FUNC_5(VAR_11, VAR_13));
  FUNC_1(VAR_11->dev, "@reg%d=0x%08x\n", VAR_13, VAR_15);

  for (VAR_14 = 0 ; VAR_14 < 4 ; VAR_14++) {
   VAR_12 = (VAR_15 & (VAR_8 << VAR_14 * 8)) >> VAR_14 * 8;
   VAR_16.pulse = !VAR_16.pulse;
   VAR_16.duration = VAR_12 * (VAR_6 + 1);
   FUNC_4(VAR_11->rc, &VAR_16);
  }
 }
 if (!FUNC_0(VAR_12, VAR_16.pulse)) {
  VAR_16.pulse = 0;
  VAR_16.duration = VAR_7 * (VAR_6 + 1);
  FUNC_4(VAR_11->rc, &VAR_16);
 }

 FUNC_2(VAR_11->rc);





 FUNC_7(VAR_11, 0x1, VAR_2, VAR_11->data->regs[VAR_3]);


 FUNC_7(VAR_11, 0x1, VAR_4,
       VAR_11->data->regs[VAR_5]);

 return VAR_0;
}
