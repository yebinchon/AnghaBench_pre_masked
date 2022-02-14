
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct video_frame {int dummy; } ;
struct tegra_vde {int dummy; } ;


 int FUNC_0 (struct tegra_vde*,struct video_frame*,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct tegra_vde *VAR_0,
     struct video_frame *VAR_1,
     unsigned int VAR_2,
     u32 VAR_3, u32 VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_0(VAR_0, &VAR_1[VAR_5], VAR_5,
     VAR_3, VAR_4);

 for (; VAR_5 < 17; VAR_5++)
  FUNC_0(VAR_0, ((void*)0), VAR_5, 0, 0);
}
