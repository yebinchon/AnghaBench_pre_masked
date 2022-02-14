
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct atlas7_pmx {scalar_t__* regs; int dev; TYPE_1__* pctl_data; } ;
struct atlas7_pad_config {unsigned long mux_bit; scalar_t__ mux_reg; } ;
struct TYPE_2__ {struct atlas7_pad_config* confs; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct atlas7_pmx*,struct atlas7_pad_config*,size_t) ;
 int FUNC_2 (struct atlas7_pmx*,struct atlas7_pad_config*,size_t) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (int ,char*,size_t,int) ;
 int FUNC_5 (char*,size_t,size_t,...) ;
 unsigned long FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct atlas7_pmx *VAR_2,
    u32 VAR_3, u32 VAR_4)
{
 struct atlas7_pad_config *VAR_5;
 u32 VAR_6;
 int VAR_7;
 unsigned long VAR_8;

 FUNC_5("PMX DUMP ### pin#%d func:%d #### START >>>\n",
   VAR_3, VAR_4);


 VAR_5 = &VAR_2->pctl_data->confs[VAR_3];
 VAR_6 = FUNC_3(VAR_3);


 if (VAR_0 == VAR_4) {
  VAR_7 = FUNC_1(VAR_2, VAR_5, VAR_6);
  if (VAR_7)
   FUNC_4(VAR_2->dev,
    "Convert pad#%d to analog failed, ret=%d\n",
    VAR_3, VAR_7);
  return VAR_7;
 }


 VAR_7 = FUNC_2(VAR_2, VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_4(VAR_2->dev,
   "Convert pad#%d to digital failed, ret=%d\n",
   VAR_3, VAR_7);
  return VAR_7;
 }


 FUNC_7(VAR_1 << VAR_5->mux_bit,
  VAR_2->regs[VAR_6] + FUNC_0(VAR_5->mux_reg));


 VAR_8 = FUNC_6(VAR_2->regs[VAR_6] + VAR_5->mux_reg);
 VAR_8 &= ~(VAR_1 << VAR_5->mux_bit);
 FUNC_7(VAR_8 | (VAR_4 << VAR_5->mux_bit),
   VAR_2->regs[VAR_6] + VAR_5->mux_reg);

 VAR_8 = FUNC_6(VAR_2->regs[VAR_6] + VAR_5->mux_reg);
 FUNC_5("bank:%d reg:0x%04x val:0x%08lx\n",
  VAR_6, VAR_5->mux_reg, VAR_8);

 return 0;
}
