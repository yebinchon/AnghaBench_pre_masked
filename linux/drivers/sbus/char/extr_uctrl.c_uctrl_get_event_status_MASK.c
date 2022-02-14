
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uctrl_txn {int outbits; int* outbuf; int * inbuf; scalar_t__ inbits; int opcode; } ;
struct TYPE_2__ {int event_status; } ;
struct uctrl_driver {TYPE_1__ status; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct uctrl_driver*,struct uctrl_txn*) ;

__attribute__((used)) static void FUNC_2(struct uctrl_driver *VAR_1)
{
 struct uctrl_txn VAR_2;
 u8 VAR_3[2];

 VAR_2.opcode = VAR_0;
 VAR_2.inbits = 0;
 VAR_2.outbits = 2;
 VAR_2.inbuf = ((void*)0);
 VAR_2.outbuf = VAR_3;

 FUNC_1(VAR_1, &VAR_2);

 FUNC_0(("bytes %x %x\n", (VAR_3[0] & 0xff), (VAR_3[1] & 0xff)));
 VAR_1->status.event_status =
  ((VAR_3[0] & 0xff) << 8) | (VAR_3[1] & 0xff);
 FUNC_0(("ev is %x\n", VAR_1->status.event_status));
}
