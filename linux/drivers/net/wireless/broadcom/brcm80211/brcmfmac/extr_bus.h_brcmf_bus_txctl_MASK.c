
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct brcmf_bus {int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* txctl ) (int ,unsigned char*,int ) ;} ;


 int FUNC_0 (int ,unsigned char*,int ) ;

__attribute__((used)) static inline
int FUNC_1(struct brcmf_bus *VAR_0, unsigned char *VAR_1, uint VAR_2)
{
 return VAR_0->ops->txctl(VAR_0->dev, VAR_1, VAR_2);
}
