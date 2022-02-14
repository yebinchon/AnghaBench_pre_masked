
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_bus {int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_fwname ) (int ,char const*,unsigned char*) ;} ;


 int FUNC_0 (int ,char const*,unsigned char*) ;

__attribute__((used)) static inline
int FUNC_1(struct brcmf_bus *VAR_0, const char *VAR_1,
    unsigned char *VAR_2)
{
 return VAR_0->ops->get_fwname(VAR_0->dev, VAR_1, VAR_2);
}
