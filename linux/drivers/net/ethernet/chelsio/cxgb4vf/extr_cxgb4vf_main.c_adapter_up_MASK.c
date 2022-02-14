
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adapter {int flags; int pdev_dev; int name; TYPE_1__* pdev; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (int ,int ,int ,int ,struct adapter*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*) ;
 int FUNC_9 (struct adapter*) ;
 int FUNC_10 (struct adapter*) ;

__attribute__((used)) static int FUNC_11(struct adapter *VAR_3)
{
 int VAR_4;






 if ((VAR_3->flags & VAR_0) == 0) {
  VAR_4 = FUNC_7(VAR_3);
  if (VAR_4)
   return VAR_4;
  VAR_4 = FUNC_6(VAR_3);
  if (VAR_4) {
   FUNC_8(VAR_3);
   return VAR_4;
  }

  if (VAR_3->flags & VAR_2)
   FUNC_3(VAR_3);

  VAR_3->flags |= VAR_0;
 }




 FUNC_0((VAR_3->flags &
        (VAR_2 | VAR_1)) == 0);
 if (VAR_3->flags & VAR_2)
  VAR_4 = FUNC_5(VAR_3);
 else
  VAR_4 = FUNC_4(VAR_3->pdev->irq,
      FUNC_9(VAR_3), 0,
      VAR_3->name, VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_3->pdev_dev, "request_irq failed, err %d\n",
   VAR_4);
  return VAR_4;
 }




 FUNC_2(VAR_3);
 FUNC_10(VAR_3);

 return 0;
}
