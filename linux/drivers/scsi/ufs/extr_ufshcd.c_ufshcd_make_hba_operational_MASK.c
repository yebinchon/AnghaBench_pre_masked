
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_hba {int dev; int utmrdl_dma_addr; int utrdl_dma_addr; scalar_t__ nutrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ufs_hba*,scalar_t__,int ) ;
 int FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (struct ufs_hba*,int ) ;
 int FUNC_5 (struct ufs_hba*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct ufs_hba*) ;
 int FUNC_8 (struct ufs_hba*,int ) ;
 int FUNC_9 (struct ufs_hba*,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct ufs_hba *VAR_8)
{
 int VAR_9 = 0;
 u32 VAR_10;


 FUNC_4(VAR_8, VAR_7);


 if (FUNC_7(VAR_8))
  FUNC_2(VAR_8, VAR_8->nutrs - 1, VAR_1);
 else
  FUNC_3(VAR_8);


 FUNC_9(VAR_8, FUNC_1(VAR_8->utrdl_dma_addr),
   VAR_6);
 FUNC_9(VAR_8, FUNC_10(VAR_8->utrdl_dma_addr),
   VAR_5);
 FUNC_9(VAR_8, FUNC_1(VAR_8->utmrdl_dma_addr),
   VAR_4);
 FUNC_9(VAR_8, FUNC_10(VAR_8->utmrdl_dma_addr),
   VAR_3);





 FUNC_11();




 VAR_10 = FUNC_8(VAR_8, VAR_2);
 if (!(FUNC_6(VAR_10))) {
  FUNC_5(VAR_8);
 } else {
  FUNC_0(VAR_8->dev,
   "Host controller not ready to process requests");
  VAR_9 = -VAR_0;
  goto out;
 }

out:
 return VAR_9;
}
