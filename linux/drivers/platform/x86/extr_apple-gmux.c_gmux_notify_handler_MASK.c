
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pnp_dev {int dummy; } ;
struct apple_gmux_data {int powerchange_done; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct apple_gmux_data*) ;
 int FUNC_2 (struct apple_gmux_data*) ;
 int FUNC_3 (struct apple_gmux_data*) ;
 int FUNC_4 (struct apple_gmux_data*) ;
 struct apple_gmux_data* FUNC_5 (struct pnp_dev*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void FUNC_7(acpi_handle VAR_1, u32 VAR_2, void *VAR_3)
{
 u8 VAR_4;
 struct pnp_dev *VAR_5 = (struct pnp_dev *)VAR_3;
 struct apple_gmux_data *VAR_6 = FUNC_5(VAR_5);

 VAR_4 = FUNC_4(VAR_6);
 FUNC_2(VAR_6);
 FUNC_6("Notify handler called: status %d\n", VAR_4);

 FUNC_1(VAR_6);
 FUNC_3(VAR_6);

 if (VAR_4 & VAR_0)
  FUNC_0(&VAR_6->powerchange_done);
}
