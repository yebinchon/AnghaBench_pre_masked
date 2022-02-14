
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_3__* cdev; } ;
struct qed_dbg_feature {int buf_size; int dumped_dwords; int * dump_buf; } ;
typedef enum qed_dbg_features { ____Placeholder_qed_dbg_features } qed_dbg_features ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_4__ {struct qed_dbg_feature* features; } ;
struct TYPE_6__ {TYPE_1__ dbg_params; } ;
struct TYPE_5__ {int (* get_size ) (struct qed_hwfn*,struct qed_ptt*,int*) ;int (* perform_dump ) (struct qed_hwfn*,struct qed_ptt*,int*,int,int *) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*,int ) ;
 int FUNC_1 (struct qed_hwfn*,int) ;
 TYPE_2__* VAR_3 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int*,int,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;

__attribute__((used)) static enum dbg_status FUNC_6(struct qed_hwfn *VAR_4,
        struct qed_ptt *VAR_5,
        enum qed_dbg_features VAR_6)
{
 struct qed_dbg_feature *VAR_7 =
     &VAR_4->cdev->dbg_params.features[VAR_6];
 u32 VAR_8;
 enum dbg_status VAR_9;

 FUNC_0(VAR_4->cdev, "Collecting a debug feature [\"%s\"]\n",
    VAR_3[VAR_6].name);





 if (VAR_7->dump_buf) {
  FUNC_4(VAR_7->dump_buf);
  VAR_7->dump_buf = ((void*)0);
 }




 VAR_9 = VAR_3[VAR_6].get_size(VAR_4, VAR_5,
             &VAR_8);
 if (VAR_9 != VAR_1 && VAR_9 != VAR_0)
  return VAR_9;
 VAR_7->buf_size = VAR_8 * sizeof(u32);
 VAR_7->dump_buf = FUNC_5(VAR_7->buf_size);
 if (!VAR_7->dump_buf)
  return VAR_2;

 VAR_9 = VAR_3[VAR_6].
  perform_dump(VAR_4, VAR_5, (u32 *)VAR_7->dump_buf,
        VAR_7->buf_size / sizeof(u32),
        &VAR_7->dumped_dwords);







 if (VAR_9 == VAR_0)
  return VAR_1;

 if (VAR_9 != VAR_1)
  return VAR_9;


 VAR_9 = FUNC_1(VAR_4, VAR_6);
 return VAR_9;
}
