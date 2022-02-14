
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_queue {int tap; } ;
struct tap_dev {int dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 struct tap_dev* FUNC_2 (int ) ;

__attribute__((used)) static struct tap_dev *FUNC_3(struct tap_queue *VAR_0)
{
 struct tap_dev *VAR_1;

 FUNC_0();
 VAR_1 = FUNC_2(VAR_0->tap);
 if (VAR_1)
  FUNC_1(VAR_1->dev);

 return VAR_1;
}
