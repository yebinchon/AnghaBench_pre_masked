
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_13__ {int b_frame_interval_type; } ;
struct TYPE_12__ {TYPE_7__* ci_parent; TYPE_2__* ci_group; } ;
struct uvcg_frame {int * dw_frame_interval; TYPE_6__ frame; TYPE_5__ item; } ;
struct uvcg_format {scalar_t__ linked; } ;
struct mutex {int dummy; } ;
struct f_uvc_opts {struct mutex lock; scalar_t__ refcnt; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_14__ {TYPE_4__* ci_parent; } ;
struct TYPE_11__ {TYPE_3__* ci_parent; } ;
struct TYPE_10__ {struct config_item* ci_parent; } ;
struct TYPE_9__ {TYPE_1__* cg_subsys; } ;
struct TYPE_8__ {struct mutex su_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,size_t,int ,int*) ;
 int * FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (struct mutex*) ;
 int FUNC_5 (int *,int,int,int ,int *) ;
 struct f_uvc_opts* FUNC_6 (struct config_item*) ;
 struct uvcg_format* FUNC_7 (TYPE_7__*) ;
 struct uvcg_frame* FUNC_8 (struct config_item*) ;
 int VAR_5 ;

__attribute__((used)) static ssize_t FUNC_9(struct config_item *VAR_6,
        const char *VAR_7, size_t VAR_8)
{
 struct uvcg_frame *VAR_9 = FUNC_8(VAR_6);
 struct f_uvc_opts *VAR_10;
 struct config_item *VAR_11;
 struct uvcg_format *VAR_12;
 struct mutex *VAR_13 = &VAR_9->item.ci_group->cg_subsys->su_mutex;
 int VAR_14 = 0, VAR_15 = 0;
 u32 *VAR_16, *VAR_17;

 FUNC_3(VAR_13);

 VAR_11 = VAR_9->item.ci_parent->ci_parent->ci_parent->ci_parent;
 VAR_10 = FUNC_6(VAR_11);
 VAR_12 = FUNC_7(VAR_9->item.ci_parent);

 FUNC_3(&VAR_10->lock);
 if (VAR_12->linked || VAR_10->refcnt) {
  VAR_14 = -VAR_0;
  goto end;
 }

 VAR_14 = FUNC_0(VAR_7, VAR_8, VAR_3, &VAR_15);
 if (VAR_14)
  goto end;

 VAR_17 = VAR_16 = FUNC_1(VAR_15, sizeof(u32), VAR_2);
 if (!VAR_16) {
  VAR_14 = -VAR_1;
  goto end;
 }

 VAR_14 = FUNC_0(VAR_7, VAR_8, VAR_4, VAR_17);
 if (VAR_14) {
  FUNC_2(VAR_16);
  goto end;
 }

 FUNC_2(VAR_9->dw_frame_interval);
 VAR_9->dw_frame_interval = VAR_16;
 VAR_9->frame.b_frame_interval_type = VAR_15;
 FUNC_5(VAR_9->dw_frame_interval, VAR_15, sizeof(*VAR_9->dw_frame_interval),
      VAR_5, ((void*)0));
 VAR_14 = VAR_8;

end:
 FUNC_4(&VAR_10->lock);
 FUNC_4(VAR_13);
 return VAR_14;
}
