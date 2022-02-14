
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msb_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct msb_data*,int) ;
 int FUNC_2 (struct msb_data*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct msb_data *VAR_1, int VAR_2, int VAR_3)
{
 FUNC_0("marking page %d of pba %d as bad", VAR_3, VAR_2);
 FUNC_1(VAR_1, 1);
 return FUNC_2(VAR_1,
  VAR_2, VAR_3, ~VAR_0);
}
