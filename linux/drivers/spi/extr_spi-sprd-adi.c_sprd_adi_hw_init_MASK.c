
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sprd_adi {scalar_t__ base; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int * FUNC_4 (struct device_node*,char*,int*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct sprd_adi *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev->of_node;
 int VAR_9, VAR_10, VAR_11;
 const __be32 *VAR_12;
 u32 VAR_13;


 FUNC_6(0, VAR_7->base + VAR_5);
 FUNC_6(0, VAR_7->base + VAR_4);


 VAR_13 = FUNC_5(VAR_7->base + VAR_6);
 VAR_13 &= ~VAR_1;
 FUNC_6(VAR_13, VAR_7->base + VAR_6);


 VAR_12 = FUNC_4(VAR_8, "sprd,hw-channels", &VAR_10);
 if (!VAR_12 || !VAR_10) {
  FUNC_3(VAR_7->dev, "no hw channels setting in node\n");
  return;
 }

 VAR_11 = VAR_10 / 8;
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  u32 VAR_14;
  u32 VAR_15 = FUNC_2(*VAR_12++);
  u32 VAR_16 = FUNC_2(*VAR_12++);


  if (VAR_15 < 2)
   continue;

  FUNC_6(VAR_16, VAR_7->base +
          FUNC_1(VAR_15));

  if (VAR_15 < 32) {
   VAR_14 = FUNC_5(VAR_7->base + VAR_2);
   VAR_14 |= FUNC_0(VAR_15);
   FUNC_6(VAR_14, VAR_7->base + VAR_2);
  } else if (VAR_15 < VAR_0) {
   VAR_14 = FUNC_5(VAR_7->base + VAR_3);
   VAR_14 |= FUNC_0(VAR_15 - 32);
   FUNC_6(VAR_14, VAR_7->base + VAR_3);
  }
 }
}
