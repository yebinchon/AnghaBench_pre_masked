
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_vde_h264_frame {int frame_num; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
        struct tegra_vde_h264_frame *VAR_2)
{
 if (VAR_2->frame_num > 0x7FFFFF) {
  FUNC_0(VAR_1, "Bad frame_num %u\n", VAR_2->frame_num);
  return -VAR_0;
 }

 return 0;
}
