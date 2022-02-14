
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mxl111sf_tuner_state {int if_freq; TYPE_1__* cfg; } ;
struct TYPE_2__ {int invert_spectrum; int if_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mxl111sf_tuner_state*,int ,int*) ;
 int FUNC_1 (struct mxl111sf_tuner_state*,int ,int) ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mxl111sf_tuner_state *VAR_5)
{
 int VAR_6;
 u8 VAR_7;




 FUNC_2("(IF polarity = %d, IF freq = 0x%02x)",
  VAR_5->cfg->invert_spectrum, VAR_5->cfg->if_freq);


 VAR_7 = VAR_5->cfg->invert_spectrum;

 VAR_7 |= VAR_5->cfg->if_freq;

 VAR_6 = FUNC_1(VAR_5, VAR_4, VAR_7);
 if (FUNC_3(VAR_6))
  goto fail;
 VAR_6 = FUNC_0(VAR_5, VAR_2, &VAR_7);
 if (FUNC_3(VAR_6))
  goto fail;

 VAR_7 &= 0xf0;
 VAR_7 |= 0x90;

 VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_7);
 if (FUNC_3(VAR_6))
  goto fail;




 VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_7);
 if (FUNC_3(VAR_6))
  goto fail;

 VAR_5->if_freq = VAR_5->cfg->if_freq;
fail:
 return VAR_6;
}
