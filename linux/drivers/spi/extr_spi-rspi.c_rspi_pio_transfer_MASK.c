
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rspi_data {int dummy; } ;


 int FUNC_0 (struct rspi_data*) ;
 int FUNC_1 (struct rspi_data*,int ) ;

__attribute__((used)) static int FUNC_2(struct rspi_data *VAR_0, const u8 *VAR_1, u8 *VAR_2,
        unsigned int VAR_3)
{
 while (VAR_3-- > 0) {
  if (VAR_1) {
   int VAR_4 = FUNC_1(VAR_0, *VAR_1++);
   if (VAR_4 < 0)
    return VAR_4;
  }
  if (VAR_2) {
   int VAR_5 = FUNC_0(VAR_0);
   if (VAR_5 < 0)
    return VAR_5;
   *VAR_2++ = VAR_5;
  }
 }

 return 0;
}
