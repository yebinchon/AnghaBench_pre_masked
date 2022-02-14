
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int (* read8_sync ) (struct rtl_priv*,int ) ;} ;
struct rtl_priv {TYPE_1__ io; } ;


 int FUNC_0 (struct rtl_priv*,int ) ;

__attribute__((used)) static inline u8 FUNC_1(struct rtl_priv *VAR_0, u32 VAR_1)
{
 return VAR_0->io.read8_sync(VAR_0, VAR_1);
}
