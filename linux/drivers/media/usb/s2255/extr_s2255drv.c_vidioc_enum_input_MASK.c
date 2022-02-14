
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_input {scalar_t__ index; int name; scalar_t__ status; int std; int type; } ;
struct s2255_vc {int idx; struct s2255_dev* dev; } ;
struct s2255_dev {scalar_t__ dsp_fw_ver; int pid; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct s2255_dev*,int,char*,int,int) ;
 int FUNC_1 (struct s2255_vc*,int*) ;
 int FUNC_2 (int ,char*,int) ;
 struct s2255_vc* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6,
        struct v4l2_input *VAR_7)
{
 struct s2255_vc *VAR_8 = FUNC_3(VAR_5);
 struct s2255_dev *VAR_9 = VAR_8->dev;
 u32 VAR_10 = 0;

 if (VAR_7->index != 0)
  return -VAR_0;
 VAR_7->type = VAR_3;
 VAR_7->std = VAR_2;
 VAR_7->status = 0;
 if (VAR_9->dsp_fw_ver >= VAR_1) {
  int VAR_11;
  VAR_11 = FUNC_1(VAR_8, &VAR_10);
  FUNC_0(VAR_9, 4, "s2255_cmd_status rc: %d status %x\n",
   VAR_11, VAR_10);
  if (VAR_11 == 0)
   VAR_7->status = (VAR_10 & 0x01) ? 0
    : VAR_4;
 }
 switch (VAR_9->pid) {
 case 0x2255:
 default:
  FUNC_2(VAR_7->name, "Composite", sizeof(VAR_7->name));
  break;
 case 0x2257:
  FUNC_2(VAR_7->name, (VAR_8->idx < 2) ? "Composite" : "S-Video",
   sizeof(VAR_7->name));
  break;
 }
 return 0;
}
