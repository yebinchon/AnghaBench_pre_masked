
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltq_pinmux_info {int dev; int * mfp; } ;
struct ltq_pin_group {int npins; int * pins; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,...) ;
 int FUNC_1 (struct ltq_pinmux_info const*,int ) ;
 int FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_3(const struct ltq_pin_group *VAR_1,
      const struct ltq_pinmux_info *VAR_2,
      unsigned VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1->npins; VAR_4++) {
  VAR_5 = FUNC_1(VAR_2, VAR_1->pins[VAR_4]);
  if (VAR_5 < 0) {
   FUNC_0(VAR_2->dev, "could not find mfp for pin %d\n",
    VAR_1->pins[VAR_4]);
   return -VAR_0;
  }
  VAR_6 = FUNC_2(&VAR_2->mfp[VAR_5], VAR_3);
  if (VAR_6 < 0) {
   FUNC_0(VAR_2->dev, "Can't find mux %d on pin%d\n",
    VAR_3, VAR_5);
   break;
  }
 }
 return VAR_6;
}
