
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stfsm_seq {int dummy; } ;
struct stfsm {int dev; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct stfsm*) ;
 int FUNC_4 (struct stfsm*,struct stfsm_seq const*) ;
 struct stfsm_seq VAR_1 ;
 int FUNC_5 (struct stfsm*) ;

__attribute__((used)) static void FUNC_6(struct stfsm *VAR_2)
{
 const struct stfsm_seq *VAR_3 = &VAR_1;
 uint32_t VAR_4, VAR_5;


 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4) {
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   FUNC_2(VAR_2->base + VAR_0);
  FUNC_0(VAR_2->dev, "cleared %d words from FIFO\n", VAR_4);
 }






 for (VAR_5 = 0, VAR_4 = 0; VAR_5 < 4 && !VAR_4; VAR_5++) {
  FUNC_4(VAR_2, VAR_3);
  FUNC_5(VAR_2);
  VAR_4 = FUNC_3(VAR_2);
 }


 if (VAR_4 != 1) {
  FUNC_1(VAR_2->dev, "failed to clear bytes from the data FIFO\n");
  return;
 }


 FUNC_2(VAR_2->base + VAR_0);

 FUNC_0(VAR_2->dev, "cleared %d byte(s) from the data FIFO\n", 4 - VAR_5);
}
