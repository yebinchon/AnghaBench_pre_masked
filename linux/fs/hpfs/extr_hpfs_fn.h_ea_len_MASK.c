
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extended_attribute {int namelen; } ;
typedef int secno ;
typedef int __le32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline secno FUNC_2(struct extended_attribute *VAR_0)
{
 return FUNC_1(FUNC_0((__le32 *)((char *)VAR_0 + 5 + VAR_0->namelen)));
}
