
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct rvin_dev {int std; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 struct rvin_dev* FUNC_1 (struct file*) ;
 int FUNC_2 (struct rvin_dev*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4, v4l2_std_id *VAR_5)
{
 struct rvin_dev *VAR_6 = FUNC_1(VAR_3);

 if (FUNC_0(FUNC_2(VAR_6), VAR_2, VAR_1))
  return -VAR_0;

 *VAR_5 = VAR_6->std;

 return 0;
}
