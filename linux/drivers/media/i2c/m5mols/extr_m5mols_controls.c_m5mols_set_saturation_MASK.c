
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m5mols_info {int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct m5mols_info *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_0(&VAR_3->sd, VAR_1, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_0(&VAR_3->sd, VAR_0, VAR_2);
}
