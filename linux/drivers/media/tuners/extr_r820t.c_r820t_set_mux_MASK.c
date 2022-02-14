
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct r820t_priv {int xtal_cap_sel; TYPE_1__* imr_data; scalar_t__ imr_done; } ;
struct r820t_freq_range {int freq; int open_d; int rf_mux_ploy; int xtal_cap20p; int xtal_cap10p; int xtal_cap0p; size_t imr_mem; int tf_c; } ;
struct TYPE_2__ {int gain_x; int phase_y; } ;


 int FUNC_0 (struct r820t_freq_range*) ;





 struct r820t_freq_range* VAR_0 ;
 int FUNC_1 (struct r820t_priv*,int,int ) ;
 int FUNC_2 (struct r820t_priv*,int,int,int) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct r820t_priv *VAR_1, u32 VAR_2)
{
 const struct r820t_freq_range *VAR_3;
 int VAR_4, VAR_5;
 u8 VAR_6, VAR_7, VAR_8;


 VAR_2 = VAR_2 / 1000000;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0) - 1; VAR_4++) {
  if (VAR_2 < VAR_0[VAR_4 + 1].freq)
   break;
 }
 VAR_3 = &VAR_0[VAR_4];

 FUNC_3("set r820t range#%d for frequency %d MHz\n", VAR_4, VAR_2);


 VAR_5 = FUNC_2(VAR_1, 0x17, VAR_3->open_d, 0x08);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_1, 0x1a, VAR_3->rf_mux_ploy, 0xc3);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_1(VAR_1, 0x1b, VAR_3->tf_c);
 if (VAR_5 < 0)
  return VAR_5;


 switch (VAR_1->xtal_cap_sel) {
 case 128:
 case 129:
  VAR_6 = VAR_3->xtal_cap20p | 0x08;
  break;
 case 130:
  VAR_6 = VAR_3->xtal_cap10p | 0x08;
  break;
 case 132:
  VAR_6 = VAR_3->xtal_cap0p | 0x00;
  break;
 default:
 case 131:
  VAR_6 = VAR_3->xtal_cap0p | 0x08;
  break;
 }
 VAR_5 = FUNC_2(VAR_1, 0x10, VAR_6, 0x0b);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_1->imr_done) {
  VAR_7 = VAR_1->imr_data[VAR_3->imr_mem].gain_x;
  VAR_8 = VAR_1->imr_data[VAR_3->imr_mem].phase_y;
 } else {
  VAR_7 = 0;
  VAR_8 = 0;
 }
 VAR_5 = FUNC_2(VAR_1, 0x08, VAR_7, 0x3f);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_1, 0x09, VAR_8, 0x3f);

 return VAR_5;
}
