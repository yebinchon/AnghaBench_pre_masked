
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_ctx {int ntb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct pp_ctx*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct pp_ctx *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->ntb, VAR_3, &VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_3->ntb, VAR_0, VAR_1);

 FUNC_1(VAR_3->ntb);

 return 0;
}
