
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cxl_afu {int dev; TYPE_1__* guest; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxl_afu*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (struct cxl_afu*,int ) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct cxl_afu *VAR_5 = VAR_4;
 int VAR_6;
 u64 VAR_7, VAR_8, VAR_9;

 VAR_6 = FUNC_2(VAR_5->guest->handle, &VAR_7);
 if (VAR_6) {
  FUNC_4(&VAR_5->dev, "Couldn't read PSL_SERR_An: %d\n", VAR_6);
  return VAR_2;
 }
 VAR_8 = FUNC_3(VAR_5, VAR_0);
 VAR_9 = FUNC_3(VAR_5, VAR_1);
 FUNC_0(VAR_5, VAR_7);
 FUNC_4(&VAR_5->dev, "AFU_ERR_An: 0x%.16llx\n", VAR_8);
 FUNC_4(&VAR_5->dev, "PSL_DSISR_An: 0x%.16llx\n", VAR_9);

 VAR_6 = FUNC_1(VAR_5->guest->handle, VAR_7);
 if (VAR_6)
  FUNC_4(&VAR_5->dev, "Couldn't ack slice error interrupt: %d\n",
   VAR_6);

 return VAR_2;
}
