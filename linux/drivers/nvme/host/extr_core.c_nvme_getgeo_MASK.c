
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_geometry {int heads; int sectors; int cylinders; } ;
struct block_device {int bd_disk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct block_device *VAR_0, struct hd_geometry *VAR_1)
{

 VAR_1->heads = 1 << 6;
 VAR_1->sectors = 1 << 5;
 VAR_1->cylinders = FUNC_0(VAR_0->bd_disk) >> 11;
 return 0;
}
