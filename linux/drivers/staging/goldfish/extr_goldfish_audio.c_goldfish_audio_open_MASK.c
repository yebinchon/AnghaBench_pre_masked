
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* private_data; } ;
struct TYPE_3__ {int buffer_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_8, struct file *VAR_9)
{
 if (!VAR_6)
  return -VAR_5;

 if (FUNC_1(&VAR_7) == 1) {
  VAR_9->private_data = VAR_6;
  VAR_6->buffer_status = (VAR_2 |
          VAR_3);
  FUNC_2(VAR_6, VAR_0, VAR_1);
  return 0;
 }

 FUNC_0(&VAR_7);
 return -VAR_4;
}
