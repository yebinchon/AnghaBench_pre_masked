
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_geometry {unsigned long cylinders; int heads; int sectors; int start; } ;
struct block_device {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct block_device *VAR_1, struct hd_geometry *VAR_2)
{
 unsigned long VAR_3;






 VAR_3 = (VAR_0 * 8) & ~0x3f;
 VAR_2->cylinders = VAR_3 >> 6;
 VAR_2->heads = 4;
 VAR_2->sectors = 16;
 VAR_2->start = 4;
 return 0;
}
