
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct at91_pinctrl {int nmux; int dev; int mux_mask; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int,int ) ;
 int VAR_3 ;
 int * FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (struct device_node*,char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct at91_pinctrl *VAR_4,
     struct device_node *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 const __be32 *VAR_8;

 VAR_8 = FUNC_2(VAR_5, "atmel,mux-mask", &VAR_7);
 if (!VAR_8) {
  FUNC_0(VAR_4->dev, "can not read the mux-mask of %d\n", VAR_7);
  return -VAR_0;
 }

 VAR_7 /= sizeof(*VAR_8);
 if (!VAR_7 || VAR_7 % VAR_3) {
  FUNC_0(VAR_4->dev, "wrong mux mask array should be by %d\n", VAR_3);
  return -VAR_0;
 }
 VAR_4->nmux = VAR_7 / VAR_3;

 VAR_4->mux_mask = FUNC_1(VAR_4->dev, VAR_7, sizeof(u32),
          VAR_2);
 if (!VAR_4->mux_mask)
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_5, "atmel,mux-mask",
       VAR_4->mux_mask, VAR_7);
 if (VAR_6)
  FUNC_0(VAR_4->dev, "can not read the mux-mask of %d\n", VAR_7);
 return VAR_6;
}
