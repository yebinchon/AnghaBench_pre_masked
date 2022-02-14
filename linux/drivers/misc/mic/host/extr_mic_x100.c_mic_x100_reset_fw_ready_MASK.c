
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_spad ) (struct mic_device*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mic_device*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mic_device *VAR_1)
{
 VAR_1->ops->write_spad(VAR_1, VAR_0, 0);
}
