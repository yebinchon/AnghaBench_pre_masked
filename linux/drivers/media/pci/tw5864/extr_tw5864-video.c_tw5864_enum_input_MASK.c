
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_input {int status; int std; int name; int type; scalar_t__ index; } ;
struct tw5864_input {int nr; struct tw5864_dev* root; } ;
struct tw5864_dev {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int,char*,int) ;
 int FUNC_3 (int ) ;
 struct tw5864_input* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_8, void *VAR_9,
        struct v4l2_input *VAR_10)
{
 struct tw5864_input *VAR_11 = FUNC_4(VAR_8);
 struct tw5864_dev *VAR_12 = VAR_11->root;

 u8 VAR_13 = FUNC_3(FUNC_0(VAR_11->nr));
 u8 VAR_14 = FUNC_3(FUNC_1(VAR_11->nr));
 u8 VAR_15 = VAR_13;
 u8 VAR_16 = VAR_14;

 if (VAR_10->index)
  return -VAR_0;

 VAR_10->type = VAR_2;
 FUNC_2(VAR_10->name, sizeof(VAR_10->name), "Encoder %d", VAR_11->nr);
 VAR_10->std = VAR_1;
 if (VAR_15 & (1 << 7))
  VAR_10->status |= VAR_7;
 if (!(VAR_15 & (1 << 6)))
  VAR_10->status |= VAR_5;
 if (VAR_15 & (1 << 2))
  VAR_10->status |= VAR_6;
 if (VAR_15 & (1 << 1))
  VAR_10->status |= VAR_4;
 if (VAR_16 & (1 << 2))
  VAR_10->status |= VAR_3;

 return 0;
}
