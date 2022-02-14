
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap2_mcspi {int txdone; int master; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct omap2_mcspi *VAR_7 = VAR_6;
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_7->master, VAR_3);
 if (!VAR_8)
  return VAR_1;


 FUNC_2(VAR_7->master, VAR_2, 0);
 if (VAR_8 & VAR_4)
  FUNC_0(&VAR_7->txdone);

 return VAR_0;
}
