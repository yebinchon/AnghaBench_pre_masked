
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ab8500 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ab8500*,int,int) ;
 int FUNC_2 (struct ab8500*,int ,scalar_t__,int*) ;
 int FUNC_3 (int*,int) ;

__attribute__((used)) static int FUNC_4(struct ab8500 *VAR_2,
     int VAR_3, u8 VAR_4)
{
 int VAR_5, VAR_6;
 u8 VAR_7, VAR_8;

 do {
  VAR_5 = FUNC_0(VAR_4);
  VAR_7 = (VAR_3 << 3) + VAR_5;

  FUNC_3(&VAR_7, VAR_3);

  VAR_6 = FUNC_2(VAR_2,
    VAR_0,
    VAR_1 + VAR_7,
    &VAR_8);
  if (VAR_6 < 0 || VAR_8 == 0)
   goto discard;

  VAR_6 = FUNC_1(VAR_2,
    VAR_7, VAR_8);
  if (VAR_6 < 0)
   return VAR_6;
discard:
  VAR_4 &= ~(1 << VAR_5);
 } while (VAR_4);

 return 0;
}
