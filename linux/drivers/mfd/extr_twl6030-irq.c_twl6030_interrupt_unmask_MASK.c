
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;

int FUNC_2(u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_0(VAR_1, &VAR_5,
   VAR_0 + VAR_3);
 VAR_5 &= (~(VAR_2));
 VAR_4 |= FUNC_1(VAR_1, VAR_5,
   VAR_0 + VAR_3);
 return VAR_4;
}
