
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ length; scalar_t__ actual; } ;
struct fotg210_request {TYPE_3__ req; } ;
struct TYPE_4__ {scalar_t__ maxpacket; } ;
struct fotg210_ep {TYPE_2__* fotg210; TYPE_1__ ep; scalar_t__ dir_in; } ;
struct TYPE_5__ {scalar_t__ reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fotg210_ep*,struct fotg210_request*,int ) ;
 int FUNC_1 (struct fotg210_ep*,struct fotg210_request*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct fotg210_ep *VAR_2,
    struct fotg210_request *VAR_3)
{
 if (!VAR_3->req.length) {
  FUNC_0(VAR_2, VAR_3, 0);
  return;
 }
 if (VAR_2->dir_in) {
  FUNC_1(VAR_2, VAR_3);
  if ((VAR_3->req.length == VAR_3->req.actual) ||
      (VAR_3->req.actual < VAR_2->ep.maxpacket))
   FUNC_0(VAR_2, VAR_3, 0);
 } else {
  u32 VAR_4 = FUNC_2(VAR_2->fotg210->reg + VAR_1);

  VAR_4 &= ~VAR_0;
  FUNC_3(VAR_4, VAR_2->fotg210->reg + VAR_1);
 }
}
