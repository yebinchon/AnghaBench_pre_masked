
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_adapter {int ena_dev; int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct ena_adapter *VAR_4 = (struct ena_adapter *)VAR_3;

 FUNC_0(VAR_4->ena_dev);


 if (FUNC_2(FUNC_3(VAR_0, &VAR_4->flags)))
  FUNC_1(VAR_4->ena_dev, VAR_3);

 return VAR_1;
}
