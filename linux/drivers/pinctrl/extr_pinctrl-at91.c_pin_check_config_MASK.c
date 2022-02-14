
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91_pmx_pin {size_t bank; int pin; int mux; } ;
struct at91_pinctrl {int nmux; int* mux_mask; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,int,int,...) ;
 size_t VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_1(struct at91_pinctrl *VAR_5, const char *VAR_6,
       int VAR_7, const struct at91_pmx_pin *VAR_8)
{
 int VAR_9;


 if (VAR_8->bank >= VAR_3) {
  FUNC_0(VAR_5->dev, "%s: pin conf %d bank_id %d >= nbanks %d\n",
   VAR_6, VAR_7, VAR_8->bank, VAR_3);
  return -VAR_0;
 }

 if (!VAR_4[VAR_8->bank]) {
  FUNC_0(VAR_5->dev, "%s: pin conf %d bank_id %d not enabled\n",
   VAR_6, VAR_7, VAR_8->bank);
  return -VAR_1;
 }

 if (VAR_8->pin >= VAR_2) {
  FUNC_0(VAR_5->dev, "%s: pin conf %d pin_bank_id %d >= %d\n",
   VAR_6, VAR_7, VAR_8->pin, VAR_2);
  return -VAR_0;
 }

 if (!VAR_8->mux)
  return 0;

 VAR_9 = VAR_8->mux - 1;

 if (VAR_9 >= VAR_5->nmux) {
  FUNC_0(VAR_5->dev, "%s: pin conf %d mux_id %d >= nmux %d\n",
   VAR_6, VAR_7, VAR_9, VAR_5->nmux);
  return -VAR_0;
 }

 if (!(VAR_5->mux_mask[VAR_8->bank * VAR_5->nmux + VAR_9] & 1 << VAR_8->pin)) {
  FUNC_0(VAR_5->dev, "%s: pin conf %d mux_id %d not supported for pio%c%d\n",
   VAR_6, VAR_7, VAR_9, VAR_8->bank + 'A', VAR_8->pin);
  return -VAR_0;
 }

 return 0;
}
