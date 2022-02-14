
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __le16 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline __le16 *
FUNC_3(register __le16 *VAR_0)
{
 register __le16 *VAR_1;

 VAR_1 = VAR_0;
 while (*VAR_1) {
  *VAR_1 = FUNC_1(FUNC_0(FUNC_2(*VAR_1)));
  VAR_1++;
 }
 return VAR_0;
}
