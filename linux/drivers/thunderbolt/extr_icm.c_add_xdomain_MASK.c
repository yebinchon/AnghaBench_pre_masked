
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
typedef void* u8 ;
typedef int u64 ;
struct tb_xdomain {void* depth; void* link; } ;
struct tb_switch {int dev; int tb; } ;
struct TYPE_2__ {struct tb_xdomain* xdomain; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ,struct tb_switch*) ;
 int FUNC_4 (struct tb_xdomain*) ;
 struct tb_xdomain* FUNC_5 (int ,int *,int ,int const*,int const*) ;

__attribute__((used)) static void FUNC_6(struct tb_switch *VAR_0, u64 VAR_1,
   const uuid_t *VAR_2, const uuid_t *VAR_3,
   u8 VAR_4, u8 VAR_5)
{
 struct tb_xdomain *VAR_6;

 FUNC_0(&VAR_0->dev);

 VAR_6 = FUNC_5(VAR_0->tb, &VAR_0->dev, VAR_1, VAR_2, VAR_3);
 if (!VAR_6)
  goto out;

 VAR_6->link = VAR_4;
 VAR_6->depth = VAR_5;

 FUNC_3(VAR_1, VAR_0)->xdomain = VAR_6;

 FUNC_4(VAR_6);

out:
 FUNC_1(&VAR_0->dev);
 FUNC_2(&VAR_0->dev);
}
