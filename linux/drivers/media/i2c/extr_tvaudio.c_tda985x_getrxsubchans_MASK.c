
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CHIPSTATE {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct CHIPSTATE*) ;

__attribute__((used)) static int FUNC_1(struct CHIPSTATE *VAR_5)
{
 int VAR_6, VAR_7;



 VAR_6 = VAR_2;
 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 < 0)
  return VAR_6;

 if (VAR_7 & VAR_1)
  VAR_6 = VAR_4;
 if (VAR_7 & VAR_0)
  VAR_6 |= VAR_3;
 return VAR_6;
}
