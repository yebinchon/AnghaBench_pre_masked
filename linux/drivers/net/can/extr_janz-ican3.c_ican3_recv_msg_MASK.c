
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ican3_msg {int dummy; } ;
struct ican3_dev {scalar_t__ iftype; int lock; } ;


 int FUNC_0 (struct ican3_dev*,struct ican3_msg*) ;
 int FUNC_1 (struct ican3_dev*,struct ican3_msg*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ican3_dev *VAR_0, struct ican3_msg *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_2(&VAR_0->lock, VAR_2);

 if (VAR_0->iftype == 0)
  VAR_3 = FUNC_1(VAR_0, VAR_1);
 else
  VAR_3 = FUNC_0(VAR_0, VAR_1);

 FUNC_3(&VAR_0->lock, VAR_2);
 return VAR_3;
}
