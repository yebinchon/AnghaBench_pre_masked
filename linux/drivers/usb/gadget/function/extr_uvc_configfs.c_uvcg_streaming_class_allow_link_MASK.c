
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvcg_streaming_header {int linked; } ;
struct uvc_descriptor_header {int dummy; } ;
struct mutex {int dummy; } ;
struct f_uvc_opts {struct mutex lock; int uvc_color_matching; scalar_t__ refcnt; } ;
struct config_item {struct config_item* ci_parent; TYPE_2__* ci_group; } ;
struct TYPE_4__ {TYPE_1__* cg_subsys; } ;
struct TYPE_3__ {struct mutex su_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct uvc_descriptor_header*** FUNC_0 (struct config_item*,struct f_uvc_opts*) ;
 int FUNC_1 (struct uvcg_streaming_header*,...) ;
 struct config_item* FUNC_2 (int ,char*) ;
 int FUNC_3 (struct config_item*) ;
 struct uvc_descriptor_header** FUNC_4 (size_t,int,int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (size_t,int ) ;
 int FUNC_7 (struct mutex*) ;
 int FUNC_8 (struct mutex*) ;
 int FUNC_9 (struct config_item*) ;
 struct f_uvc_opts* FUNC_10 (struct config_item*) ;
 struct uvcg_streaming_header* FUNC_11 (struct config_item*) ;

__attribute__((used)) static int FUNC_12(struct config_item *VAR_6,
        struct config_item *VAR_7)
{
 struct config_item *VAR_8, *VAR_9;
 struct f_uvc_opts *VAR_10;
 struct mutex *VAR_11 = &VAR_6->ci_group->cg_subsys->su_mutex;
 struct uvc_descriptor_header ***VAR_12, **VAR_13;
 struct uvcg_streaming_header *VAR_14;
 void *VAR_15, *VAR_16;
 size_t VAR_17 = 0, VAR_18 = 0;
 int VAR_19 = -VAR_1;

 FUNC_7(VAR_11);

 VAR_8 = VAR_6->ci_parent->ci_parent;
 VAR_9 = FUNC_2(FUNC_9(VAR_8), "header");
 if (!VAR_9 || VAR_7->ci_parent != VAR_9)
  goto out;

 VAR_10 = FUNC_10(VAR_8->ci_parent);

 FUNC_7(&VAR_10->lock);

 VAR_12 = FUNC_0(VAR_6, VAR_10);
 if (!VAR_12 || *VAR_12 || VAR_10->refcnt) {
  VAR_19 = -VAR_0;
  goto unlock;
 }

 VAR_14 = FUNC_11(VAR_7);
 VAR_19 = FUNC_1(VAR_14, &VAR_17, &VAR_18, VAR_4);
 if (VAR_19)
  goto unlock;

 VAR_18 += 2;
 *VAR_12 = FUNC_4(VAR_18, sizeof(void *), VAR_3);
 if (!*VAR_12) {
  VAR_19 = -VAR_2;
  goto unlock;
 }

 VAR_15 = VAR_16 = FUNC_6(VAR_17, VAR_3);
 if (!VAR_15) {
  FUNC_5(*VAR_12);
  *VAR_12 = ((void*)0);
  VAR_19 = -VAR_2;
  goto unlock;
 }
 VAR_13 = *VAR_12;
 VAR_19 = FUNC_1(VAR_14, &VAR_15, &VAR_13,
       VAR_5);
 if (VAR_19) {
  FUNC_5(*VAR_12);
  *VAR_12 = ((void*)0);




  FUNC_5(VAR_16);
  goto unlock;
 }
 *VAR_13 = (struct uvc_descriptor_header *)&VAR_10->uvc_color_matching;

 ++VAR_14->linked;
 VAR_19 = 0;

unlock:
 FUNC_8(&VAR_10->lock);
out:
 FUNC_3(VAR_9);
 FUNC_8(VAR_11);
 return VAR_19;
}
