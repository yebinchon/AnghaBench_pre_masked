
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mt2063_state {size_t* reg; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mt2063_state*,size_t,size_t*,int) ;

__attribute__((used)) static int FUNC_2(struct mt2063_state *VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5;

 FUNC_0(2, "\n");

 if (VAR_3 >= VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_2, VAR_3, &VAR_4, 1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_2->reg[VAR_3] = VAR_4;

 return 0;
}
