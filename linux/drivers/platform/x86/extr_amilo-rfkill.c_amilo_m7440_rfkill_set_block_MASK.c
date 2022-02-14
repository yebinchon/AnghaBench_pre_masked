
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_7, bool VAR_8)
{
 u8 VAR_9 = VAR_8 ? VAR_3 : VAR_5;
 u8 VAR_10 = VAR_8 ? VAR_4 : VAR_6;

 FUNC_1(VAR_9, VAR_1);
 FUNC_1(VAR_10, VAR_2);


 if (FUNC_0(VAR_1) != VAR_9 || FUNC_0(VAR_2) != VAR_10)
  return -VAR_0;

 return 0;
}
