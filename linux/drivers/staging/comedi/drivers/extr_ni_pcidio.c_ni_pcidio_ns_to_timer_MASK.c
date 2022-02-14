
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(int *VAR_2, unsigned int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = VAR_1;

 switch (VAR_3 & VAR_0) {
 case 129:
 default:
  VAR_4 = FUNC_0(*VAR_2, VAR_5);
  break;
 case 130:
  VAR_4 = (*VAR_2) / VAR_5;
  break;
 case 128:
  VAR_4 = FUNC_1(*VAR_2, VAR_5);
  break;
 }

 *VAR_2 = VAR_5 * VAR_4;
 return VAR_4;
}
