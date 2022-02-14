
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcms_hardware {struct bcma_device* d11core; } ;
struct brcms_c_info {int macintmask; int defmacintmask; struct brcms_hardware* hw; } ;
struct bcma_device {int dev; } ;
struct TYPE_2__ {int intstatus; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct bcma_device*,int ) ;
 int FUNC_2 (struct bcma_device*,int ,int) ;
 scalar_t__ FUNC_3 (struct brcms_c_info*) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int,int,int) ;

__attribute__((used)) static inline u32 FUNC_5(struct brcms_c_info *VAR_5, bool VAR_6)
{
 struct brcms_hardware *VAR_7 = VAR_5->hw;
 struct bcma_device *VAR_8 = VAR_7->d11core;
 u32 VAR_9, VAR_10;


 VAR_9 = FUNC_1(VAR_8, FUNC_0(VAR_9));
 VAR_10 = VAR_6 ? VAR_5->macintmask : VAR_5->defmacintmask;

 FUNC_4(&VAR_8->dev, VAR_6, VAR_9, VAR_10);


 if (FUNC_3(VAR_5))
  return -1;




 if (VAR_9 == 0xffffffff)
  return 0;


 VAR_9 &= VAR_10;


 if (VAR_9 == 0)
  return 0;


 FUNC_2(VAR_8, FUNC_0(VAR_4), 0);
 (void)FUNC_1(VAR_8, FUNC_0(VAR_4));
 VAR_5->macintmask = 0;


 FUNC_2(VAR_8, FUNC_0(VAR_9), VAR_9);


 if (VAR_9 & VAR_1)





  FUNC_2(VAR_8, FUNC_0(VAR_3[VAR_2].intstatus),
        VAR_0);

 return VAR_9;
}
