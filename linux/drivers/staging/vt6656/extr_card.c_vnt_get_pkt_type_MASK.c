
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vnt_private {scalar_t__ bb_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct vnt_private*) ;

u8 FUNC_1(struct vnt_private *VAR_4)
{
 if (VAR_4->bb_type == VAR_0 || VAR_4->bb_type == VAR_1)
  return (u8)VAR_4->bb_type;
 else if (FUNC_0(VAR_4))
  return VAR_2;
 return VAR_3;
}
