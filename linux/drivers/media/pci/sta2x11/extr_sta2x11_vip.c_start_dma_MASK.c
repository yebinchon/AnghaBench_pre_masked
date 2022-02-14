
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vip_buffer {scalar_t__ dma; } ;
struct TYPE_2__ {scalar_t__ field; int width; } ;
struct sta2x11_vip {int slock; TYPE_1__ format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sta2x11_vip*,int ) ;
 int FUNC_1 (struct sta2x11_vip*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sta2x11_vip *VAR_5, struct vip_buffer *VAR_6)
{
 unsigned long VAR_7 = 0;

 if (VAR_5->format.field == VAR_4)
  VAR_7 = VAR_5->format.width * 2;

 FUNC_2(&VAR_5->slock);

 FUNC_1(VAR_5, VAR_0, FUNC_0(VAR_5, VAR_0) | VAR_1);

 FUNC_1(VAR_5, VAR_3, (u32)VAR_6->dma);
 FUNC_1(VAR_5, VAR_2, (u32)VAR_6->dma + VAR_7);
 FUNC_3(&VAR_5->slock);
}
