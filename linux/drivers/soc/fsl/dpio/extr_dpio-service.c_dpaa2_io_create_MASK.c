
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpaa2_io_desc {size_t cpu; scalar_t__ receives_notifications; int qman_version; int regs_cinh; int regs_cena; } ;
struct TYPE_2__ {int qman_version; int cinh_bar; int cena_bar; } ;
struct dpaa2_io {struct device* dev; int node; int swp; struct dpaa2_io_desc dpio_desc; int notifications; int lock_notifications; int lock_mgmt_cmd; TYPE_1__ swp_desc; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct dpaa2_io** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct dpaa2_io*) ;
 struct dpaa2_io* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 size_t FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

struct dpaa2_io *FUNC_12(const struct dpaa2_io_desc *VAR_6,
     struct device *VAR_7)
{
 struct dpaa2_io *VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);

 if (!VAR_8)
  return ((void*)0);


 if (VAR_6->cpu != VAR_0 && VAR_6->cpu >= FUNC_4()) {
  FUNC_1(VAR_8);
  return ((void*)0);
 }

 VAR_8->dpio_desc = *VAR_6;
 VAR_8->swp_desc.cena_bar = VAR_8->dpio_desc.regs_cena;
 VAR_8->swp_desc.cinh_bar = VAR_8->dpio_desc.regs_cinh;
 VAR_8->swp_desc.qman_version = VAR_8->dpio_desc.qman_version;
 VAR_8->swp = FUNC_5(&VAR_8->swp_desc);

 if (!VAR_8->swp) {
  FUNC_1(VAR_8);
  return ((void*)0);
 }

 FUNC_0(&VAR_8->node);
 FUNC_10(&VAR_8->lock_mgmt_cmd);
 FUNC_10(&VAR_8->lock_notifications);
 FUNC_0(&VAR_8->notifications);


 FUNC_7(VAR_8->swp,
     VAR_2);
 FUNC_6(VAR_8->swp, 0xffffffff);
 if (VAR_8->dpio_desc.receives_notifications)
  FUNC_8(VAR_8->swp, 0, 1);

 FUNC_9(&VAR_5);
 FUNC_3(&VAR_8->node, &VAR_4);
 if (VAR_6->cpu >= 0 && !VAR_3[VAR_6->cpu])
  VAR_3[VAR_6->cpu] = VAR_8;
 FUNC_11(&VAR_5);

 VAR_8->dev = VAR_7;

 return VAR_8;
}
