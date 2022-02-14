
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hwsim_phy {int dummy; } ;
struct hwsim_edge_info {int lqi; } ;
struct hwsim_edge {struct hwsim_phy* endpoint; int info; } ;


 int VAR_0 ;
 int FUNC_0 (struct hwsim_edge*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct hwsim_edge_info*) ;

__attribute__((used)) static struct hwsim_edge *FUNC_3(struct hwsim_phy *VAR_1, u8 VAR_2)
{
 struct hwsim_edge_info *VAR_3;
 struct hwsim_edge *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 VAR_3->lqi = 0xff;
 FUNC_2(VAR_4->info, VAR_3);
 VAR_4->endpoint = VAR_1;

 return VAR_4;
}
