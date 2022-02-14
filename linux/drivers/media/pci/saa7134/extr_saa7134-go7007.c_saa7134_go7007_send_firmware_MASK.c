
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct saa7134_go7007 {struct saa7134_dev* dev; } ;
struct saa7134_dev {int dummy; } ;
struct go7007 {struct saa7134_go7007* hpi_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct saa7134_dev*,int ,int*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct go7007 *VAR_8, u8 *VAR_9, int VAR_10)
{
 struct saa7134_go7007 *VAR_11 = VAR_8->hpi_context;
 struct saa7134_dev *VAR_12 = VAR_11->dev;
 u16 VAR_13;
 int VAR_14;





 while (VAR_10 > 0) {
  VAR_14 = VAR_10 > 64 ? 64 : VAR_10;
  FUNC_3(VAR_5, 0xff);
  FUNC_3(VAR_6, VAR_3);
  FUNC_3(VAR_7, VAR_0);
  FUNC_3(VAR_7, VAR_1);
  while (VAR_14-- > 0) {
   FUNC_3(VAR_6, *VAR_9);
   FUNC_3(VAR_7, VAR_2);
   FUNC_3(VAR_7, VAR_1);
   ++VAR_9;
   --VAR_10;
  }
  for (VAR_14 = 0; VAR_14 < 100; ++VAR_14) {
   FUNC_0(VAR_12, VAR_4, &VAR_13);
   if (!(VAR_13 & 0x0002))
    break;
  }
  if (VAR_14 == 100) {
   FUNC_2("saa7134-go7007: device is hung, status reg = 0x%04x\n",
          VAR_13);
   return -1;
  }
 }
 return 0;
}
