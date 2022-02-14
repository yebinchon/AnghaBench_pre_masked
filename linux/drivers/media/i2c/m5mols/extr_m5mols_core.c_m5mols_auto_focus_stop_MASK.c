
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m5mols_info {int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int,int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct m5mols_info *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_6->sd, VAR_0, VAR_4);
 if (!VAR_7)
  VAR_7 = FUNC_1(&VAR_6->sd, VAR_1, VAR_3);
 if (!VAR_7)
  VAR_7 = FUNC_0(&VAR_6->sd, VAR_5, VAR_2,
           0xff, -1);
 return VAR_7;
}
