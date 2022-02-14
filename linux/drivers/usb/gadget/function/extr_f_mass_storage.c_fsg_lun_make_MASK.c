
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct fsg_opts {int lock; TYPE_2__* common; scalar_t__ refcnt; } ;
struct TYPE_3__ {int ci_name; } ;
struct config_group {TYPE_1__ cg_item; } ;
struct fsg_lun_opts {size_t lun_id; struct config_group group; scalar_t__ lun; } ;
struct fsg_lun_config {int removable; } ;
typedef int config ;
struct TYPE_4__ {scalar_t__* luns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct config_group* FUNC_0 (int) ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (struct config_group*,char const*,int *) ;
 int FUNC_3 (TYPE_2__*,struct fsg_lun_config*,size_t,char const*,char const**) ;
 int VAR_6 ;
 int FUNC_4 (struct fsg_lun_opts*) ;
 int FUNC_5 (char*,int ,size_t*) ;
 struct fsg_lun_opts* FUNC_6 (int,int ) ;
 int FUNC_7 (struct fsg_lun_config*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char const*,char) ;
 struct fsg_opts* FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static struct config_group *FUNC_13(struct config_group *VAR_7,
      const char *VAR_8)
{
 struct fsg_lun_opts *VAR_9;
 struct fsg_opts *VAR_10;
 struct fsg_lun_config VAR_11;
 char *VAR_12;
 u8 VAR_13;
 int VAR_14;

 VAR_12 = FUNC_11(VAR_8, '.');
 if (!VAR_12) {
  FUNC_10("Unable to locate . in LUN.NUMBER\n");
  return FUNC_0(-VAR_1);
 }
 VAR_12++;

 VAR_14 = FUNC_5(VAR_12, 0, &VAR_13);
 if (VAR_14)
  return FUNC_0(VAR_14);

 VAR_10 = FUNC_12(&VAR_7->cg_item);
 if (VAR_13 >= VAR_4)
  return FUNC_0(-VAR_3);
 VAR_13 = FUNC_1(VAR_13, VAR_4);

 FUNC_8(&VAR_10->lock);
 if (VAR_10->refcnt || VAR_10->common->luns[VAR_13]) {
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_5);
 if (!VAR_9) {
  VAR_14 = -VAR_2;
  goto out;
 }

 FUNC_7(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.removable = 1;

 VAR_14 = FUNC_3(VAR_10->common, &VAR_11, VAR_13, VAR_8,
        (const char **)&VAR_7->cg_item.ci_name);
 if (VAR_14) {
  FUNC_4(VAR_9);
  goto out;
 }
 VAR_9->lun = VAR_10->common->luns[VAR_13];
 VAR_9->lun_id = VAR_13;
 FUNC_9(&VAR_10->lock);

 FUNC_2(&VAR_9->group, VAR_8, &VAR_6);

 return &VAR_9->group;
out:
 FUNC_9(&VAR_10->lock);
 return FUNC_0(VAR_14);
}
