
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qed_hwfn {int cdev; } ;
struct TYPE_2__ {size_t engine_for_debug; } ;
struct qed_dev {TYPE_1__ dbg_params; struct qed_hwfn* hwfns; } ;
typedef enum qed_nvm_images { ____Placeholder_qed_nvm_images } qed_nvm_images ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct qed_hwfn*,int,scalar_t__*) ;
 int FUNC_3 (struct qed_hwfn*,int,void*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct qed_dev *VAR_1, void *VAR_2,
        u32 *VAR_3,
        enum qed_nvm_images VAR_4)
{
 struct qed_hwfn *VAR_5 =
  &VAR_1->hwfns[VAR_1->dbg_params.engine_for_debug];
 u32 VAR_6, VAR_7;
 __be32 VAR_8;
 int VAR_9;

 *VAR_3 = 0;
 VAR_9 = FUNC_2(VAR_5, VAR_4, &VAR_6);
 if (VAR_9)
  return VAR_9;

 FUNC_0(VAR_5->cdev,
    "Collecting a debug feature [\"nvram image %d\"]\n",
    VAR_4);

 VAR_6 = FUNC_4(VAR_6, sizeof(u32));
 VAR_9 = FUNC_3(VAR_5, VAR_4, VAR_2, VAR_6);
 if (VAR_9)
  return VAR_9;


 if (VAR_4 != VAR_0)
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7 += 4) {
   VAR_8 = FUNC_1(*(u32 *)(VAR_2 + VAR_7));
   *(u32 *)(VAR_2 + VAR_7) = VAR_8;
  }

 *VAR_3 = VAR_6;

 return VAR_9;
}
