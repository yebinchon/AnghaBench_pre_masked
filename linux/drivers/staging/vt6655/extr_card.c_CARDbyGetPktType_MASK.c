
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {scalar_t__ byBBType; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;

unsigned char FUNC_1(struct vnt_private *VAR_4)
{
 if (VAR_4->byBBType == VAR_0 || VAR_4->byBBType == VAR_1)
  return (unsigned char)VAR_4->byBBType;
 else if (FUNC_0((void *)VAR_4))
  return VAR_2;
 else
  return VAR_3;
}
