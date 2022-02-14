
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 switch (VAR_2) {
 case 129:
  VAR_4 = FUNC_0(VAR_3, VAR_1);
  break;
 case 128:
  VAR_4 = FUNC_1(VAR_3, VAR_1);
  break;
 case 130:
  VAR_4 = VAR_3 / VAR_1;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_4 < 1)
  VAR_4 = 1;
 if (VAR_4 > 0xffff)
  VAR_4 = 0xffff;

 return VAR_4;
}
