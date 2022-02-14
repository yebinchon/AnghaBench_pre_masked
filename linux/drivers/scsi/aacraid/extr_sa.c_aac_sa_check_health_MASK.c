
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_dev {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 long FUNC_0 (struct aac_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct aac_dev *VAR_4)
{
 long VAR_5 = FUNC_0(VAR_4, VAR_2);




 if (VAR_5 & VAR_3)
  return -1;



 if (VAR_5 & VAR_0)
  return -2;



 if (!(VAR_5 & VAR_1))
  return -3;



 return 0;
}
