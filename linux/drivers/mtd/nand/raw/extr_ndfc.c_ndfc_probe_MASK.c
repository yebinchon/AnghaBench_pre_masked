
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct ndfc_controller {size_t chip_select; scalar_t__ ndfcbase; struct platform_device* ofdev; int ndfc_control; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_0 (size_t) ;
 size_t VAR_5 ;
 size_t FUNC_1 (int const) ;
 size_t FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,struct ndfc_controller*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ndfc_controller*,int ) ;
 struct ndfc_controller* VAR_6 ;
 int * FUNC_8 (int ,char*,int*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct ndfc_controller *VAR_8;
 const __be32 *VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12, VAR_13;


 VAR_9 = FUNC_8(VAR_7->dev.of_node, "reg", &VAR_13);
 if (VAR_9 == ((void*)0) || VAR_13 != 12) {
  FUNC_3(&VAR_7->dev, "unable read reg property (%d)\n", VAR_13);
  return -VAR_2;
 }

 VAR_11 = FUNC_1(VAR_9[0]);
 if (VAR_11 >= VAR_5) {
  FUNC_3(&VAR_7->dev, "invalid CS number (%d)\n", VAR_11);
  return -VAR_0;
 }

 VAR_8 = &VAR_6[VAR_11];
 VAR_8->chip_select = VAR_11;

 FUNC_6(&VAR_8->ndfc_control);
 VAR_8->ofdev = VAR_7;
 FUNC_4(&VAR_7->dev, VAR_8);

 VAR_8->ndfcbase = FUNC_9(VAR_7->dev.of_node, 0);
 if (!VAR_8->ndfcbase) {
  FUNC_3(&VAR_7->dev, "failed to get memory\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_0(VAR_8->chip_select);


 VAR_9 = FUNC_8(VAR_7->dev.of_node, "ccr", ((void*)0));
 if (VAR_9)
  VAR_10 |= FUNC_2(VAR_9);

 FUNC_10(VAR_8->ndfcbase + VAR_4, VAR_10);


 VAR_9 = FUNC_8(VAR_7->dev.of_node, "bank-settings", ((void*)0));
 if (VAR_9) {
  int VAR_14 = VAR_3 + (VAR_8->chip_select << 2);
  FUNC_10(VAR_8->ndfcbase + VAR_14, FUNC_2(VAR_9));
 }

 VAR_12 = FUNC_7(VAR_8, VAR_7->dev.of_node);
 if (VAR_12) {
  FUNC_5(VAR_8->ndfcbase);
  return VAR_12;
 }

 return 0;
}
