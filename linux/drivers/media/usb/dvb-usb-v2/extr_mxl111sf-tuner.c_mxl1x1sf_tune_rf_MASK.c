
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mxl111sf_tuner_state {TYPE_1__* cfg; } ;
struct mxl111sf_reg_ctrl_info {int dummy; } ;
struct dvb_frontend {struct mxl111sf_tuner_state* tuner_priv; } ;
struct TYPE_2__ {int (* ant_hunt ) (struct dvb_frontend*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mxl111sf_reg_ctrl_info* FUNC_0 (int ,int) ;
 int FUNC_1 (struct mxl111sf_tuner_state*,struct mxl111sf_reg_ctrl_info*) ;
 int FUNC_2 (struct mxl111sf_tuner_state*,int ,int*) ;
 int FUNC_3 (struct mxl111sf_tuner_state*,int ,int) ;
 int FUNC_4 (struct mxl111sf_tuner_state*) ;
 int FUNC_5 (struct mxl111sf_tuner_state*,int) ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_5, u32 VAR_6, u8 VAR_7)
{
 struct mxl111sf_tuner_state *VAR_8 = VAR_5->tuner_priv;
 static struct mxl111sf_reg_ctrl_info *VAR_9;
 int VAR_10;
 u8 VAR_11;

 FUNC_6("(freq = %d, bw = 0x%x)", VAR_6, VAR_7);


 VAR_10 = FUNC_3(VAR_8, VAR_4, 0);
 if (FUNC_7(VAR_10))
  goto fail;


 VAR_10 = FUNC_2(VAR_8, VAR_2, &VAR_11);
 if (FUNC_7(VAR_10))
  goto fail;


 VAR_9 = FUNC_0(VAR_6, VAR_7);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_8, VAR_9);
 if (FUNC_7(VAR_10))
  goto fail;

 if ((VAR_11 & VAR_1) == VAR_3) {

  FUNC_5(VAR_8, 0);
  FUNC_5(VAR_8, 1);
  FUNC_4(VAR_8);
 }

 VAR_10 = FUNC_3(VAR_8, VAR_4, 1);
 if (FUNC_7(VAR_10))
  goto fail;

 if (VAR_8->cfg->ant_hunt)
  VAR_8->cfg->ant_hunt(VAR_5);
fail:
 return VAR_10;
}
