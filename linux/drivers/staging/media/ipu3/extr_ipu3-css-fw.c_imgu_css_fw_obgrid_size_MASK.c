
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ipu3_uapi_obgrid_param {int dummy; } ;
struct TYPE_6__ {unsigned int num_stripes; } ;
struct TYPE_7__ {int max_height; int max_width; } ;
struct TYPE_8__ {TYPE_1__ iterator; TYPE_2__ internal; } ;
struct TYPE_9__ {TYPE_3__ sp; } ;
struct TYPE_10__ {TYPE_4__ isp; } ;
struct imgu_fw_info {TYPE_5__ info; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_2 (unsigned int) ;

unsigned int FUNC_3(const struct imgu_fw_info *VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_2->info.isp.sp.internal.max_width,
       VAR_0 * 2) + 1;
 unsigned int VAR_4 = FUNC_1(VAR_2->info.isp.sp.internal.max_height,
        VAR_0 * 2) + 1;
 unsigned int VAR_5;

 VAR_3 = FUNC_0(VAR_3, VAR_1 / 4);
 VAR_5 = FUNC_2(VAR_3 * VAR_4 *
     sizeof(struct ipu3_uapi_obgrid_param)) *
     VAR_2->info.isp.sp.iterator.num_stripes;
 return VAR_5;
}
