
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdp1_job {int dummy; } ;
struct fdp1_dev {int device_process_lock; } ;
struct fdp1_ctx {struct fdp1_dev* fdp1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct fdp1_ctx*,struct fdp1_job*) ;
 int FUNC_1 (struct fdp1_ctx*,struct fdp1_job*) ;
 int FUNC_2 (struct fdp1_ctx*,struct fdp1_job*) ;
 int FUNC_3 (struct fdp1_ctx*) ;
 int FUNC_4 (struct fdp1_ctx*) ;
 int FUNC_5 (struct fdp1_dev*,int ,int ) ;
 struct fdp1_job* FUNC_6 (struct fdp1_dev*) ;
 int FUNC_7 (struct fdp1_dev*,struct fdp1_job*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct fdp1_ctx *VAR_12)

{
 struct fdp1_dev *VAR_13 = VAR_12->fdp1;
 struct fdp1_job *VAR_14;
 unsigned long VAR_15;

 FUNC_8(&VAR_13->device_process_lock, VAR_15);


 VAR_14 = FUNC_6(VAR_13);
 if (!VAR_14) {




  FUNC_9(&VAR_13->device_process_lock, VAR_15);
  return 0;
 }


 FUNC_5(VAR_13, VAR_1, VAR_0);


 FUNC_0(VAR_12, VAR_14);


 FUNC_3(VAR_12);


 FUNC_4(VAR_12);


 FUNC_1(VAR_12, VAR_14);


 FUNC_2(VAR_12, VAR_14);


 FUNC_5(VAR_13, VAR_11, VAR_10);


 FUNC_5(VAR_13, VAR_5, VAR_4);




 FUNC_7(VAR_13, VAR_14);


 FUNC_5(VAR_13, VAR_3, VAR_2);


 FUNC_5(VAR_13, VAR_7, VAR_6);


 FUNC_5(VAR_13, VAR_9, VAR_8);

 FUNC_9(&VAR_13->device_process_lock, VAR_15);

 return 0;
}
