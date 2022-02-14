
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static int FUNC_2(unsigned int *VAR_1,
    unsigned int VAR_2, int VAR_3)
{
 int VAR_4;

 switch (VAR_2 & VAR_0) {
 case 129:
 default:
  VAR_4 = FUNC_0(*VAR_1, VAR_3);
  break;
 case 130:
  VAR_4 = (*VAR_1) / VAR_3;
  break;
 case 128:
  VAR_4 = FUNC_1(*VAR_1, VAR_3);
  break;
 }
 if (VAR_4 < 2)
  VAR_4 = 2;






 *VAR_1 = VAR_3 * VAR_4;
 return VAR_4 - 1;
}
