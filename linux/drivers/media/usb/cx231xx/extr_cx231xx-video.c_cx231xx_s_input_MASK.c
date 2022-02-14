
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int norm; scalar_t__ mode_tv; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (unsigned int) ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct cx231xx*,int ,int ,int ) ;
 int FUNC_2 (struct cx231xx*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct cx231xx*,unsigned int) ;

int FUNC_4(struct file *VAR_6, void *VAR_7, unsigned int VAR_8)
{
 struct cx231xx_fh *VAR_9 = VAR_7;
 struct cx231xx *VAR_10 = VAR_9->dev;
 int VAR_11;

 VAR_10->mode_tv = 0;
 VAR_11 = FUNC_2(VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_8 >= VAR_3)
  return -VAR_2;
 if (0 == FUNC_0(VAR_8)->type)
  return -VAR_2;

 FUNC_3(VAR_10, VAR_8);

 if (FUNC_0(VAR_8)->type == VAR_1 ||
     FUNC_0(VAR_8)->type == VAR_0) {



  FUNC_1(VAR_10, VAR_5, VAR_4, VAR_10->norm);
 }

 return 0;
}
