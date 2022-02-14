
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vdic_priv {TYPE_1__* ops; int vdi; } ;
struct TYPE_2__ {int (* disable ) (struct vdic_priv*) ;int (* stop ) (struct vdic_priv*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vdic_priv*) ;
 int FUNC_2 (struct vdic_priv*) ;
 int FUNC_3 (struct vdic_priv*) ;

__attribute__((used)) static void FUNC_4(struct vdic_priv *VAR_0)
{
 VAR_0->ops->stop(VAR_0);
 FUNC_0(VAR_0->vdi);
 VAR_0->ops->disable(VAR_0);

 FUNC_3(VAR_0);
}
