
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ci_hdrc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ci_hdrc*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2(struct ci_hdrc *VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 u32 VAR_14, VAR_15;

 if (VAR_12 == VAR_9) {
  VAR_14 = VAR_7;
  VAR_15 = VAR_13 << FUNC_0(VAR_14);

  VAR_14 |= VAR_6;
  VAR_14 |= VAR_5;
  VAR_15 |= VAR_5;
  VAR_14 |= VAR_4;
  VAR_15 |= VAR_4;
 } else {
  VAR_14 = VAR_3;
  VAR_15 = VAR_13 << FUNC_0(VAR_14);

  VAR_14 |= VAR_2;
  VAR_14 |= VAR_1;
  VAR_15 |= VAR_1;
  VAR_14 |= VAR_0;
  VAR_15 |= VAR_0;
 }
 FUNC_1(VAR_10, VAR_8 + VAR_11, VAR_14, VAR_15);
 return 0;
}
