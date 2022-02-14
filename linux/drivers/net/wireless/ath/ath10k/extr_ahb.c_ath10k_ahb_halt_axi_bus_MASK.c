
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*,int) ;
 int FUNC_1 (struct ath10k*,int,int) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 unsigned long VAR_4 ;
 int FUNC_4 (int) ;
 unsigned long FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct ath10k *VAR_5, u32 VAR_6,
        u32 VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9;


 VAR_9 = FUNC_0(VAR_5, VAR_6);
 VAR_9 |= VAR_1;
 FUNC_1(VAR_5, VAR_6, VAR_9);


 VAR_8 = VAR_4 + FUNC_5(VAR_2);
 do {
  VAR_9 = FUNC_0(VAR_5, VAR_7);
  if (VAR_9 & VAR_0)
   break;

  FUNC_4(1);
 } while (FUNC_6(VAR_4, VAR_8));

 if (!(VAR_9 & VAR_0)) {
  FUNC_3(VAR_5, "failed to halt axi bus: %d\n", VAR_9);
  return;
 }

 FUNC_2(VAR_5, VAR_3, "axi bus halted\n");
}
