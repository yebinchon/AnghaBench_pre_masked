
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sky2_hw {size_t st_idx; int napi; int * st_le; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sky2_hw*,int ) ;
 int FUNC_3 (struct sky2_hw*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct sky2_hw *VAR_6 = VAR_5;
 u32 VAR_7;


 VAR_7 = FUNC_2(VAR_6, VAR_1);
 if (VAR_7 == 0 || VAR_7 == ~0) {
  FUNC_3(VAR_6, VAR_0, 2);
  return VAR_3;
 }

 FUNC_1(&VAR_6->st_le[VAR_6->st_idx]);

 FUNC_0(&VAR_6->napi);

 return VAR_2;
}
