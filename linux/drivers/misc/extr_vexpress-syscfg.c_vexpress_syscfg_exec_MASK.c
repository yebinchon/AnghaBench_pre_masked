
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vexpress_syscfg_func {int num_templates; int* template; struct vexpress_syscfg* syscfg; } ;
struct vexpress_syscfg {int dev; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_13 ;
 int FUNC_2 (int ,char*,struct vexpress_syscfg_func*,int,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (long) ;
 int FUNC_10 (long) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct vexpress_syscfg_func *VAR_14,
  int VAR_15, bool VAR_16, u32 *VAR_17)
{
 struct vexpress_syscfg *VAR_18 = VAR_14->syscfg;
 u32 VAR_19, VAR_20;
 int VAR_21;
 long VAR_22;

 if (FUNC_0(VAR_15 >= VAR_14->num_templates))
  return -VAR_3;

 VAR_19 = FUNC_5(VAR_18->base + VAR_5);
 if (FUNC_0(VAR_19 & VAR_6))
  return -VAR_0;

 VAR_19 = VAR_14->template[VAR_15];
 VAR_19 |= VAR_6;
 VAR_19 |= VAR_16 ? VAR_7 : 0;


 if (!VAR_16)
  *VAR_17 = 0xdeadbeef;

 FUNC_2(VAR_18->dev, "func %p, command %x, data %x\n",
   VAR_14, VAR_19, *VAR_17);
 FUNC_11(*VAR_17, VAR_18->base + VAR_8);
 FUNC_11(0, VAR_18->base + VAR_9);
 FUNC_11(VAR_19, VAR_18->base + VAR_5);
 FUNC_4();


 VAR_21 = 100;
 VAR_22 = 100;
 do {
  if (!FUNC_3()) {
   FUNC_7(VAR_12);
   FUNC_6(FUNC_10(VAR_22));
   if (FUNC_8(VAR_13))
    return -VAR_2;
  } else {
   FUNC_9(VAR_22);
  }

  VAR_20 = FUNC_5(VAR_18->base + VAR_9);
  if (VAR_20 & VAR_11)
   return -VAR_1;

  if (VAR_22 > 20)
   VAR_22 -= 20;
 } while (--VAR_21 && !(VAR_20 & VAR_10));
 if (FUNC_1(!VAR_21))
  return -VAR_4;

 if (!VAR_16) {
  *VAR_17 = FUNC_5(VAR_18->base + VAR_8);
  FUNC_2(VAR_18->dev, "func %p, read data %x\n", VAR_14, *VAR_17);
 }

 return 0;
}
