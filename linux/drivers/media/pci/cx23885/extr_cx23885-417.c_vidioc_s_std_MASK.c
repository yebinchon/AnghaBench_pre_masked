
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct TYPE_3__ {int id; } ;
struct cx23885_dev {TYPE_1__ encodernorm; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct cx23885_dev*,int) ;
 TYPE_1__* VAR_1 ;
 struct cx23885_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, v4l2_std_id VAR_4)
{
 struct cx23885_dev *VAR_5 = FUNC_2(VAR_2);
 unsigned int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++)
  if (VAR_4 & VAR_1[VAR_6].id)
   break;
 if (VAR_6 == FUNC_0(VAR_1))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5, VAR_4);
 if (!VAR_7)
  VAR_5->encodernorm = VAR_1[VAR_6];
 return VAR_7;
}
