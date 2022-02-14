
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vsc73xx {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write ) (struct vsc73xx*,int ,int ,int ,int ) ;} ;


 int FUNC_0 (struct vsc73xx*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct vsc73xx *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3,
    u32 VAR_4)
{
 return VAR_0->ops->write(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
