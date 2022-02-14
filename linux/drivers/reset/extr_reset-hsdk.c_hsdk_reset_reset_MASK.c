
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct hsdk_rst {int lock; } ;


 int FUNC_0 (struct hsdk_rst*,unsigned long) ;
 int FUNC_1 (struct hsdk_rst*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct hsdk_rst* FUNC_4 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_5(struct reset_controller_dev *VAR_0,
         unsigned long VAR_1)
{
 struct hsdk_rst *VAR_2 = FUNC_4(VAR_0);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_0(VAR_2, VAR_1);
 VAR_4 = FUNC_1(VAR_2);
 FUNC_3(&VAR_2->lock, VAR_3);

 return VAR_4;
}
