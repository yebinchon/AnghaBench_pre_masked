
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson8b_dwmac {int dev; } ;
struct clk_ops {int dummy; } ;
struct clk_init_data {char* name; char const** parent_names; int num_parents; int flags; struct clk_ops const* ops; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct clk {int dummy; } ;
typedef int clk_name ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 struct clk* FUNC_1 (int ,struct clk_hw*) ;
 int FUNC_2 (char*,int,char*,char*,char const*) ;

__attribute__((used)) static struct clk *FUNC_3(struct meson8b_dwmac *VAR_1,
           const char *VAR_2,
           const char **VAR_3,
           int VAR_4,
           const struct clk_ops *VAR_5,
           struct clk_hw *VAR_6)
{
 struct clk_init_data VAR_7;
 char VAR_8[32];

 FUNC_2(VAR_8, sizeof(VAR_8), "%s#%s", FUNC_0(VAR_1->dev),
   VAR_2);

 VAR_7.name = VAR_8;
 VAR_7.ops = VAR_5;
 VAR_7.flags = VAR_0;
 VAR_7.parent_names = VAR_3;
 VAR_7.num_parents = VAR_4;

 VAR_6->init = &VAR_7;

 return FUNC_1(VAR_1->dev, VAR_6);
}
