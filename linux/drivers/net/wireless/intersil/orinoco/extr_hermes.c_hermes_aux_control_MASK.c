
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hermes {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct hermes*,int ) ;
 int FUNC_1 (struct hermes*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int
FUNC_3(struct hermes *VAR_12, int VAR_13)
{
 int VAR_14 = VAR_13 ? VAR_4 : VAR_2;
 int VAR_15 = VAR_13 ? VAR_3 : VAR_1;
 int VAR_16;


 if (FUNC_0(VAR_12, VAR_8) == VAR_14)
  return 0;

 FUNC_1(VAR_12, VAR_9, VAR_5);
 FUNC_1(VAR_12, VAR_10, VAR_6);
 FUNC_1(VAR_12, VAR_11, VAR_7);
 FUNC_1(VAR_12, VAR_8, VAR_15);

 for (VAR_16 = 0; VAR_16 < 20; VAR_16++) {
  FUNC_2(10);
  if (FUNC_0(VAR_12, VAR_8) ==
      VAR_14)
   return 0;
 }

 return -VAR_0;
}
