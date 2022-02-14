
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int std; } ;
struct TYPE_2__ {int v4l2_id; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct bttv*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4, v4l2_std_id VAR_5)
{
 struct bttv_fh *VAR_6 = VAR_4;
 struct bttv *VAR_7 = VAR_6->btv;
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  if (VAR_5 & VAR_2[VAR_8].v4l2_id)
   break;
 if (VAR_8 == VAR_0)
  return -VAR_1;
 VAR_7->std = VAR_5;
 FUNC_0(VAR_7, VAR_8);
 return 0;
}
