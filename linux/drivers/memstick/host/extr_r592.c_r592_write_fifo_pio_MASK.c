
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r592_device {int pio_fifo; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct r592_device*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct r592_device *VAR_1,
     unsigned char *VAR_2, int VAR_3)
{

 if (!FUNC_2(&VAR_1->pio_fifo)) {

  u8 VAR_4[4] = {0};
  int VAR_5 = FUNC_1(&VAR_1->pio_fifo, VAR_2, VAR_3);

  if (!FUNC_3(&VAR_1->pio_fifo))
   return;
  VAR_3 -= VAR_5;
  VAR_2 += VAR_5;

  VAR_5 = FUNC_4(&VAR_1->pio_fifo, VAR_4, 4);
  FUNC_0(VAR_5 != 4);
  FUNC_5(VAR_1, VAR_0, *(u32 *)VAR_4);
 }

 FUNC_0(!FUNC_2(&VAR_1->pio_fifo));


 while (VAR_3 >= 4) {
  FUNC_5(VAR_1, VAR_0, *(u32 *)VAR_2);
  VAR_2 += 4;
  VAR_3 -= 4;
 }


 if (VAR_3)
  FUNC_1(&VAR_1->pio_fifo, VAR_2, VAR_3);
}
