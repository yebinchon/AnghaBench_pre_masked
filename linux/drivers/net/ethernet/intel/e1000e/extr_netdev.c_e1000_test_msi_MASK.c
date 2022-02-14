
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_adapter {int flags; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct e1000_adapter *VAR_3)
{
 int VAR_4;
 u16 VAR_5;

 if (!(VAR_3->flags & VAR_0))
  return 0;


 FUNC_1(VAR_3->pdev, VAR_1, &VAR_5);
 if (VAR_5 & VAR_2)
  FUNC_2(VAR_3->pdev, VAR_1,
          VAR_5 & ~VAR_2);

 VAR_4 = FUNC_0(VAR_3);


 if (VAR_5 & VAR_2) {
  FUNC_1(VAR_3->pdev, VAR_1, &VAR_5);
  VAR_5 |= VAR_2;
  FUNC_2(VAR_3->pdev, VAR_1, VAR_5);
 }

 return VAR_4;
}
