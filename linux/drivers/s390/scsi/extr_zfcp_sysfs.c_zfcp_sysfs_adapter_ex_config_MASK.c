
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int adapter_features; int qdio; } ;
struct fsf_statistics_info {int dummy; } ;
struct fsf_qtcb_bottom_config {struct fsf_statistics_info stat_info; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fsf_qtcb_bottom_config*) ;
 struct fsf_qtcb_bottom_config* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,struct fsf_qtcb_bottom_config*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4,
     struct fsf_statistics_info *VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_4);
 struct fsf_qtcb_bottom_config *VAR_7;
 struct zfcp_adapter *VAR_8;
 int VAR_9;

 VAR_8 = (struct zfcp_adapter *) VAR_6->hostdata[0];
 if (!(VAR_8->adapter_features & VAR_2))
  return -VAR_1;

 VAR_7 = FUNC_2(sizeof(struct fsf_qtcb_bottom_config),
         VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_8->qdio, VAR_7);
 if (!VAR_9)
  *VAR_5 = VAR_7->stat_info;

 FUNC_1(VAR_7);
 return VAR_9;
}
