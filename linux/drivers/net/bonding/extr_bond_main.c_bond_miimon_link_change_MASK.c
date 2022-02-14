
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {int dummy; } ;
struct bonding {int dummy; } ;


 int FUNC_0 (struct bonding*) ;




 int FUNC_1 (struct slave*,char) ;
 int FUNC_2 (struct bonding*,struct slave*,char) ;
 int FUNC_3 (struct bonding*,int *) ;

__attribute__((used)) static void FUNC_4(struct bonding *VAR_0,
        struct slave *VAR_1,
        char VAR_2)
{
 switch (FUNC_0(VAR_0)) {
 case 131:
  FUNC_1(VAR_1, VAR_2);
  break;
 case 129:
 case 130:
  FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 case 128:
  FUNC_3(VAR_0, ((void*)0));
  break;
 }
}
