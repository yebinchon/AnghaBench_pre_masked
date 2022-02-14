
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stfsm {scalar_t__ base; int dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__,int*,int) ;
 int FUNC_4 (struct stfsm*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct stfsm *VAR_1, uint32_t *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4 = VAR_3 >> 2;
 uint32_t VAR_5;
 uint32_t VAR_6;

 FUNC_1(VAR_1->dev, "Reading %d bytes from FIFO\n", VAR_3);

 FUNC_0((((uintptr_t)VAR_2) & 0x3) || (VAR_3 & 0x3));

 while (VAR_4) {
  for (;;) {
   VAR_5 = FUNC_4(VAR_1);
   if (VAR_5)
    break;
   FUNC_5(1);
  }
  VAR_6 = FUNC_2(VAR_5, VAR_4);
  VAR_4 -= VAR_6;

  FUNC_3(VAR_1->base + VAR_0, VAR_2, VAR_6);
  VAR_2 += VAR_6;
 }
}
