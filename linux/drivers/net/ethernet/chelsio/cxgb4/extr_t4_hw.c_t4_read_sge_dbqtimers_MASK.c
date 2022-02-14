
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct adapter {int pf; int mbox; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct adapter*,int ,int ,int ,int,int*,int*) ;

int FUNC_5(struct adapter *VAR_2, unsigned int VAR_3,
     u16 *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = 0;
 VAR_6 = 0;
 while (VAR_6 < VAR_3) {
  int VAR_7, VAR_8;
  u32 VAR_9[7], VAR_10[7];

  VAR_7 = VAR_3 - VAR_6;
  if (VAR_7 > FUNC_0(VAR_9))
   VAR_7 = FUNC_0(VAR_9);

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   VAR_9[VAR_8] =
     (FUNC_1(VAR_0) |
      FUNC_2(VAR_1) |
      FUNC_3(VAR_6 + VAR_8));
  VAR_5 = FUNC_4(VAR_2, VAR_2->mbox, VAR_2->pf, 0,
          VAR_7, VAR_9, VAR_10);
  if (VAR_5)
   break;

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   VAR_4[VAR_6++] = VAR_10[VAR_8];
 }
 return VAR_5;
}
