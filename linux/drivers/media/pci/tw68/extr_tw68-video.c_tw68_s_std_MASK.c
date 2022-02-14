
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct tw68_dev {int vidq; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct tw68_dev*,TYPE_1__*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 struct tw68_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5, v4l2_std_id VAR_6)
{
 struct tw68_dev *VAR_7 = FUNC_2(VAR_4);
 unsigned int VAR_8;

 if (FUNC_1(&VAR_7->vidq))
  return -VAR_0;


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_6 == VAR_3[VAR_8].id)
   break;
 }


 if (VAR_8 == VAR_2) {
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   if (VAR_6 & VAR_3[VAR_8].id)
    break;
 }

 if (VAR_8 == VAR_2)
  return -VAR_1;

 FUNC_0(VAR_7, &VAR_3[VAR_8]);
 return 0;
}
