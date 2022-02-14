
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_hw {int enabled; } ;
struct dev_info {int rx_tasklet; int hwlock; int (* dev_rcv ) (struct dev_info*) ;struct ksz_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ksz_hw*,int ) ;
 int FUNC_1 (struct ksz_hw*) ;
 int FUNC_2 (struct ksz_hw*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dev_info*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_2)
{
 struct dev_info *VAR_3 = (struct dev_info *) VAR_2;
 struct ksz_hw *VAR_4 = &VAR_3->hw;

 if (!VAR_4->enabled)
  return;
 if (FUNC_7(!VAR_3->dev_rcv(VAR_3))) {


  FUNC_1(VAR_4);


  FUNC_3(&VAR_3->hwlock);
  FUNC_2(VAR_4, VAR_1);
  FUNC_4(&VAR_3->hwlock);
 } else {
  FUNC_0(VAR_4, VAR_0);
  FUNC_6(&VAR_3->rx_tasklet);
 }
}
