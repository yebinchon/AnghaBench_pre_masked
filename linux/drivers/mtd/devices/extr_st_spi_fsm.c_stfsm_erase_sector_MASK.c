
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stfsm_seq {int addr1; int addr2; } ;
struct stfsm {int configuration; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct stfsm*,int) ;
 int FUNC_2 (struct stfsm*,struct stfsm_seq*) ;
 int FUNC_3 (struct stfsm*) ;
 struct stfsm_seq VAR_2 ;
 int FUNC_4 (struct stfsm*) ;
 int FUNC_5 (struct stfsm*) ;

__attribute__((used)) static int FUNC_6(struct stfsm *VAR_3, uint32_t VAR_4)
{
 struct stfsm_seq *VAR_5 = &VAR_2;
 int VAR_6;

 FUNC_0(VAR_3->dev, "erasing sector at 0x%08x\n", VAR_4);


 if (VAR_3->configuration & VAR_0)
  FUNC_1(VAR_3, 1);

 VAR_5->addr1 = (VAR_4 >> 16) & 0xffff;
 VAR_5->addr2 = VAR_4 & 0xffff;

 FUNC_2(VAR_3, VAR_5);

 FUNC_5(VAR_3);


 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6 && VAR_3->configuration & VAR_1)
  FUNC_3(VAR_3);


 if (VAR_3->configuration & VAR_0)
  FUNC_1(VAR_3, 0);

 return VAR_6;
}
