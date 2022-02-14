
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int name; } ;
struct cpts {int dev; TYPE_1__* reg; } ;
struct clk_hw {int name; } ;
struct TYPE_2__ {int rftclk_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (int ,int,char const**,unsigned int,int ,int *,int ,int,int ,int *,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,void (*) (void*),struct device_node*) ;
 void* FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct device_node*,int ,struct device_node*) ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_7 (struct device_node*) ;
 int VAR_5 ;
 int FUNC_8 (struct device_node*,char const**,unsigned int) ;
 struct device_node* FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*,char*,int *,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_12(struct cpts *VAR_6, struct device_node *VAR_7)
{
 struct device_node *VAR_8;
 const char **VAR_9;
 unsigned int VAR_10;
 struct clk_hw *VAR_11;
 int VAR_12 = -VAR_0;
 u32 *VAR_13;

 VAR_8 = FUNC_9(VAR_7, "cpts-refclk-mux");
 if (!VAR_8)

  return 0;

 VAR_10 = FUNC_7(VAR_8);
 if (VAR_10 < 1) {
  FUNC_3(VAR_6->dev, "mux-clock %s must have parents\n",
   VAR_8->name);
  goto mux_fail;
 }

 VAR_9 = FUNC_5(VAR_6->dev, (sizeof(char *) * VAR_10),
        VAR_2);

 VAR_13 = FUNC_5(VAR_6->dev, sizeof(*VAR_13) * VAR_10,
     VAR_2);
 if (!VAR_13 || !VAR_9) {
  VAR_12 = -VAR_1;
  goto mux_fail;
 }

 FUNC_8(VAR_8, VAR_9, VAR_10);

 VAR_12 = FUNC_11(VAR_8, "ti,mux-tbl",
        VAR_13,
        VAR_10, VAR_10);
 if (VAR_12 < 0)
  goto mux_fail;

 VAR_11 = FUNC_2(VAR_6->dev, VAR_8->name,
        VAR_9, VAR_10,
        0,
        &VAR_6->reg->rftclk_sel, 0, 0x1F,
        0, VAR_13, ((void*)0));
 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  goto mux_fail;
 }

 VAR_12 = FUNC_4(VAR_6->dev,
           (void(*)(void *))VAR_3,
           VAR_11);
 if (VAR_12) {
  FUNC_3(VAR_6->dev, "add clkmux unreg action %d", VAR_12);
  goto mux_fail;
 }

 VAR_12 = FUNC_6(VAR_8, VAR_5, VAR_11);
 if (VAR_12)
  goto mux_fail;

 VAR_12 = FUNC_4(VAR_6->dev,
           (void(*)(void *))VAR_4,
           VAR_8);
 if (VAR_12) {
  FUNC_3(VAR_6->dev, "add clkmux provider unreg action %d", VAR_12);
  goto mux_fail;
 }

 return VAR_12;

mux_fail:
 FUNC_10(VAR_8);
 return VAR_12;
}
