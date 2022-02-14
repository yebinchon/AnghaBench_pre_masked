
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vring_virtqueue {int use_dma_api; } ;
struct vring_desc_extra_packed {int flags; int len; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct vring_virtqueue const*) ;

__attribute__((used)) static void FUNC_3(const struct vring_virtqueue *VAR_4,
         struct vring_desc_extra_packed *VAR_5)
{
 u16 VAR_6;

 if (!VAR_4->use_dma_api)
  return;

 VAR_6 = VAR_5->flags;

 if (VAR_6 & VAR_2) {
  FUNC_1(FUNC_2(VAR_4),
     VAR_5->addr, VAR_5->len,
     (VAR_6 & VAR_3) ?
     VAR_0 : VAR_1);
 } else {
  FUNC_0(FUNC_2(VAR_4),
          VAR_5->addr, VAR_5->len,
          (VAR_6 & VAR_3) ?
          VAR_0 : VAR_1);
 }
}
