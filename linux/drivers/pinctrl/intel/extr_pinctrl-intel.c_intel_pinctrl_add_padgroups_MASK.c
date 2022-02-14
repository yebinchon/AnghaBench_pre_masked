
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pinctrl {int dev; } ;
struct intel_padgroup {size_t reg_num; unsigned int size; unsigned int padown_num; scalar_t__ base; scalar_t__ gpio_base; } ;
struct intel_community {unsigned int npins; size_t ngpps; int gpp_size; struct intel_padgroup* gpps; scalar_t__ gpp_num_padown_regs; scalar_t__ pin_base; } ;


 size_t FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intel_padgroup* FUNC_1 (int ,size_t,int,int ) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct intel_pinctrl *VAR_3,
           struct intel_community *VAR_4)
{
 struct intel_padgroup *VAR_5;
 unsigned int VAR_6 = VAR_4->npins;
 unsigned int VAR_7 = 0;
 size_t VAR_8, VAR_9;

 if (VAR_4->gpps)
  VAR_8 = VAR_4->ngpps;
 else
  VAR_8 = FUNC_0(VAR_4->npins, VAR_4->gpp_size);

 VAR_5 = FUNC_1(VAR_3->dev, VAR_8, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  if (VAR_4->gpps) {
   VAR_5[VAR_9] = VAR_4->gpps[VAR_9];
  } else {
   unsigned int VAR_10 = VAR_4->gpp_size;

   VAR_5[VAR_9].reg_num = VAR_9;
   VAR_5[VAR_9].base = VAR_4->pin_base + VAR_9 * VAR_10;
   VAR_5[VAR_9].size = FUNC_2(VAR_10, VAR_6);
   VAR_6 -= VAR_5[VAR_9].size;
  }

  if (VAR_5[VAR_9].size > 32)
   return -VAR_0;

  if (!VAR_5[VAR_9].gpio_base)
   VAR_5[VAR_9].gpio_base = VAR_5[VAR_9].base;

  VAR_5[VAR_9].padown_num = VAR_7;





  if (VAR_4->gpp_num_padown_regs)
   VAR_7 += VAR_4->gpp_num_padown_regs;
  else
   VAR_7 += FUNC_0(VAR_5[VAR_9].size * 4, 32);
 }

 VAR_4->ngpps = VAR_8;
 VAR_4->gpps = VAR_5;

 return 0;
}
