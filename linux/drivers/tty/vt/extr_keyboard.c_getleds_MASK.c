
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbd_struct {scalar_t__ ledmode; unsigned char ledflagstate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct kbd_struct* VAR_2 ;
 unsigned char VAR_3 ;

__attribute__((used)) static inline unsigned char FUNC_0(void)
{
 struct kbd_struct *VAR_4 = VAR_2 + VAR_1;

 if (VAR_4->ledmode == VAR_0)
  return VAR_3;

 return VAR_4->ledflagstate;
}
