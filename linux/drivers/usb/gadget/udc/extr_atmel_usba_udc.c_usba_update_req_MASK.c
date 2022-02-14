
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ length; scalar_t__ actual; } ;
struct usba_request {TYPE_1__ req; } ;
struct usba_ep {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct usba_ep *VAR_1, struct usba_request *VAR_2, u32 VAR_3)
{
 VAR_2->req.actual = VAR_2->req.length - FUNC_0(VAR_0, VAR_3);
}
