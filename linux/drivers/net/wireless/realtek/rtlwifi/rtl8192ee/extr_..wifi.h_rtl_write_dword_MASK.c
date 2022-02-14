
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int (* read32_sync ) (struct rtl_priv*,int ) ;int (* write32_async ) (struct rtl_priv*,int ,int ) ;} ;
struct rtl_priv {TYPE_2__ io; TYPE_1__* cfg; } ;
struct TYPE_3__ {scalar_t__ write_readback; } ;


 int FUNC_0 (struct rtl_priv*,int ,int ) ;
 int FUNC_1 (struct rtl_priv*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct rtl_priv *VAR_0,
       u32 VAR_1, u32 VAR_2)
{
 VAR_0->io.write32_async(VAR_0, VAR_1, VAR_2);

 if (VAR_0->cfg->write_readback)
  VAR_0->io.read32_sync(VAR_0, VAR_1);
}
