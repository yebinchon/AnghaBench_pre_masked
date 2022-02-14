
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfar_private {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gfar_private*,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct gfar_private *VAR_1,
           unsigned long VAR_2)
{
 return (FUNC_0(VAR_1, VAR_0) &&
        (VAR_2 % 0x20) > 0x18);
}
