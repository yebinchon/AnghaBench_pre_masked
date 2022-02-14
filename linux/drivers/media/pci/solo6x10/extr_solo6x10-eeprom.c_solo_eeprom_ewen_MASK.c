
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct solo_dev*,int) ;
 unsigned int FUNC_1 (struct solo_dev*) ;
 int FUNC_2 (struct solo_dev*,int) ;

unsigned int FUNC_3(struct solo_dev *VAR_5, int VAR_6)
{
 int VAR_7 = (VAR_6 ? 0x3f : 0) | (VAR_2 << VAR_0);
 unsigned int VAR_8 = 0;
 int VAR_9;

 FUNC_0(VAR_5, VAR_7);

 for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
  FUNC_2(VAR_5, VAR_4 |
          VAR_3);
  VAR_8 = (VAR_8 << 1) | FUNC_1(VAR_5);
  FUNC_2(VAR_5, VAR_4);
  VAR_8 = (VAR_8 << 1) | FUNC_1(VAR_5);
 }

 FUNC_2(VAR_5, ~VAR_1);
 VAR_8 = (VAR_8 << 1) | FUNC_1(VAR_5);

 return VAR_8;
}
