
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dmasound {struct saa7134_dev* priv_data; } ;
struct saa7134_dev {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct saa7134_dev*,unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct saa7134_dmasound *VAR_5 = VAR_4;
 struct saa7134_dev *VAR_6 = VAR_5->priv_data;

 unsigned long VAR_7, VAR_8;
 int VAR_9, VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
  VAR_7 = FUNC_3(VAR_0);
  VAR_8 = FUNC_3(VAR_2);

  if (VAR_7 & VAR_1) {
   VAR_10 = 1;
   FUNC_4(VAR_0,
       VAR_1);
   FUNC_2(VAR_6, VAR_8);
  } else {
   goto out;
  }
 }

 if (VAR_9 == 10) {
  FUNC_1("error! looping IRQ!");
 }

out:
 return FUNC_0(VAR_10);
}
