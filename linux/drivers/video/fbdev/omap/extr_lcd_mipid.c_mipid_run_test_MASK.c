
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mipid_device {TYPE_1__* spi; int fbdev; } ;
struct lcd_panel {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int const,int) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int const) ;
 int FUNC_5 (struct mipid_device*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 struct mipid_device* FUNC_7 (struct lcd_panel*) ;

__attribute__((used)) static int FUNC_8(struct lcd_panel *VAR_4, int VAR_5)
{
 struct mipid_device *VAR_6 = FUNC_7(VAR_4);
 static const u16 VAR_7[4] = {
  0x0000, 0xffff, 0xaaaa, 0x5555,
 };
 int VAR_8;

 if (VAR_5 != VAR_2)
  return VAR_1;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7); VAR_8++) {
  int VAR_9;
  unsigned long VAR_10;

  FUNC_4(VAR_6->fbdev, VAR_7[VAR_8]);
  VAR_10 = VAR_3 + FUNC_2(100);
  VAR_9 = 25;
  while (1) {
   u16 VAR_11;

   FUNC_3(VAR_9);
   VAR_11 = FUNC_5(VAR_6);
   if (VAR_11 == VAR_7[VAR_8])
    break;
   if (FUNC_6(VAR_3, VAR_10)) {
    FUNC_1(&VAR_6->spi->dev,
     "MIPI LCD RGB I/F test failed: "
     "expecting %04x, got %04x\n",
     VAR_7[VAR_8], VAR_11);
    return VAR_0;
   }
   VAR_9 = 10;
  }
 }

 return 0;
}
