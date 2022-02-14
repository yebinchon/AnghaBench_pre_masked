
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct jz4740_mmc_host {int timeout_timer; int waiting; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct jz4740_mmc_host*) ;
 int FUNC_1 (struct jz4740_mmc_host*,unsigned int,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static unsigned int FUNC_4(struct jz4740_mmc_host *VAR_2,
 unsigned int VAR_3)
{
 unsigned int VAR_4 = 0x800;
 uint32_t VAR_5;

 do {
  VAR_5 = FUNC_0(VAR_2);
 } while (!(VAR_5 & VAR_3) && --VAR_4);

 if (VAR_4 == 0) {
  FUNC_3(0, &VAR_2->waiting);
  FUNC_2(&VAR_2->timeout_timer, VAR_1 + 5*VAR_0);
  FUNC_1(VAR_2, VAR_3, 1);
  return 1;
 }

 return 0;
}
