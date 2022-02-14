
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_frame {int y_addr; int cb_addr; int cr_addr; int aux_addr; int y_dmabuf_attachment; int cb_dmabuf_attachment; int cr_dmabuf_attachment; int aux_dmabuf_attachment; } ;
struct tegra_vde_h264_frame {int aux_offset; int aux_fd; int cr_offset; int cr_fd; int cb_offset; int cb_fd; int y_offset; int y_fd; } ;
struct tegra_vde {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_vde*,int ,int ,size_t,int ,int *,int*,int *,int) ;
 int FUNC_1 (struct tegra_vde*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct tegra_vde *VAR_1,
          struct video_frame *VAR_2,
          struct tegra_vde_h264_frame *VAR_3,
          enum dma_data_direction VAR_4,
          bool VAR_5,
          size_t VAR_6, size_t VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_3->y_fd,
          VAR_3->y_offset, VAR_6, VAR_0,
          &VAR_2->y_dmabuf_attachment,
          &VAR_2->y_addr,
          ((void*)0), VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_3->cb_fd,
          VAR_3->cb_offset, VAR_7, VAR_0,
          &VAR_2->cb_dmabuf_attachment,
          &VAR_2->cb_addr,
          ((void*)0), VAR_4);
 if (VAR_8)
  goto err_release_y;

 VAR_8 = FUNC_0(VAR_1, VAR_3->cr_fd,
          VAR_3->cr_offset, VAR_7, VAR_0,
          &VAR_2->cr_dmabuf_attachment,
          &VAR_2->cr_addr,
          ((void*)0), VAR_4);
 if (VAR_8)
  goto err_release_cb;

 if (VAR_5) {
  VAR_2->aux_addr = 0x64DEAD00;
  return 0;
 }

 VAR_8 = FUNC_0(VAR_1, VAR_3->aux_fd,
          VAR_3->aux_offset, VAR_7, VAR_0,
          &VAR_2->aux_dmabuf_attachment,
          &VAR_2->aux_addr,
          ((void*)0), VAR_4);
 if (VAR_8)
  goto err_release_cr;

 return 0;

err_release_cr:
 FUNC_1(VAR_1, VAR_2->cr_dmabuf_attachment, 1);
err_release_cb:
 FUNC_1(VAR_1, VAR_2->cb_dmabuf_attachment, 1);
err_release_y:
 FUNC_1(VAR_1, VAR_2->y_dmabuf_attachment, 1);

 return VAR_8;
}
