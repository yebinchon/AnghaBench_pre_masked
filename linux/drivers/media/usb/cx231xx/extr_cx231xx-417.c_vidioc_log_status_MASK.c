
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;


 int FUNC_0 (struct cx231xx*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct file*,void*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3)
{
 struct cx231xx_fh *VAR_4 = VAR_3;
 struct cx231xx *VAR_5 = VAR_4->dev;

 FUNC_0(VAR_5, VAR_0, VAR_1);
 return FUNC_1(VAR_2, VAR_3);
}
