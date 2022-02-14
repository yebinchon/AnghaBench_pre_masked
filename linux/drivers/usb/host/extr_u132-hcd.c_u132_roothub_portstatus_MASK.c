
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct u132 {int num_ports; TYPE_1__* platform_dev; } ;
typedef int __le32 ;
struct TYPE_4__ {int * portstatus; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int,int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (struct u132*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct u132 *VAR_2, __le32 *VAR_3, u16 VAR_4)
{
 if (VAR_4 == 0 || VAR_4 > VAR_2->num_ports) {
  return -VAR_0;
 } else {
  int VAR_5 = VAR_4 - 1;
  u32 VAR_6 = -1;
  int VAR_7 = FUNC_2(VAR_2,
   VAR_1.portstatus[VAR_5], &VAR_6);
  *VAR_3 = FUNC_0(VAR_6);
  if (*(u16 *) (VAR_3 + 2)) {
   FUNC_1(&VAR_2->platform_dev->dev, "Port %d Status Chan"
    "ge = %08X\n", VAR_5, *VAR_3);
  }
  return VAR_7;
 }
}
