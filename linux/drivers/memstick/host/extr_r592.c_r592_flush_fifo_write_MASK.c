
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r592_device {int pio_fifo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct r592_device*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct r592_device *VAR_1)
{
 u8 VAR_2[4] = { 0 };
 int VAR_3;

 if (FUNC_0(&VAR_1->pio_fifo))
  return;

 VAR_3 = FUNC_1(&VAR_1->pio_fifo, VAR_2, 4);
 FUNC_2(VAR_1, VAR_0, *(u32 *)VAR_2);
}
