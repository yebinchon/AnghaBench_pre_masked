
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; int transfer_buffer; struct net_device* context; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->context;

 FUNC_0(VAR_0->transfer_buffer);

 if (VAR_0->status)
  FUNC_1(VAR_1, "urb status received: %d\n", VAR_0->status);
}
