
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {int dev; scalar_t__ bar; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct nvme_dev *VAR_0)
{
 if (VAR_0->bar)
  FUNC_0(VAR_0->bar);
 FUNC_1(FUNC_2(VAR_0->dev));
}
