
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct vnt_private {int preamble_type; } ;
typedef int __le16 ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int ** VAR_1 ;

__attribute__((used)) static __le16 FUNC_1(struct vnt_private *VAR_2, u16 VAR_3)
{
 return FUNC_0(VAR_1[VAR_2->preamble_type % 2]
       [VAR_3 % VAR_0]);
}
