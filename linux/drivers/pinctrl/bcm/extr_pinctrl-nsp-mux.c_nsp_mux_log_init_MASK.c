
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u32 ;
struct nsp_pinctrl {struct nsp_mux_log* mux_log; int dev; } ;
struct TYPE_6__ {scalar_t__ alt; int shift; int base; } ;
struct nsp_mux_log {int is_configured; TYPE_2__ mux; } ;
struct TYPE_5__ {int shift; int base; } ;
struct TYPE_7__ {TYPE_1__ mux; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nsp_mux_log* FUNC_1 (int ,unsigned int,int,int ) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct nsp_pinctrl *VAR_3)
{
 struct nsp_mux_log *VAR_4;
 unsigned int VAR_5;
 u32 VAR_6 = FUNC_0(VAR_2);

 VAR_3->mux_log = FUNC_1(VAR_3->dev, VAR_6,
     sizeof(struct nsp_mux_log),
     VAR_1);
 if (!VAR_3->mux_log)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_4 = &VAR_3->mux_log[VAR_5];
  VAR_4->mux.base = VAR_2[VAR_5].mux.base;
  VAR_4->mux.shift = VAR_2[VAR_5].mux.shift;
  VAR_4->mux.alt = 0;
  VAR_4->is_configured = 0;
 }

 return 0;
}
