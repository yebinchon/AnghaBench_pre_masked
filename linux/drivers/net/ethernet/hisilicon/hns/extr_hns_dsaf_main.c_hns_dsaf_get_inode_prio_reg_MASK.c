
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_0(int VAR_4)
{
 int VAR_5, VAR_6;
 u32 VAR_7 = VAR_1;

 VAR_5 = (VAR_4 + 1) / VAR_3;
 VAR_6 = (VAR_4 + 1) % VAR_3;

 return VAR_7 + VAR_0 * VAR_5 +
  VAR_2 * VAR_6;
}
