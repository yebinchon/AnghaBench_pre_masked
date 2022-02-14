
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {scalar_t__ write32_tx_mbox; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (struct tg3*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_4(struct tg3 *VAR_3)
{
 FUNC_0(FUNC_2(VAR_3, VAR_0) ||
        VAR_3->write32_tx_mbox == VAR_2);

 FUNC_1(VAR_3->dev,
      "The system may be re-ordering memory-mapped I/O "
      "cycles to the network device, attempting to recover. "
      "Please report the problem to the driver maintainer "
      "and include system chipset information.\n");

 FUNC_3(VAR_3, VAR_1);
}
