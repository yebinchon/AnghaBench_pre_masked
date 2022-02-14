
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__*,int,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(void)
{
 u8 VAR_1 = 0, VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_1, 1,
    &VAR_2, 1);
 if (VAR_3 < 0)
  return VAR_3;

 return (int) VAR_2 / 31;
}
