
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct solo_dev*,int ) ;
 int FUNC_1 (struct solo_dev*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct solo_dev *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_0);


 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  if (!((1 << VAR_5) & VAR_3))
   continue;

  VAR_6 &= (~(3 << (VAR_5 << 1)));
  VAR_6 |= ((VAR_4 & 3) << (VAR_5 << 1));
 }

 FUNC_1(VAR_2, VAR_0, VAR_6);


 VAR_6 = FUNC_0(VAR_2, VAR_1);

 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  if (!((1UL << (VAR_5 + 16)) & VAR_3))
   continue;

  if (!VAR_4)
   VAR_6 &= ~(1UL << VAR_5);
  else
   VAR_6 |= 1UL << VAR_5;
 }


 VAR_6 |= 0xffff0000;

 FUNC_1(VAR_2, VAR_1, VAR_6);
}
