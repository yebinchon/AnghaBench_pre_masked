
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct brcmf_pciedev_info {TYPE_1__* ci; } ;
typedef int __le32 ;
struct TYPE_2__ {int ramsize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct brcmf_pciedev_info *VAR_3, u8 *VAR_4,
     u32 VAR_5)
{
 __le32 *VAR_6;
 u32 VAR_7;

 if (VAR_5 < VAR_1 + 8)
  return;

 VAR_6 = (__le32 *)&VAR_4[VAR_1];
 if (FUNC_1(VAR_6) != VAR_0)
  return;
 VAR_6++;
 VAR_7 = FUNC_1(VAR_6);

 FUNC_0(VAR_2, "Found ramsize info in FW, adjusting to 0x%x\n",
    VAR_7);
 VAR_3->ci->ramsize = VAR_7;
}
