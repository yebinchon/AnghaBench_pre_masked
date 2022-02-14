
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdw_cdns {void** response_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct sdw_cdns*,int) ;

__attribute__((used)) static void FUNC_1(struct sdw_cdns *VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 VAR_5 &= VAR_3;

 VAR_6 = VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_4->response_buf[VAR_7] = FUNC_0(VAR_4, VAR_6);
  VAR_6 += VAR_1;
 }
}
