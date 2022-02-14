
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_frame {int y_dmabuf_attachment; int cb_dmabuf_attachment; int cr_dmabuf_attachment; int aux_dmabuf_attachment; } ;
struct tegra_vde {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct tegra_vde*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct tegra_vde *VAR_0,
         struct video_frame *VAR_1,
         enum dma_data_direction VAR_2,
         bool VAR_3,
         bool VAR_4)
{
 if (!VAR_3)
  FUNC_0(VAR_0, VAR_1->aux_dmabuf_attachment,
          VAR_4);

 FUNC_0(VAR_0, VAR_1->cr_dmabuf_attachment, VAR_4);
 FUNC_0(VAR_0, VAR_1->cb_dmabuf_attachment, VAR_4);
 FUNC_0(VAR_0, VAR_1->y_dmabuf_attachment, VAR_4);
}
