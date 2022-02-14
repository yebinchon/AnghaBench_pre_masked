
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pn533_i2c_phy {int aborted; int priv; } ;
struct pn533 {struct pn533_i2c_phy* phy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct pn533*,int ) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct pn533 *VAR_1, gfp_t VAR_2)
{
 struct pn533_i2c_phy *VAR_3 = VAR_1->phy;

 VAR_3->aborted = 1;


 FUNC_0(VAR_1, VAR_2);


 FUNC_1(VAR_3->priv, ((void*)0), -VAR_0);
}
