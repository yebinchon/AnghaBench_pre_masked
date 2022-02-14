
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,unsigned long,unsigned long,unsigned long,char const*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int) ;

void FUNC_3(struct saa7134_dev *VAR_5, const char *VAR_6)
{
 unsigned long VAR_7,VAR_8;

 if (!VAR_4)
  return;

 FUNC_1(VAR_1,VAR_2,0);
 FUNC_1(VAR_1,VAR_2,VAR_2);
 VAR_7 = FUNC_2(VAR_0 >> 2) & 0xfffffff;
 VAR_8 = FUNC_2(VAR_3 >> 2) & 0xfffffff;
 FUNC_0("%s: gpio: mode=0x%07lx in=0x%07lx out=0x%07lx [%s]\n",
        VAR_5->name, VAR_7, (~VAR_7) & VAR_8, VAR_7 & VAR_8, VAR_6);
}
