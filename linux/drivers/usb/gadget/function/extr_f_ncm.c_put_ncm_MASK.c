
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int __le16 ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(__le16 **VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 switch (VAR_1) {
 case 1:
  FUNC_1((u16)VAR_2, *VAR_0);
  break;
 case 2:
  FUNC_2((u32)VAR_2, *VAR_0);

  break;
 default:
  FUNC_0();
 }

 *VAR_0 += VAR_1;
}
