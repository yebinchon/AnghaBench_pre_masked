
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iavf_hw {int dummy; } ;
struct iavf_aqc_get_set_rss_key_data {int dummy; } ;
struct iavf_aqc_get_set_rss_key {int vsi_id; } ;
struct TYPE_2__ {int raw; } ;
struct iavf_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct iavf_hw*,struct iavf_aq_desc*,struct iavf_aqc_get_set_rss_key_data*,int,int *) ;
 int FUNC_2 (struct iavf_aq_desc*,int ) ;

__attribute__((used)) static enum
iavf_status FUNC_3(struct iavf_hw *VAR_7, u16 VAR_8,
        struct iavf_aqc_get_set_rss_key_data *VAR_9,
        bool VAR_10)
{
 enum iavf_status VAR_11;
 struct iavf_aq_desc VAR_12;
 struct iavf_aqc_get_set_rss_key *VAR_13 =
   (struct iavf_aqc_get_set_rss_key *)&VAR_12.params.raw;
 u16 VAR_14 = sizeof(struct iavf_aqc_get_set_rss_key_data);

 if (VAR_10)
  FUNC_2(&VAR_12,
        VAR_6);
 else
  FUNC_2(&VAR_12,
        VAR_5);


 VAR_12.flags |= FUNC_0((u16)VAR_3);
 VAR_12.flags |= FUNC_0((u16)VAR_4);

 VAR_13->vsi_id =
   FUNC_0((u16)((VAR_8 <<
       VAR_1) &
       VAR_0));
 VAR_13->vsi_id |= FUNC_0((u16)VAR_2);

 VAR_11 = FUNC_1(VAR_7, &VAR_12, VAR_9, VAR_14, ((void*)0));

 return VAR_11;
}
