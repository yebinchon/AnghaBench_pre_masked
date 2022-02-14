
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct rvin_dev {int std; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct rvin_dev*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_1 ;
 struct rvin_dev* FUNC_2 (struct file*) ;
 int FUNC_3 (struct rvin_dev*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3, v4l2_std_id VAR_4)
{
 struct rvin_dev *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_1(FUNC_3(VAR_5), VAR_1, VAR_0, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5->std = VAR_4;


 return FUNC_0(VAR_5);
}
