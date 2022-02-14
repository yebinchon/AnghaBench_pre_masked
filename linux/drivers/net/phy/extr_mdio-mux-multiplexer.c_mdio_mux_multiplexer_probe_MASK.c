
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct mdio_mux_multiplexer_state {int mux_handle; int muxc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct mdio_mux_multiplexer_state* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct device*,int ,int ,int *,struct platform_device*,int *) ;
 int VAR_3 ;
 int FUNC_6 (struct platform_device*,struct mdio_mux_multiplexer_state*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct mdio_mux_multiplexer_state *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_3(&VAR_4->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->muxc = FUNC_4(VAR_5, ((void*)0));
 if (FUNC_0(VAR_6->muxc)) {
  VAR_7 = FUNC_1(VAR_6->muxc);
  if (VAR_7 != -VAR_1)
   FUNC_2(&VAR_4->dev, "Failed to get mux: %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_6(VAR_4, VAR_6);

 VAR_7 = FUNC_5(&VAR_4->dev, VAR_4->dev.of_node,
       VAR_3, &VAR_6->mux_handle,
       VAR_4, ((void*)0));

 return VAR_7;
}
