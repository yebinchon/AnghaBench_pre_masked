
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int start; } ;
struct fsl_elbc_gpcm {scalar_t__ bank; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct resource*) ;

__attribute__((used)) static int FUNC_3(struct fsl_elbc_gpcm *VAR_6,
       struct resource *VAR_7,
       u32 VAR_8, u32 VAR_9)
{

 if (VAR_6->bank >= VAR_4) {
  FUNC_0(VAR_6->dev, "invalid bank\n");
  return -VAR_3;
 }


 if ((VAR_8 & VAR_1) != VAR_2) {
  FUNC_0(VAR_6->dev, "unsupported mode\n");
  return -VAR_3;
 }


 if ((~(VAR_9 & VAR_5) + 1) != FUNC_2(VAR_7)) {
  FUNC_0(VAR_6->dev, "address mask / size mismatch\n");
  return -VAR_3;
 }


 if ((VAR_8 & VAR_9 & VAR_0) != FUNC_1(VAR_7->start)) {
  FUNC_0(VAR_6->dev, "base address mismatch\n");
  return -VAR_3;
 }

 return 0;
}
