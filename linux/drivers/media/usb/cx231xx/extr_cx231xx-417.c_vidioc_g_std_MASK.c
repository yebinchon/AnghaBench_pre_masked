
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct TYPE_2__ {int id; } ;
struct cx231xx {TYPE_1__ encodernorm; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct cx231xx_fh *VAR_3 = VAR_0->private_data;
 struct cx231xx *VAR_4 = VAR_3->dev;

 *VAR_2 = VAR_4->encodernorm.id;
 return 0;
}
