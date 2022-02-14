
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iavf_hw {int dummy; } ;
struct iavf_aqc_queue_shutdown {int driver_unloading; } ;
struct TYPE_2__ {int raw; } ;
struct iavf_aq_desc {TYPE_1__ params; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct iavf_hw*,struct iavf_aq_desc*,int *,int ,int *) ;
 int FUNC_2 (struct iavf_aq_desc*,int ) ;

enum iavf_status FUNC_3(struct iavf_hw *VAR_2, bool VAR_3)
{
 struct iavf_aq_desc VAR_4;
 struct iavf_aqc_queue_shutdown *VAR_5 =
  (struct iavf_aqc_queue_shutdown *)&VAR_4.params.raw;
 enum iavf_status VAR_6;

 FUNC_2(&VAR_4, VAR_1);

 if (VAR_3)
  VAR_5->driver_unloading = FUNC_0(VAR_0);
 VAR_6 = FUNC_1(VAR_2, &VAR_4, ((void*)0), 0, ((void*)0));

 return VAR_6;
}
