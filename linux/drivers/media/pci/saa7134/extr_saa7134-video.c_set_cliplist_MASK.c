
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {int dummy; } ;
struct cliplist {int enable; int disable; int position; } ;
typedef int __u8 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct saa7134_dev *VAR_0, int VAR_1,
   struct cliplist *VAR_2, int VAR_3, char *VAR_4)
{
 __u8 VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 |= VAR_2[VAR_6].enable;
  VAR_5 &= ~VAR_2[VAR_6].disable;
  if (VAR_6 < 15 && VAR_2[VAR_6].position == VAR_2[VAR_6+1].position)
   continue;
  FUNC_0(VAR_1 + 0, VAR_5);
  FUNC_0(VAR_1 + 2, VAR_2[VAR_6].position & 0xff);
  FUNC_0(VAR_1 + 3, VAR_2[VAR_6].position >> 8);
  FUNC_1("clip: %s winbits=%02x pos=%d\n",
   VAR_4,VAR_5,VAR_2[VAR_6].position);
  VAR_1 += 8;
 }
 for (; VAR_1 < 0x400; VAR_1 += 8) {
  FUNC_0(VAR_1+ 0, 0);
  FUNC_0(VAR_1 + 1, 0);
  FUNC_0(VAR_1 + 2, 0);
  FUNC_0(VAR_1 + 3, 0);
 }
}
