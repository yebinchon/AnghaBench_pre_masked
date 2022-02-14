
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_camera_dev {int dummy; } ;
struct pxa_buffer {int active_dma; int nb_planes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct pxa_camera_dev *VAR_3,
        struct pxa_buffer *VAR_4)
{
 VAR_4->active_dma = VAR_2;
 if (VAR_4->nb_planes == 3)
  VAR_4->active_dma |= VAR_0 | VAR_1;
}
