
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iavf_hw {int dummy; } ;
struct iavf_aqc_get_set_rss_lut {int flags; int vsi_id; } ;
struct TYPE_2__ {int raw; } ;
struct iavf_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum iavf_status { ____Placeholder_iavf_status } iavf_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct iavf_hw*,struct iavf_aq_desc*,int *,int,int *) ;
 int FUNC_2 (struct iavf_aq_desc*,int ) ;

__attribute__((used)) static enum iavf_status FUNC_3(struct iavf_hw *VAR_11,
      u16 VAR_12, bool VAR_13,
      u8 *VAR_14, u16 VAR_15,
      bool VAR_16)
{
 enum iavf_status VAR_17;
 struct iavf_aq_desc VAR_18;
 struct iavf_aqc_get_set_rss_lut *VAR_19 =
     (struct iavf_aqc_get_set_rss_lut *)&VAR_18.params.raw;

 if (VAR_16)
  FUNC_2(&VAR_18,
        VAR_10);
 else
  FUNC_2(&VAR_18,
        VAR_9);


 VAR_18.flags |= FUNC_0((u16)VAR_7);
 VAR_18.flags |= FUNC_0((u16)VAR_8);

 VAR_19->vsi_id =
   FUNC_0((u16)((VAR_12 <<
       VAR_5) &
       VAR_4));
 VAR_19->vsi_id |= FUNC_0((u16)VAR_6);

 if (VAR_13)
  VAR_19->flags |= FUNC_0((u16)
     ((VAR_1 <<
     VAR_2) &
     VAR_0));
 else
  VAR_19->flags |= FUNC_0((u16)
     ((VAR_3 <<
     VAR_2) &
     VAR_0));

 VAR_17 = FUNC_1(VAR_11, &VAR_18, VAR_14, VAR_15, ((void*)0));

 return VAR_17;
}
