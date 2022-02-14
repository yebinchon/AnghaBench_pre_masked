
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extended_attribute {int namelen; } ;


 int FUNC_0 (struct extended_attribute*) ;

__attribute__((used)) static inline struct extended_attribute *FUNC_1(struct extended_attribute *VAR_0)
{
 return (struct extended_attribute *)((char *)VAR_0 + 5 + VAR_0->namelen + FUNC_0(VAR_0));
}
