
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct em28xx {TYPE_1__* v4l2; } ;
struct TYPE_2__ {int v4l2_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int *) ;
 int VAR_1 ;
 struct em28xx* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, v4l2_std_id *VAR_4)
{
 struct em28xx *VAR_5 = FUNC_1(VAR_2);

 FUNC_0(&VAR_5->v4l2->v4l2_dev, 0, VAR_1, VAR_0, VAR_4);

 return 0;
}
