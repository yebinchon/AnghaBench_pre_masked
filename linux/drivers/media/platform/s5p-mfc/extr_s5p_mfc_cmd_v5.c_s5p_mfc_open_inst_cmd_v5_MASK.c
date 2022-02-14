
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_dev {int curr_ctx; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ ofs; } ;
struct s5p_mfc_ctx {int codec_mode; int state; TYPE_1__ ctx; int num; struct s5p_mfc_dev* dev; } ;
struct s5p_mfc_cmd_args {scalar_t__* arg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct s5p_mfc_cmd_args*,int ,int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct s5p_mfc_dev*,int ,struct s5p_mfc_cmd_args*) ;

__attribute__((used)) static int FUNC_4(struct s5p_mfc_ctx *VAR_12)
{
 struct s5p_mfc_dev *VAR_13 = VAR_12->dev;
 struct s5p_mfc_cmd_args VAR_14;
 int VAR_15;


 FUNC_1(2, "Getting instance number (codec: %d)\n", VAR_12->codec_mode);
 VAR_13->curr_ctx = VAR_12->num;
 FUNC_0(&VAR_14, 0, sizeof(struct s5p_mfc_cmd_args));
 switch (VAR_12->codec_mode) {
 case 134:
  VAR_14.arg[0] = VAR_3;
  break;
 case 128:
  VAR_14.arg[0] = VAR_10;
  break;
 case 131:
  VAR_14.arg[0] = VAR_6;
  break;
 case 132:
  VAR_14.arg[0] = VAR_5;
  break;
 case 136:
  VAR_14.arg[0] = VAR_1;
  break;
 case 129:
  VAR_14.arg[0] = VAR_9;
  break;
 case 133:
  VAR_14.arg[0] = VAR_4;
  break;
 case 130:
  VAR_14.arg[0] = VAR_7;
  break;
 case 135:
  VAR_14.arg[0] = VAR_2;
  break;
 default:
  VAR_14.arg[0] = VAR_8;
 }
 VAR_14.arg[1] = 0;
 VAR_14.arg[2] = VAR_12->ctx.ofs;
 VAR_14.arg[3] = VAR_12->ctx.size;
 VAR_15 = FUNC_3(VAR_13, VAR_11,
        &VAR_14);
 if (VAR_15) {
  FUNC_2("Failed to create a new instance\n");
  VAR_12->state = VAR_0;
 }
 return VAR_15;
}
