
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_ctl {int frame_pool; } ;
struct TYPE_2__ {int buffer_phy; } ;
struct ctl_pkg {int buffer; TYPE_1__ frame; struct tb_ctl* ctl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct ctl_pkg*) ;
 struct ctl_pkg* FUNC_2 (int,int ) ;

__attribute__((used)) static struct ctl_pkg *FUNC_3(struct tb_ctl *VAR_1)
{
 struct ctl_pkg *VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->ctl = VAR_1;
 VAR_2->buffer = FUNC_0(VAR_1->frame_pool, VAR_0,
         &VAR_2->frame.buffer_phy);
 if (!VAR_2->buffer) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }
 return VAR_2;
}
