
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int board; } ;


 int VAR_0 ;






 int FUNC_0 (struct saa7134_dev*,int) ;
 int FUNC_1 (struct saa7134_dev*,int) ;
 int FUNC_2 (struct saa7134_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct saa7134_dev *VAR_1,
       int VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_2) {
 case 128:
  switch (VAR_1->board) {
  case 132:
  case 133:
  case 129:
   VAR_4 = FUNC_2(VAR_1, VAR_3);
   break;
  case 130:
   VAR_4 = FUNC_1(VAR_1, VAR_3);
   break;
  case 131:
   VAR_4 = FUNC_0(VAR_1, VAR_3);
   break;
  default:
   break;
  }
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }
 return VAR_4;
}
