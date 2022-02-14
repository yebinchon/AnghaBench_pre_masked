
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct iavf_hw {int dummy; } ;
struct iavf_asq_cmd_details {int async; } ;
struct iavf_aq_desc {int datalen; int flags; void* cookie_low; void* cookie_high; } ;
typedef enum virtchnl_ops { ____Placeholder_virtchnl_ops } virtchnl_ops ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;
typedef int details ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (struct iavf_hw*,struct iavf_aq_desc*,int *,int ,struct iavf_asq_cmd_details*) ;
 int FUNC_3 (struct iavf_aq_desc*,int ) ;
 int FUNC_4 (struct iavf_asq_cmd_details*,int ,int) ;

enum iavf_status FUNC_5(struct iavf_hw *VAR_6,
     enum virtchnl_ops VAR_7,
     enum iavf_status VAR_8,
     u8 *VAR_9, u16 VAR_10,
     struct iavf_asq_cmd_details *VAR_11)
{
 struct iavf_asq_cmd_details VAR_12;
 struct iavf_aq_desc VAR_13;
 enum iavf_status VAR_14;

 FUNC_3(&VAR_13, VAR_5);
 VAR_13.flags |= FUNC_0((u16)VAR_3);
 VAR_13.cookie_high = FUNC_1(VAR_7);
 VAR_13.cookie_low = FUNC_1(VAR_8);
 if (VAR_10) {
  VAR_13.flags |= FUNC_0((u16)(VAR_0
      | VAR_2));
  if (VAR_10 > VAR_4)
   VAR_13.flags |= FUNC_0((u16)VAR_1);
  VAR_13.datalen = FUNC_0(VAR_10);
 }
 if (!VAR_11) {
  FUNC_4(&VAR_12, 0, sizeof(VAR_12));
  VAR_12.async = 1;
  VAR_11 = &VAR_12;
 }
 VAR_14 = FUNC_2(VAR_6, &VAR_13, VAR_9, VAR_10, VAR_11);
 return VAR_14;
}
