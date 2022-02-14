
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_msr_id {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct meson_msr_id*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct meson_msr_id *VAR_4,
        unsigned int *VAR_5)
{
 unsigned int VAR_6 = VAR_0;
 int VAR_7;


 do {
  VAR_7 = FUNC_0(VAR_4, VAR_6);
  if (VAR_7 >= 0)
   *VAR_5 = (2 * 1000000) / VAR_6;
  else
   VAR_6 -= VAR_2;
 } while (VAR_6 >= VAR_1 && VAR_7 == -VAR_3);

 return VAR_7;
}
