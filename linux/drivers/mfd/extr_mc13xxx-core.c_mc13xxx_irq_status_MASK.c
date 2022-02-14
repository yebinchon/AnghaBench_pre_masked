
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mc13xxx {int irqs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct mc13xxx*,unsigned int,int*) ;

int FUNC_2(struct mc13xxx *VAR_5, int VAR_6,
  int *VAR_7, int *VAR_8)
{
 int VAR_9;
 unsigned int VAR_10 = VAR_6 < 24 ? VAR_1 : VAR_2;
 unsigned int VAR_11 = VAR_6 < 24 ? VAR_3 : VAR_4;
 u32 VAR_12 = 1 << (VAR_6 < 24 ? VAR_6 : VAR_6 - 24);

 if (VAR_6 < 0 || VAR_6 >= FUNC_0(VAR_5->irqs))
  return -VAR_0;

 if (VAR_7) {
  u32 VAR_13;

  VAR_9 = FUNC_1(VAR_5, VAR_10, &VAR_13);
  if (VAR_9)
   return VAR_9;

  *VAR_7 = VAR_13 & VAR_12;
 }

 if (VAR_8) {
  u32 VAR_14;

  VAR_9 = FUNC_1(VAR_5, VAR_11, &VAR_14);
  if (VAR_9)
   return VAR_9;

  *VAR_8 = VAR_14 & VAR_12;
 }

 return 0;
}
