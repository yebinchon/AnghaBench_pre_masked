
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct zx_pinctrl_soc_info {struct pinctrl_pin_desc* pins; } ;
struct zx_pinctrl {int aux_base; int base; int lock; struct zx_pinctrl_soc_info* info; } ;
struct zx_pin_data {int width; int offset; int bitpos; scalar_t__ aon_pin; struct zx_mux_desc* muxes; } ;
struct zx_mux_desc {int muxval; scalar_t__ name; } ;
struct pinctrl_pin_desc {int number; struct zx_pin_data* drv_data; } ;
struct pinctrl_dev {int dummy; } ;
struct function_desc {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct zx_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 struct function_desc* FUNC_1 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5)
{
 struct zx_pinctrl *VAR_6 = FUNC_0(VAR_3);
 struct zx_pinctrl_soc_info *VAR_7 = VAR_6->info;
 const struct pinctrl_pin_desc *VAR_8 = VAR_7->pins + VAR_5;
 struct zx_pin_data *VAR_9 = VAR_8->drv_data;
 struct zx_mux_desc *VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 struct function_desc *VAR_14;
 unsigned long VAR_15;
 u32 VAR_16, VAR_17;


 if (!VAR_9)
  return -VAR_1;

 VAR_10 = VAR_9->muxes;
 VAR_11 = (1 << VAR_9->width) - 1;
 VAR_12 = VAR_9->offset;
 VAR_13 = VAR_9->bitpos;

 VAR_14 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_14)
  return -VAR_1;

 while (VAR_10->name) {
  if (FUNC_5(VAR_10->name, VAR_14->name) == 0)
   break;
  VAR_10++;
 }


 VAR_17 = VAR_10->muxval;

 FUNC_3(&VAR_6->lock, VAR_15);

 if (VAR_9->aon_pin) {





  u16 VAR_18 = VAR_8->number / 16 * 4;
  u16 VAR_19 = (VAR_8->number % 16) * 2;

  if (VAR_17 & VAR_0) {




   VAR_16 = FUNC_2(VAR_6->aux_base + VAR_18);
   VAR_16 &= ~(0x3 << VAR_19);
   VAR_16 |= (VAR_17 & 0x3) << VAR_19;
   FUNC_6(VAR_16, VAR_6->aux_base + VAR_18);
  } else {




   VAR_16 = FUNC_2(VAR_6->base + VAR_12);
   VAR_16 &= ~(VAR_11 << VAR_13);
   VAR_16 |= (VAR_17 & VAR_11) << VAR_13;
   FUNC_6(VAR_16, VAR_6->base + VAR_12);





   VAR_16 = FUNC_2(VAR_6->aux_base + VAR_18);
   VAR_16 &= ~(0x3 << VAR_19);
   VAR_16 |= VAR_2 << VAR_19;
   FUNC_6(VAR_16, VAR_6->aux_base + VAR_18);
  }

 } else {




  VAR_16 = FUNC_2(VAR_6->base + VAR_12);
  VAR_16 &= ~(VAR_11 << VAR_13);
  VAR_16 |= (VAR_17 & VAR_11) << VAR_13;
  FUNC_6(VAR_16, VAR_6->base + VAR_12);
 }

 FUNC_4(&VAR_6->lock, VAR_15);

 return 0;
}
