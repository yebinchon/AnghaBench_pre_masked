
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xvip_dma {int list; } ;
struct xvip_composite_device {int v4l2_caps; int dmas; int dev; } ;
struct device_node {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,struct device_node*) ;
 struct xvip_dma* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct device_node*,char*,char const**) ;
 int FUNC_4 (struct device_node*,char*,unsigned int*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (struct xvip_composite_device*,struct xvip_dma*,int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct xvip_composite_device *VAR_7,
       struct device_node *VAR_8)
{
 struct xvip_dma *VAR_9;
 enum v4l2_buf_type VAR_10;
 const char *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_8, "direction", &VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 if (FUNC_5(VAR_11, "input") == 0)
  VAR_10 = VAR_3;
 else if (FUNC_5(VAR_11, "output") == 0)
  VAR_10 = VAR_4;
 else
  return -VAR_0;

 FUNC_4(VAR_8, "reg", &VAR_12);

 VAR_9 = FUNC_1(VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_13 = FUNC_6(VAR_7, VAR_9, VAR_10, VAR_12);
 if (VAR_13 < 0) {
  FUNC_0(VAR_7->dev, "%pOF initialization failed\n", VAR_8);
  return VAR_13;
 }

 FUNC_2(&VAR_9->list, &VAR_7->dmas);

 VAR_7->v4l2_caps |= VAR_10 == VAR_3
    ? VAR_5 : VAR_6;

 return 0;
}
