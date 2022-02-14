
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct aac_aifcmd {scalar_t__ data; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct aac_aifcmd *VAR_0, uint32_t VAR_1)
{
 return FUNC_0(((__le32 *)VAR_0->data)[VAR_1]);
}
