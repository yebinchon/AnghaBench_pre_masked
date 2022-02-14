
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_private {scalar_t__ base; } ;
typedef unsigned short __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 unsigned short FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned short FUNC_2(void *VAR_4)
{
 struct lance_private *VAR_5 = (struct lance_private *)VAR_4;
 __u16 VAR_6;
 do {
  VAR_6 = FUNC_1(VAR_5->base + VAR_0 + VAR_2);
 } while ((FUNC_0(VAR_5->base + VAR_1) & VAR_3) == 0);
 return VAR_6;
}
