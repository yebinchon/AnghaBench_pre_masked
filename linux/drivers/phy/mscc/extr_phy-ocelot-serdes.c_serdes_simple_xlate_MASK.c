
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdes_macro {unsigned int idx; unsigned int port; } ;
struct serdes_ctrl {struct phy** phys; } ;
struct phy {int dummy; } ;
struct of_phandle_args {int args_count; unsigned int* args; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct phy* FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_3 ;
 struct serdes_ctrl* FUNC_2 (struct device*) ;
 struct serdes_macro* FUNC_3 (struct phy*) ;

__attribute__((used)) static struct phy *FUNC_4(struct device *VAR_4,
           struct of_phandle_args *VAR_5)
{
 struct serdes_ctrl *VAR_6 = FUNC_2(VAR_4);
 unsigned int VAR_7, VAR_8, VAR_9;

 if (VAR_5->args_count != 2)
  return FUNC_0(-VAR_1);

 VAR_7 = VAR_5->args[0];
 VAR_8 = VAR_5->args[1];

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  struct serdes_macro *VAR_10 = FUNC_3(VAR_6->phys[VAR_9]);

  if (VAR_8 != VAR_10->idx)
   continue;


  if (VAR_8 != FUNC_1(0) && VAR_10->port >= 0)
   return FUNC_0(-VAR_0);

  VAR_10->port = VAR_7;
  return VAR_6->phys[VAR_9];
 }

 return FUNC_0(-VAR_2);
}
