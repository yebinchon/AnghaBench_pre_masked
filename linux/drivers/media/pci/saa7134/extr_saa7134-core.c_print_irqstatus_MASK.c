
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int,char*,int,int ,unsigned long,unsigned long) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct saa7134_dev *VAR_4, int VAR_5,
       unsigned long VAR_6, unsigned long VAR_7)
{
 unsigned int VAR_8;

 FUNC_0(1, "[%d,%ld]: r=0x%lx s=0x%02lx",
  VAR_5, VAR_3, VAR_6, VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (!(VAR_6 & (1 << VAR_8)))
   continue;
  FUNC_1(" %s", VAR_2[VAR_8]);
 }
 if (VAR_6 & VAR_1) {
  FUNC_1(" | RA0=%s,%s,%s,%ld",
   (VAR_7 & 0x40) ? "vbi" : "video",
   (VAR_7 & 0x20) ? "b" : "a",
   (VAR_7 & 0x10) ? "odd" : "even",
   (VAR_7 & 0x0f));
 }
 FUNC_1("\n");
}
