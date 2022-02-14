
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_core {int dummy; } ;
struct snd_tm6000_card {struct tm6000_core* core; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct tm6000_core*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_tm6000_card *VAR_1)
{
 struct tm6000_core *VAR_2 = VAR_1->core;

 FUNC_0(1, "Stopping audio DMA\n");


 FUNC_1(VAR_2, VAR_0, 0x00, 0x40);

 return 0;
}
