
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stfsm_seq {int dummy; } ;
struct stfsm {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct stfsm*,struct stfsm_seq const*) ;
 struct stfsm_seq VAR_0 ;
 int FUNC_2 (struct stfsm*) ;
 int FUNC_3 (struct stfsm*) ;

__attribute__((used)) static int FUNC_4(struct stfsm *VAR_1)
{
 const struct stfsm_seq *VAR_2 = &VAR_0;

 FUNC_0(VAR_1->dev, "erasing chip\n");

 FUNC_1(VAR_1, VAR_2);

 FUNC_3(VAR_1);

 return FUNC_2(VAR_1);
}
