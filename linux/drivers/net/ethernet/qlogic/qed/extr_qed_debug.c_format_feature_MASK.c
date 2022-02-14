
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qed_hwfn {TYPE_3__* cdev; } ;
struct qed_dbg_feature {char* dump_buf; int dumped_dwords; int buf_size; } ;
typedef enum qed_dbg_features { ____Placeholder_qed_dbg_features } qed_dbg_features ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
struct TYPE_4__ {scalar_t__ print_data; struct qed_dbg_feature* features; } ;
struct TYPE_6__ {TYPE_1__ dbg_params; } ;
struct TYPE_5__ {int (* results_buf_size ) (struct qed_hwfn*,int*,int,int*) ;int (* print_results ) (struct qed_hwfn*,int*,int,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (struct qed_hwfn*,int*,int,int*) ;
 int FUNC_3 (struct qed_hwfn*,int*,int,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static enum dbg_status FUNC_6(struct qed_hwfn *VAR_5,
          enum qed_dbg_features VAR_6)
{
 struct qed_dbg_feature *VAR_7 =
     &VAR_5->cdev->dbg_params.features[VAR_6];
 u32 VAR_8, VAR_9, VAR_10;
 enum dbg_status VAR_11;
 char *VAR_12;


 if (!VAR_4[VAR_6].results_buf_size)
  return VAR_1;


 VAR_11 = VAR_4[VAR_6].
  results_buf_size(VAR_5, (u32 *)VAR_7->dump_buf,
     VAR_7->dumped_dwords, &VAR_8);
 if (VAR_11 != VAR_1)
  return VAR_11;


 VAR_9 = VAR_8 - 1;
 VAR_8 = (VAR_8 + 3) & ~0x3;

 if (VAR_8 < VAR_3) {
  FUNC_0(VAR_5->cdev,
     "formatted size of feature was too small %d. Aborting\n",
     VAR_8);
  return VAR_0;
 }


 VAR_12 = FUNC_5(VAR_8);
 if (!VAR_12)
  return VAR_2;


 VAR_11 = VAR_4[VAR_6].
  print_results(VAR_5, (u32 *)VAR_7->dump_buf,
         VAR_7->dumped_dwords, VAR_12);
 if (VAR_11 != VAR_1) {
  FUNC_4(VAR_12);
  return VAR_11;
 }





 for (VAR_10 = VAR_9; VAR_10 < VAR_8; VAR_10++)
  VAR_12[VAR_10] = '\n';


 if (VAR_5->cdev->dbg_params.print_data)
  FUNC_1(VAR_12, VAR_8);




 FUNC_4(VAR_7->dump_buf);
 VAR_7->dump_buf = VAR_12;
 VAR_7->buf_size = VAR_8;
 VAR_7->dumped_dwords = VAR_8 / 4;
 return VAR_11;
}
