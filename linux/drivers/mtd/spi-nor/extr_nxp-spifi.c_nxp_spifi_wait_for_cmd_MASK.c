
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nxp_spifi {int dev; scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct nxp_spifi *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->io_base + VAR_0, VAR_3,
     !(VAR_3 & VAR_1), 10, 30);
 if (VAR_4)
  FUNC_0(VAR_2->dev, "command timed out\n");

 return VAR_4;
}
