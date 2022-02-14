
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_dev {int curr_ctx; } ;
struct TYPE_2__ {int dma; int size; } ;
struct s5p_mfc_ctx {int codec_mode; TYPE_1__ ctx; int num; struct s5p_mfc_dev* dev; } ;
struct s5p_mfc_cmd_args {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct s5p_mfc_dev*,int,int ) ;
 int FUNC_2 (struct s5p_mfc_dev*,int ,struct s5p_mfc_cmd_args*) ;

__attribute__((used)) static int FUNC_3(struct s5p_mfc_ctx *VAR_22)
{
 struct s5p_mfc_dev *VAR_23 = VAR_22->dev;
 struct s5p_mfc_cmd_args VAR_24;
 int VAR_25;

 FUNC_0(2, "Requested codec mode: %d\n", VAR_22->codec_mode);
 VAR_23->curr_ctx = VAR_22->num;
 switch (VAR_22->codec_mode) {
 case 141:
  VAR_25 = VAR_2;
  break;
 case 139:
  VAR_25 = VAR_4;
  break;
 case 131:
  VAR_25 = VAR_14;
  break;
 case 134:
  VAR_25 = VAR_9;
  break;
 case 135:
  VAR_25 = VAR_8;
  break;
 case 143:
  VAR_25 = VAR_0;
  break;
 case 132:
  VAR_25 = VAR_13;
  break;
 case 130:
  VAR_25 = VAR_15;
  break;
 case 137:
  VAR_25 = VAR_6;
  break;
 case 128:
  VAR_25 = VAR_17;
  break;
 case 140:
  VAR_25 = VAR_3;
  break;
 case 138:
  VAR_25 = VAR_5;
  break;
 case 133:
  VAR_25 = VAR_10;
  break;
 case 142:
  VAR_25 = VAR_1;
  break;
 case 129:
  VAR_25 = VAR_16;
  break;
 case 136:
  VAR_25 = VAR_7;
  break;
 default:
  VAR_25 = VAR_11;
 }
 FUNC_1(VAR_23, VAR_25, VAR_12);
 FUNC_1(VAR_23, VAR_22->ctx.dma, VAR_18);
 FUNC_1(VAR_23, VAR_22->ctx.size, VAR_19);
 FUNC_1(VAR_23, 0, VAR_20);

 return FUNC_2(VAR_23, VAR_21,
     &VAR_24);
}
