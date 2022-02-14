
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vcap_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vcap_data*,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct vcap_data *VAR_1, u32 VAR_2, u8 *VAR_3,
          u8 *VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;




 VAR_2 += (VAR_5 * 8);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = (VAR_5 - VAR_6 - 1);
  VAR_9 += (VAR_3[VAR_7] << VAR_8);
  VAR_10 += (VAR_4[VAR_7] << VAR_8);
  VAR_8 += 8;
  if (VAR_8 == VAR_0 || (VAR_6 + 1) == VAR_5) {
   VAR_2 -= VAR_8;
   FUNC_0(VAR_1, VAR_2, VAR_8, VAR_9, VAR_10);
   VAR_8 = 0;
   VAR_9 = 0;
   VAR_10 = 0;
  }
 }
}
