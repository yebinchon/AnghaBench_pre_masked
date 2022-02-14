
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mic_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read_spad ) (struct mic_device*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mic_device*,int ) ;

__attribute__((used)) static bool FUNC_2(struct mic_device *VAR_1)
{
 u32 VAR_2 = VAR_1->ops->read_spad(VAR_1, VAR_0);
 return FUNC_0(VAR_2) ? 1 : 0;
}
