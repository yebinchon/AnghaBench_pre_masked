
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int flags; } ;
struct atmel_mci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atmel_mci*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct atmel_mci *VAR_4, struct mmc_data *VAR_5)
{
 if (VAR_5->flags & VAR_3)
  FUNC_0(VAR_4, VAR_0, VAR_1);
 else
  FUNC_0(VAR_4, VAR_0, VAR_2);
}
