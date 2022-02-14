
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int adapter_features; int qdio; } ;
struct fsf_qtcb_bottom_port {int cp_util; int cb_util; int a_util; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fsf_qtcb_bottom_port*) ;
 struct fsf_qtcb_bottom_port* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*,int,int,int) ;
 int FUNC_4 (int ,struct fsf_qtcb_bottom_port*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
         struct device_attribute *VAR_5,
         char *VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_0(VAR_4);
 struct fsf_qtcb_bottom_port *VAR_8;
 struct zfcp_adapter *VAR_9;
 int VAR_10;

 VAR_9 = (struct zfcp_adapter *) VAR_7->hostdata[0];
 if (!(VAR_9->adapter_features & VAR_2))
  return -VAR_1;

 VAR_8 = FUNC_2(sizeof(struct fsf_qtcb_bottom_port), VAR_3);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_9->qdio, VAR_8);
 if (!VAR_10)
  VAR_10 = FUNC_3(VAR_6, "%u %u %u\n", VAR_8->cp_util,
     VAR_8->cb_util, VAR_8->a_util);
 FUNC_1(VAR_8);
 return VAR_10;
}
