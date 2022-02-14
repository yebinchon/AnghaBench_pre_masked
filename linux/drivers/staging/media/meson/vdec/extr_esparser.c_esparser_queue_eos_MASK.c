
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct amvdec_core {struct device* dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (struct device*,scalar_t__,int *,int ) ;
 int FUNC_1 (struct device*,scalar_t__,void*,int ) ;
 int FUNC_2 (struct amvdec_core*,int ,scalar_t__) ;
 int FUNC_3 (void*,int const*,scalar_t__) ;

int FUNC_4(struct amvdec_core *VAR_3, const u8 *VAR_4, u32 VAR_5)
{
 struct device *VAR_6 = VAR_3->dev;
 void *VAR_7;
 dma_addr_t VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_6, VAR_5 + VAR_2,
           &VAR_8, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_3(VAR_7, VAR_4, VAR_5);
 VAR_9 = FUNC_2(VAR_3, VAR_8, VAR_5);
 FUNC_1(VAR_6, VAR_5 + VAR_2,
     VAR_7, VAR_8);

 return VAR_9;
}
