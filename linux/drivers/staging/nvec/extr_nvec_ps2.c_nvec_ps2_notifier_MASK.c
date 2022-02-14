
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_2__ {int ser_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned char*,unsigned char) ;


 TYPE_1__ VAR_2 ;
 int FUNC_1 (int ,unsigned char,int ) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_3,
        unsigned long VAR_4, void *VAR_5)
{
 int VAR_6;
 unsigned char *VAR_7 = VAR_5;

 switch (VAR_4) {
 case 128:
  for (VAR_6 = 0; VAR_6 < VAR_7[1]; VAR_6++)
   FUNC_1(VAR_2.ser_dev, VAR_7[2 + VAR_6], 0);
  FUNC_0("ps/2 mouse event: ", &VAR_7[2], VAR_7[1]);
  return VAR_1;

 case 129:
  if (VAR_7[2] == 1) {
   for (VAR_6 = 0; VAR_6 < (VAR_7[1] - 2); VAR_6++)
    FUNC_1(VAR_2.ser_dev, VAR_7[VAR_6 + 4], 0);
   FUNC_0("ps/2 mouse reply: ", &VAR_7[4], VAR_7[1] - 2);
  }

  else if (VAR_7[1] != 2)
   FUNC_0("unhandled mouse event: ", VAR_7, VAR_7[1] + 2);
  return VAR_1;
 }

 return VAR_0;
}
