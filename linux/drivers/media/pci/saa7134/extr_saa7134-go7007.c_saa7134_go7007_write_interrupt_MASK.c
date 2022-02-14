
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct saa7134_go7007 {struct saa7134_dev* dev; } ;
struct saa7134_dev {int dummy; } ;
struct go7007 {struct saa7134_go7007* hpi_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct saa7134_dev*,int ,int*) ;
 int FUNC_1 (struct saa7134_dev*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct go7007 *VAR_3, int VAR_4, int VAR_5)
{
 struct saa7134_go7007 *VAR_6 = VAR_3->hpi_context;
 struct saa7134_dev *VAR_7 = VAR_6->dev;
 int VAR_8;
 u16 VAR_9;





 for (VAR_8 = 0; VAR_8 < 100; ++VAR_8) {
  FUNC_0(VAR_7, VAR_0, &VAR_9);
  if (!(VAR_9 & 0x0010))
   break;
  FUNC_2(10);
 }
 if (VAR_8 == 100) {
  FUNC_4("saa7134-go7007: device is hung, status reg = 0x%04x\n",
   VAR_9);
  return -1;
 }
 FUNC_1(VAR_7, VAR_2, VAR_5);
 FUNC_1(VAR_7, VAR_1, VAR_4);

 return 0;
}
