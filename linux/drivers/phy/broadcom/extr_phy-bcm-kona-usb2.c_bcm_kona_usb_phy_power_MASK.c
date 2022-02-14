
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_kona_usb {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct bcm_kona_usb *VAR_7, int VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_7->regs + VAR_0);
 if (VAR_8) {

  VAR_9 &= ~(VAR_3 | VAR_2 |
    VAR_6 | VAR_5);
  VAR_9 |= VAR_4 | VAR_1;
 } else {
  VAR_9 &= ~(VAR_4 | VAR_1);
 }
 FUNC_1(VAR_9, VAR_7->regs + VAR_0);
}
