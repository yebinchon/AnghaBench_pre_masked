
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __le16 ;


 int FUNC_0 () ;
 unsigned int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;

__attribute__((used)) static inline unsigned FUNC_3(__le16 **VAR_0, unsigned VAR_1)
{
 unsigned VAR_2;

 switch (VAR_1) {
 case 1:
  VAR_2 = FUNC_1(*VAR_0);
  break;
 case 2:
  VAR_2 = FUNC_2(*VAR_0);
  break;
 default:
  FUNC_0();
 }

 *VAR_0 += VAR_1;
 return VAR_2;
}
