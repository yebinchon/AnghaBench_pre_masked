
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netxen_minidump {int md_template_size; int * md_capture_buff; int md_capture_mask; scalar_t__ md_capture_size; scalar_t__ md_template; } ;
struct netxen_adapter {scalar_t__ fw_mdump_rdy; struct netxen_minidump mdump; } ;
struct net_device {int dummy; } ;
struct ethtool_dump {int flag; scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,int *,scalar_t__) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct netxen_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_1, struct ethtool_dump *VAR_2,
   void *VAR_3)
{
 int VAR_4, VAR_5;
 u32 *VAR_6, *VAR_7;
 struct netxen_adapter *VAR_8 = FUNC_3(VAR_1);
 struct netxen_minidump *VAR_9 = &VAR_8->mdump;


 if (!VAR_8->fw_mdump_rdy) {
  FUNC_2(VAR_1, "Dump not available\n");
  return -VAR_0;
 }

 VAR_5 = VAR_9->md_template_size;
 VAR_6 = (u32 *) VAR_9->md_template;
 VAR_7 = VAR_3;
 for (VAR_4 = 0; VAR_4 < VAR_5/sizeof(u32); VAR_4++)
  *VAR_7++ = FUNC_0(*VAR_6++);


 FUNC_1(VAR_3 + VAR_5,
  VAR_9->md_capture_buff + VAR_9->md_template_size,
   VAR_9->md_capture_size);
 VAR_2->len = VAR_5 + VAR_9->md_capture_size;
 VAR_2->flag = VAR_9->md_capture_mask;


 FUNC_4(VAR_9->md_capture_buff);
 VAR_9->md_capture_buff = ((void*)0);
 VAR_8->fw_mdump_rdy = 0;
 FUNC_2(VAR_1, "extracted the fw dump Successfully\n");
 return 0;
}
