
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vvi ;
typedef int u8 ;
struct virtchnl_version_info {int minor; int major; } ;
struct iavf_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iavf_adapter*,int ,int *,int) ;

int FUNC_1(struct iavf_adapter *VAR_3)
{
 struct virtchnl_version_info VAR_4;

 VAR_4.major = VAR_1;
 VAR_4.minor = VAR_2;

 return FUNC_0(VAR_3, VAR_0, (u8 *)&VAR_4,
    sizeof(VAR_4));
}
