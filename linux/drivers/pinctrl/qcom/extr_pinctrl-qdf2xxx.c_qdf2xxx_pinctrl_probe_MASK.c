
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u32 ;
struct platform_device {int dev; } ;
struct pinctrl_pin_desc {unsigned int number; char* name; } ;
struct msm_pingroup {unsigned int* pins; int npins; char* name; int ctl_reg; int io_reg; int intr_cfg_reg; int intr_status_reg; int intr_target_reg; int mux_bit; int drv_bit; int oe_bit; int out_bit; int intr_target_bit; int intr_target_kpss_val; int intr_raw_status_bit; int intr_polarity_bit; int intr_detection_bit; int intr_detection_width; scalar_t__ intr_status_bit; scalar_t__ intr_enable_bit; scalar_t__ in_bit; scalar_t__ pull_bit; } ;
struct msm_pinctrl_soc_data {int npins; int ngroups; int ngpios; struct msm_pingroup* groups; struct pinctrl_pin_desc* pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int*) ;
 int FUNC_3 (int *,char*,unsigned int*,unsigned int) ;
 void* FUNC_4 (int *,unsigned int,int,int ) ;
 struct msm_pinctrl_soc_data* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct platform_device*,struct msm_pinctrl_soc_data*) ;
 int FUNC_7 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct msm_pinctrl_soc_data *VAR_6;
 struct pinctrl_pin_desc *VAR_7;
 struct msm_pingroup *VAR_8;
 char (*VAR_9)[VAR_4];
 unsigned int VAR_10;
 u32 VAR_11;
 unsigned int VAR_12;
 u8 VAR_13[VAR_3];
 int VAR_14;


 VAR_14 = FUNC_2(&VAR_5->dev, "num-gpios", &VAR_11);
 if (VAR_14 < 0) {
  FUNC_0(&VAR_5->dev, "missing 'num-gpios' property\n");
  return VAR_14;
 }
 if (!VAR_11 || VAR_11 > VAR_3) {
  FUNC_0(&VAR_5->dev, "invalid 'num-gpios' property\n");
  return -VAR_0;
 }


 VAR_14 = FUNC_1(&VAR_5->dev, "gpios");
 if (VAR_14 < 0) {
  FUNC_0(&VAR_5->dev, "missing 'gpios' property\n");
  return VAR_14;
 }




 if (!VAR_14 || VAR_14 > VAR_11) {
  FUNC_0(&VAR_5->dev, "invalid 'gpios' property\n");
  return -VAR_0;
 }
 VAR_12 = VAR_14;

 VAR_14 = FUNC_3(&VAR_5->dev, "gpios", VAR_13,
         VAR_12);
 if (VAR_14 < 0) {
  FUNC_0(&VAR_5->dev, "could not read list of GPIOs\n");
  return VAR_14;
 }

 VAR_6 = FUNC_5(&VAR_5->dev, sizeof(*VAR_6), VAR_2);
 VAR_7 = FUNC_4(&VAR_5->dev, VAR_11,
  sizeof(struct pinctrl_pin_desc), VAR_2);
 VAR_8 = FUNC_4(&VAR_5->dev, VAR_11,
  sizeof(struct msm_pingroup), VAR_2);
 VAR_9 = FUNC_4(&VAR_5->dev, VAR_12, VAR_4, VAR_2);

 if (!VAR_6 || !VAR_7 || !VAR_8 || !VAR_9)
  return -VAR_1;





 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  VAR_7[VAR_10].number = VAR_10;
  VAR_8[VAR_10].pins = &VAR_7[VAR_10].number;
 }


 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  unsigned int VAR_15 = VAR_13[VAR_10];

  VAR_8[VAR_15].npins = 1;
  FUNC_7(VAR_9[VAR_10], VAR_4, "gpio%u", VAR_15);
  VAR_7[VAR_15].name = VAR_9[VAR_10];
  VAR_8[VAR_15].name = VAR_9[VAR_10];

  VAR_8[VAR_15].ctl_reg = 0x10000 * VAR_15;
  VAR_8[VAR_15].io_reg = 0x04 + 0x10000 * VAR_15;
  VAR_8[VAR_15].intr_cfg_reg = 0x08 + 0x10000 * VAR_15;
  VAR_8[VAR_15].intr_status_reg = 0x0c + 0x10000 * VAR_15;
  VAR_8[VAR_15].intr_target_reg = 0x08 + 0x10000 * VAR_15;

  VAR_8[VAR_15].mux_bit = 2;
  VAR_8[VAR_15].pull_bit = 0;
  VAR_8[VAR_15].drv_bit = 6;
  VAR_8[VAR_15].oe_bit = 9;
  VAR_8[VAR_15].in_bit = 0;
  VAR_8[VAR_15].out_bit = 1;
  VAR_8[VAR_15].intr_enable_bit = 0;
  VAR_8[VAR_15].intr_status_bit = 0;
  VAR_8[VAR_15].intr_target_bit = 5;
  VAR_8[VAR_15].intr_target_kpss_val = 1;
  VAR_8[VAR_15].intr_raw_status_bit = 4;
  VAR_8[VAR_15].intr_polarity_bit = 1;
  VAR_8[VAR_15].intr_detection_bit = 2;
  VAR_8[VAR_15].intr_detection_width = 2;
 }

 VAR_6->pins = VAR_7;
 VAR_6->groups = VAR_8;
 VAR_6->npins = VAR_11;
 VAR_6->ngroups = VAR_11;
 VAR_6->ngpios = VAR_11;

 return FUNC_6(VAR_5, VAR_6);
}
