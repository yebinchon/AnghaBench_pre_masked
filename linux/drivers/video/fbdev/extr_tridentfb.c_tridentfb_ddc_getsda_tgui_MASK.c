
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {int io_virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_2)
{
 struct tridentfb_par *VAR_3 = VAR_2;

 return !!(FUNC_0(VAR_3->io_virt, VAR_1) & VAR_0);
}
