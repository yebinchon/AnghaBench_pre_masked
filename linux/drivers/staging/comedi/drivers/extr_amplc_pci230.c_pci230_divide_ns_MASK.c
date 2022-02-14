
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;



 unsigned int VAR_0 ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_2 (scalar_t__,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(u64 VAR_2, unsigned int VAR_3,
         unsigned int VAR_4)
{
 u64 VAR_5;
 unsigned int VAR_6;

 VAR_5 = VAR_2;
 VAR_6 = FUNC_2(VAR_5, VAR_3);
 switch (VAR_4 & VAR_0) {
 default:
 case 129:
  VAR_5 += FUNC_0(VAR_6, VAR_3);
  break;
 case 130:
  break;
 case 128:
  VAR_5 += FUNC_1(VAR_6, VAR_3);
  break;
 }
 return VAR_5 > VAR_1 ? VAR_1 : (unsigned int)VAR_5;
}
