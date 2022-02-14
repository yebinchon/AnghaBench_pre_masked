
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ath_softc {int * rng_task; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (struct ath_softc*,scalar_t__*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (int ,int,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(void *VAR_3)
{
 int VAR_4;
 struct ath_softc *VAR_5 = VAR_3;
 u32 *VAR_6;
 u32 VAR_7, VAR_8 = 0;

 VAR_6 = FUNC_5(VAR_0, sizeof(u32), VAR_1);
 if (!VAR_6)
  goto out;

 while (!FUNC_6()) {
  VAR_4 = FUNC_2(VAR_5, VAR_6,
       VAR_0);
  if (FUNC_8(!VAR_4)) {
   VAR_7 = FUNC_3(++VAR_8);
   FUNC_9(VAR_2,
        FUNC_6(),
        FUNC_7(VAR_7));
   continue;
  }

  VAR_8 = 0;


  FUNC_1((void *)VAR_6, VAR_4,
        FUNC_0(VAR_4));
 }

 FUNC_4(VAR_6);
out:
 VAR_5->rng_task = ((void*)0);

 return 0;
}
