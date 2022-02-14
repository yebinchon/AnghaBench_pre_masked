
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tridentfb_par {int io_virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, int VAR_4)
{
 struct tridentfb_par *VAR_5 = VAR_3;
 u8 VAR_6 = FUNC_0(VAR_5->io_virt, VAR_2) & VAR_0;

 if (VAR_4)
  VAR_6 &= ~VAR_1;
 else
  VAR_6 |= VAR_1;

 FUNC_1(VAR_5->io_virt, VAR_2, VAR_6);
}
