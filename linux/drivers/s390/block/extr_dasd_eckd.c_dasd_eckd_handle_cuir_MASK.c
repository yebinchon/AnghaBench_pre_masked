
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct dasd_device {TYPE_1__* discipline; } ;
struct dasd_cuir_message {scalar_t__ code; int message_id; } ;
typedef int __u8 ;
struct TYPE_2__ {int (* check_attention ) (struct dasd_device*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct dasd_device*,char*,int,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct dasd_device*,int ,struct dasd_cuir_message*) ;
 int FUNC_2 (struct dasd_device*,int ,struct dasd_cuir_message*) ;
 int FUNC_3 (struct dasd_device*,int,int ,int ) ;
 int FUNC_4 (struct dasd_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct dasd_device *VAR_6, void *VAR_7,
     __u8 VAR_8)
{
 struct dasd_cuir_message *VAR_9 = VAR_7;
 int VAR_10;

 FUNC_0(VAR_2, VAR_6,
        "CUIR request: %016llx %016llx %016llx %08x",
        ((u64 *)VAR_9)[0], ((u64 *)VAR_9)[1], ((u64 *)VAR_9)[2],
        ((u32 *)VAR_9)[3]);

 if (VAR_9->code == VAR_0) {

  if (FUNC_1(VAR_6, VAR_8, VAR_9))
   VAR_10 = VAR_4;
  else
   VAR_10 = VAR_3;
 } else if (VAR_9->code == VAR_1) {

  FUNC_2(VAR_6, VAR_8, VAR_9);
  VAR_10 = VAR_3;
 } else
  VAR_10 = VAR_5;

 FUNC_3(VAR_6, VAR_10,
        VAR_9->message_id, VAR_8);
 FUNC_0(VAR_2, VAR_6,
        "CUIR response: %d on message ID %08x", VAR_10,
        VAR_9->message_id);

 VAR_6->discipline->check_attention(VAR_6, VAR_8);
}
