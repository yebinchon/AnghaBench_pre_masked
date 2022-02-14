
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_queue {int dummy; } ;
struct tap_dev {int dummy; } ;
struct file {struct tap_queue* private_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct tap_queue*) ;
 int FUNC_1 (struct tap_dev*,struct file*,struct tap_queue*) ;
 struct tap_dev* FUNC_2 (struct tap_queue*) ;
 int FUNC_3 (struct tap_dev*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, unsigned int VAR_4)
{
 struct tap_queue *VAR_5 = VAR_3->private_data;
 struct tap_dev *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_5);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_4 & VAR_1)
  VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_5);
 else if (VAR_4 & VAR_2)
  VAR_7 = FUNC_0(VAR_5);
 else
  VAR_7 = -VAR_0;

 FUNC_3(VAR_6);
 return VAR_7;
}
