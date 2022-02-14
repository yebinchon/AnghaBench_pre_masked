
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {unsigned int index; int std; int status; int name; int type; } ;
struct tw68_dev {unsigned int input; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int tvnorms; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int,char*,unsigned int) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct file*) ;
 struct tw68_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_10, void *VAR_11,
     struct v4l2_input *VAR_12)
{
 struct tw68_dev *VAR_13 = FUNC_3(VAR_10);
 unsigned int VAR_14;

 VAR_14 = VAR_12->index;
 if (VAR_14 >= VAR_1)
  return -VAR_0;
 VAR_12->index = VAR_14;
 VAR_12->type = VAR_4;
 FUNC_0(VAR_12->name, sizeof(VAR_12->name), "Composite %d", VAR_14);


 if (VAR_14 == VAR_13->input) {
  int VAR_15 = FUNC_1(VAR_3);
  int VAR_16 = FUNC_1(VAR_2);

  if (0 != (VAR_15 & (1 << 7)))
   VAR_12->status |= VAR_9;
  if (0 != (VAR_15 & (1 << 6)))
   VAR_12->status |= VAR_7;
  if (0 != (VAR_15 & (1 << 2)))
   VAR_12->status |= VAR_8;
  if (0 != (VAR_15 & 1 << 1))
   VAR_12->status |= VAR_6;
  if (0 != (VAR_16 & (1 << 2)))
   VAR_12->status |= VAR_5;
 }
 VAR_12->std = FUNC_2(VAR_10)->tvnorms;
 return 0;
}
