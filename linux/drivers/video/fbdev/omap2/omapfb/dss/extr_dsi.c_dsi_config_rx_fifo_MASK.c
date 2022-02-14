
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct platform_device {int dummy; } ;
struct dsi_data {TYPE_1__* vc; } ;
typedef enum fifo_size { ____Placeholder_fifo_size } fifo_size ;
struct TYPE_2__ {int rx_fifo_size; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int,int) ;
 struct dsi_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_1,
  enum fifo_size VAR_2, enum fifo_size VAR_3,
  enum fifo_size VAR_4, enum fifo_size VAR_5)
{
 struct dsi_data *VAR_6 = FUNC_3(VAR_1);
 u32 VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9;

 VAR_6->vc[0].rx_fifo_size = VAR_2;
 VAR_6->vc[1].rx_fifo_size = VAR_3;
 VAR_6->vc[2].rx_fifo_size = VAR_4;
 VAR_6->vc[3].rx_fifo_size = VAR_5;

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  u8 VAR_10;
  int VAR_11 = VAR_6->vc[VAR_9].rx_fifo_size;

  if (VAR_8 + VAR_11 > 4) {
   FUNC_1("Illegal FIFO configuration\n");
   FUNC_0();
   return;
  }

  VAR_10 = FUNC_2(VAR_8, 2, 0) | FUNC_2(VAR_11, 7, 4);
  VAR_7 |= VAR_10 << (8 * VAR_9);

  VAR_8 += VAR_11;
 }

 FUNC_4(VAR_1, VAR_0, VAR_7);
}
