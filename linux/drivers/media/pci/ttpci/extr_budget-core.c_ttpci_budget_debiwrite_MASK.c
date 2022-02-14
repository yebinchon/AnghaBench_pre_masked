
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct budget {int debilock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct budget*,int ,int,int,int ,int) ;

int FUNC_3(struct budget *VAR_0, u32 VAR_1, int VAR_2,
      int VAR_3, u32 VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_3 > 4 || VAR_3 <= 0)
  return 0;

 if (VAR_5) {
  unsigned long VAR_7;
  int VAR_8;

  FUNC_0(&VAR_0->debilock, VAR_7);
  VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_4, VAR_6);
  FUNC_1(&VAR_0->debilock, VAR_7);
  return VAR_8;
 }
 return FUNC_2(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4, VAR_6);
}
