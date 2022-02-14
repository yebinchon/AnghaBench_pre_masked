
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_device {int dev; } ;
struct scm_blk_dev {int dummy; } ;


 struct scm_blk_dev* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct scm_blk_dev*) ;
 int FUNC_3 (struct scm_blk_dev*) ;

__attribute__((used)) static int FUNC_4(struct scm_device *VAR_0)
{
 struct scm_blk_dev *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_3(VAR_1);
 FUNC_1(&VAR_0->dev, ((void*)0));
 FUNC_2(VAR_1);

 return 0;
}
