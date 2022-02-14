
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ds1307 {int dev; } ;
struct chip_desc {int (* do_trickle_setup ) (struct ds1307*,int ,int) ;} ;


 scalar_t__ FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (struct ds1307*,int ,int) ;

__attribute__((used)) static u8 FUNC_3(struct ds1307 *VAR_0,
         const struct chip_desc *VAR_1)
{
 u32 VAR_2;
 bool VAR_3 = 1;

 if (!VAR_1->do_trickle_setup)
  return 0;

 if (FUNC_1(VAR_0->dev, "trickle-resistor-ohms",
         &VAR_2))
  return 0;

 if (FUNC_0(VAR_0->dev, "trickle-diode-disable"))
  VAR_3 = 0;

 return VAR_1->do_trickle_setup(VAR_0, VAR_2, VAR_3);
}
