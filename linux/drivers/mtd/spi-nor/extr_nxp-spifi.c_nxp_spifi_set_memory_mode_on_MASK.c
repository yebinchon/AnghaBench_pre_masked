
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nxp_spifi {int memory_mode; int dev; scalar_t__ io_base; int mcmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct nxp_spifi *VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 if (VAR_3->memory_mode)
  return 0;

 FUNC_2(VAR_3->mcmd, VAR_3->io_base + VAR_0);
 VAR_5 = FUNC_1(VAR_3->io_base + VAR_1, VAR_4,
     VAR_4 & VAR_2, 10, 30);
 if (VAR_5)
  FUNC_0(VAR_3->dev, "unable to enter memory mode\n");
 else
  VAR_3->memory_mode = 1;

 return VAR_5;
}
