
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hcp_ehea_port_cb4 {int jumbo_frame; } ;
struct ehea_port {int logical_port_id; TYPE_1__* adapter; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,struct hcp_ehea_port_cb4*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,struct hcp_ehea_port_cb4*) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct ehea_port *VAR_6, int *VAR_7)
{
 struct hcp_ehea_port_cb4 *VAR_8;
 u64 VAR_9;
 int VAR_10 = 0;

 *VAR_7 = 0;


 VAR_8 = (void *)FUNC_3(VAR_2);
 if (!VAR_8) {
  FUNC_4("no mem for cb4\n");
  VAR_10 = -VAR_1;
  goto out;
 } else {
  VAR_9 = FUNC_1(VAR_6->adapter->handle,
           VAR_6->logical_port_id,
           VAR_3,
           VAR_4, VAR_8);
  if (VAR_9 == VAR_5) {
   if (VAR_8->jumbo_frame)
    *VAR_7 = 1;
   else {
    VAR_8->jumbo_frame = 1;
    VAR_9 = FUNC_0(VAR_6->adapter->
              handle,
              VAR_6->
              logical_port_id,
              VAR_3,
              VAR_4,
              VAR_8);
    if (VAR_9 == VAR_5)
     *VAR_7 = 1;
   }
  } else
   VAR_10 = -VAR_0;

  FUNC_2((unsigned long)VAR_8);
 }
out:
 return VAR_10;
}
