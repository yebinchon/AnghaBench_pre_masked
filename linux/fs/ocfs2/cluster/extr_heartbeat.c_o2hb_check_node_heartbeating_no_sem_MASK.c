
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int testing_map ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (unsigned long*,int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,unsigned long*) ;

int FUNC_6(u8 VAR_3)
{
 unsigned long VAR_4[FUNC_0(VAR_1)];

 FUNC_3(&VAR_2);
 FUNC_2(VAR_4, sizeof(VAR_4));
 FUNC_4(&VAR_2);
 if (!FUNC_5(VAR_3, VAR_4)) {
  FUNC_1(VAR_0,
       "node (%u) does not have heartbeating enabled.\n",
       VAR_3);
  return 0;
 }

 return 1;
}
