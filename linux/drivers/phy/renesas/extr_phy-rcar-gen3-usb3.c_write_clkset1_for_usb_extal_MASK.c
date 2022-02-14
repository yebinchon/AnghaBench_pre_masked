
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rcar_gen3_usb3 {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rcar_gen3_usb3 *VAR_5, bool VAR_6)
{
 u16 VAR_7 = VAR_3 |
    VAR_2 | VAR_1;

 if (VAR_6)
  VAR_7 |= VAR_0;

 FUNC_0(VAR_7, VAR_5->base + VAR_4);
}
