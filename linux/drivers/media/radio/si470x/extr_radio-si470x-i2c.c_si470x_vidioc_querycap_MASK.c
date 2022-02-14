
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int card; int driver; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
      struct v4l2_capability *VAR_4)
{
 FUNC_0(VAR_4->driver, VAR_1, sizeof(VAR_4->driver));
 FUNC_0(VAR_4->card, VAR_0, sizeof(VAR_4->card));
 return 0;
}
