
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hd_geometry {int dummy; } ;
struct msb_data {struct hd_geometry geometry; } ;
struct block_device {TYPE_1__* bd_disk; } ;
struct TYPE_2__ {struct msb_data* private_data; } ;



__attribute__((used)) static int FUNC_0(struct block_device *VAR_0,
     struct hd_geometry *VAR_1)
{
 struct msb_data *VAR_2 = VAR_0->bd_disk->private_data;
 *VAR_1 = VAR_2->geometry;
 return 0;
}
