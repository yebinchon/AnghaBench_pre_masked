
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ns_thermal {scalar_t__ pvtmon; int tz; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, int *VAR_5)
{
 struct ns_thermal *VAR_6 = VAR_4;
 int VAR_7 = FUNC_1(VAR_6->tz);
 int VAR_8 = FUNC_2(VAR_6->tz);
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_6->pvtmon + VAR_0);
 if ((VAR_9 & VAR_1) != VAR_2) {

  VAR_9 &= ~VAR_1;


  VAR_9 |= VAR_2;

  FUNC_3(VAR_9, VAR_6->pvtmon + VAR_0);
 }

 VAR_9 = FUNC_0(VAR_6->pvtmon + VAR_3);
 *VAR_5 = VAR_8 * VAR_9 + VAR_7;

 return 0;
}
