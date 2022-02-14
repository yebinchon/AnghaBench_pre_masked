
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchtec_ntb {int ntb; struct switchtec_dev* stdev; } ;
struct switchtec_dev {int link_notifier; struct switchtec_ntb* sndev; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct class_interface {int dummy; } ;
struct TYPE_2__ {int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct switchtec_ntb*) ;
 struct switchtec_ntb* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct switchtec_ntb*) ;
 int FUNC_7 (struct switchtec_ntb*) ;
 int FUNC_8 (struct switchtec_ntb*) ;
 int FUNC_9 (struct switchtec_ntb*) ;
 int FUNC_10 (struct switchtec_ntb*) ;
 int FUNC_11 (struct switchtec_ntb*) ;
 int FUNC_12 (struct switchtec_ntb*) ;
 int FUNC_13 (struct switchtec_ntb*) ;
 int FUNC_14 (struct switchtec_ntb*) ;
 int FUNC_15 (struct switchtec_ntb*) ;
 int FUNC_16 (struct switchtec_ntb*) ;
 int VAR_6 ;
 int FUNC_17 (struct switchtec_ntb*,int ,int ) ;
 struct switchtec_dev* FUNC_18 (struct device*) ;

__attribute__((used)) static int FUNC_19(struct device *VAR_7,
        struct class_interface *VAR_8)
{
 struct switchtec_dev *VAR_9 = FUNC_18(VAR_7);
 struct switchtec_ntb *VAR_10;
 int VAR_11;

 VAR_9->sndev = ((void*)0);

 if (VAR_9->pdev->class != (VAR_5 << 8))
  return -VAR_0;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_2, FUNC_2(VAR_7));
 if (!VAR_10)
  return -VAR_1;

 VAR_10->stdev = VAR_9;
 VAR_11 = FUNC_16(VAR_10);
 if (VAR_11)
  goto free_and_exit;

 FUNC_13(VAR_10);

 VAR_11 = FUNC_14(VAR_10);
 if (VAR_11)
  goto free_and_exit;

 VAR_11 = FUNC_9(VAR_10);
 if (VAR_11)
  goto free_and_exit;

 FUNC_10(VAR_10);
 FUNC_12(VAR_10);

 VAR_11 = FUNC_15(VAR_10);
 if (VAR_11)
  goto deinit_crosslink;

 VAR_11 = FUNC_11(VAR_10);
 if (VAR_11)
  goto deinit_shared_and_exit;






 FUNC_17(VAR_10, VAR_3, VAR_4);

 VAR_11 = FUNC_5(&VAR_10->ntb);
 if (VAR_11)
  goto deinit_and_exit;

 VAR_9->sndev = VAR_10;
 VAR_9->link_notifier = VAR_6;
 FUNC_1(VAR_7, "NTB device registered\n");

 return 0;

deinit_and_exit:
 FUNC_7(VAR_10);
deinit_shared_and_exit:
 FUNC_8(VAR_10);
deinit_crosslink:
 FUNC_6(VAR_10);
free_and_exit:
 FUNC_3(VAR_10);
 FUNC_0(VAR_7, "failed to register ntb device: %d\n", VAR_11);
 return VAR_11;
}
