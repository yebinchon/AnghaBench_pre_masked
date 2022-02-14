
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ir_raw_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ir_raw_event**,unsigned int*,int ,unsigned int const) ;
 unsigned int* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct ir_raw_event **VAR_5, unsigned int VAR_6,
         unsigned int VAR_7, u32 VAR_8)
{
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_5, &VAR_6, VAR_0, VAR_1);
 if (VAR_10)
  return VAR_10;

 for (VAR_9 = VAR_7 - 2; VAR_9 >= 0; VAR_9 -= 2) {
  const unsigned int VAR_11 = VAR_4[(VAR_8 >> VAR_9) & 3];

  VAR_10 = FUNC_0(VAR_5, &VAR_6, VAR_3, VAR_11);
  if (VAR_10)
   return VAR_10;
 }

 return FUNC_0(VAR_5, &VAR_6, VAR_3, VAR_2 * 2);
}
