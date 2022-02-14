
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ScsiReqBlk {scalar_t__ total_xfer_length; } ;


 int FUNC_0 (struct ScsiReqBlk*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ScsiReqBlk *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->total_xfer_length - 1);
}
