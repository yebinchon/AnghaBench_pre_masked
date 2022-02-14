
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int mutex; } ;
struct encx24j600_priv {TYPE_1__ ctx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int const*,size_t) ;

__attribute__((used)) static int FUNC_3(struct encx24j600_priv *VAR_0, u8 VAR_1,
    const u8 *VAR_2, size_t VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_0->ctx.mutex);
 VAR_4 = FUNC_2(&VAR_0->ctx, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0->ctx.mutex);

 return VAR_4;
}
