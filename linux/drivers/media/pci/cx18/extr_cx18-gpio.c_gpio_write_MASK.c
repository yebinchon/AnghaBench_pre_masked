
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx18 {int gpio_dir; int gpio_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx18*,int,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct cx18 *VAR_4)
{
 u32 VAR_5 = VAR_4->gpio_dir & 0xffff;
 u32 VAR_6 = VAR_4->gpio_val & 0xffff;
 u32 VAR_7 = VAR_4->gpio_dir >> 16;
 u32 VAR_8 = VAR_4->gpio_val >> 16;

 FUNC_0(VAR_4, VAR_5 << 16,
     VAR_0, ~VAR_5, VAR_5);
 FUNC_0(VAR_4, (VAR_5 << 16) | VAR_6,
     VAR_2, VAR_6, VAR_5);
 FUNC_0(VAR_4, VAR_7 << 16,
     VAR_1, ~VAR_7, VAR_7);
 FUNC_0(VAR_4, (VAR_7 << 16) | VAR_8,
     VAR_3, VAR_8, VAR_7);
}
