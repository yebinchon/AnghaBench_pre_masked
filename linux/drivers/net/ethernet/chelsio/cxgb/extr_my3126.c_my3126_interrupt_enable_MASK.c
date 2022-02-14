
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int elmer_gpo; int adapter; int phy_update; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_2)
{
 FUNC_0(&VAR_2->phy_update, VAR_1/30);
 FUNC_1(VAR_2->adapter, VAR_0, &VAR_2->elmer_gpo);
 return 0;
}
