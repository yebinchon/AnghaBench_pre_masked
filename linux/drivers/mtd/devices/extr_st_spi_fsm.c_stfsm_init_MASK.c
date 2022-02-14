
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stfsm {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct stfsm*) ;
 int FUNC_1 (struct stfsm*,int ) ;
 int FUNC_2 (struct stfsm*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct stfsm *VAR_12)
{
 int VAR_13;


 FUNC_4(VAR_0, VAR_12->base + VAR_6);
 FUNC_3(1);
 FUNC_4(0, VAR_12->base + VAR_6);


 FUNC_1(VAR_12, VAR_11);


 VAR_13 = FUNC_2(VAR_12, VAR_7);
 if (VAR_13)
  return VAR_13;


 FUNC_4(VAR_4 |
        VAR_3 |
        VAR_1 |
        VAR_2,
        VAR_12->base + VAR_5);
 FUNC_4(VAR_10, VAR_12->base + VAR_9);






 FUNC_4(0x00000001, VAR_12->base + VAR_8);


 FUNC_0(VAR_12);

 return 0;
}
