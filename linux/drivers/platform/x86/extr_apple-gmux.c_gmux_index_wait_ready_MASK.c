
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct apple_gmux_data {scalar_t__ iostart; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct apple_gmux_data *VAR_2)
{
 int VAR_3 = 200;
 u8 VAR_4 = FUNC_0(VAR_2->iostart + VAR_1);

 while (VAR_3 && (VAR_4 & 0x01)) {
  FUNC_0(VAR_2->iostart + VAR_0);
  VAR_4 = FUNC_0(VAR_2->iostart + VAR_1);
  FUNC_1(100);
  VAR_3--;
 }

 return !!VAR_3;
}
