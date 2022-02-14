
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnt_rx_desc {int rd_info; } ;
struct TYPE_2__ {int rx_descs1; } ;
struct vnt_private {struct vnt_rx_desc* aRD1Ring; TYPE_1__ opts; } ;


 int FUNC_0 (struct vnt_private*,struct vnt_rx_desc*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct vnt_private *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->opts.rx_descs1; VAR_1++) {
  struct vnt_rx_desc *VAR_2 = &VAR_0->aRD1Ring[VAR_1];

  FUNC_0(VAR_0, VAR_2);
  FUNC_1(VAR_2->rd_info);
 }
}
