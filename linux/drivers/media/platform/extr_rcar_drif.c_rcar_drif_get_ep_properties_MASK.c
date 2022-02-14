
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rcar_drif_sdr {int mdr1; int dev; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct fwnode_handle*,char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct rcar_drif_sdr *VAR_6,
     struct fwnode_handle *VAR_7)
{
 u32 VAR_8;


 VAR_6->mdr1 = VAR_5 | VAR_1 |
  VAR_0 | VAR_4;


 if (!FUNC_1(VAR_7, "sync-active", &VAR_8))
  VAR_6->mdr1 |= VAR_8 ? VAR_2 :
   VAR_3;
 else
  VAR_6->mdr1 |= VAR_2;

 FUNC_0(VAR_6->dev, "mdr1 0x%08x\n", VAR_6->mdr1);
}
