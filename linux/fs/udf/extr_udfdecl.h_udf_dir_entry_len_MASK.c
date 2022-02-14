
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileIdentDesc {scalar_t__ lengthFileIdent; int lengthOfImpUse; } ;


 unsigned int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct fileIdentDesc *VAR_1)
{
 return FUNC_0(sizeof(struct fileIdentDesc) +
  FUNC_1(VAR_1->lengthOfImpUse) + VAR_1->lengthFileIdent,
  VAR_0);
}
