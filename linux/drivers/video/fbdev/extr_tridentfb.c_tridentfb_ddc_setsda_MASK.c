
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {int io_virt; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, int VAR_4)
{
 struct tridentfb_par *VAR_5 = VAR_3;
 unsigned char VAR_6;

 VAR_6 = FUNC_0(VAR_5->io_virt, VAR_2) & VAR_0;
 if (!VAR_4)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;
 FUNC_1(VAR_5->io_virt, VAR_2, VAR_6);
}
