
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union macaddr {scalar_t__* ieee_address; int short_address; } ;
typedef scalar_t__ u8 ;
typedef int u16 ;
struct secspec {scalar_t__ security_level; } ;
struct mcps_data_request_pset {int dummy; } ;
struct TYPE_4__ {void** address; void** pan_id; scalar_t__ mode; } ;
struct TYPE_5__ {void** msdu; scalar_t__ tx_options; scalar_t__ msdu_handle; scalar_t__ msdu_length; TYPE_1__ dst; scalar_t__ src_addr_mode; } ;
struct TYPE_6__ {TYPE_2__ data_req; } ;
struct mac_message {int length; int command_id; TYPE_3__ pdata; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (void*,int *,int) ;
 int FUNC_3 (void**,scalar_t__*,scalar_t__) ;

__attribute__((used)) static u8 FUNC_4(
 u8 VAR_6,
 u8 VAR_7,
 u16 VAR_8,
 union macaddr *VAR_9,
 u8 VAR_10,
 u8 *VAR_11,
 u8 VAR_12,
 u8 VAR_13,
 struct secspec *VAR_14,
 void *VAR_15
)
{
 struct secspec *VAR_16;
 struct mac_message VAR_17;

 VAR_17.command_id = VAR_5;
 VAR_17.pdata.data_req.src_addr_mode = VAR_6;
 VAR_17.pdata.data_req.dst.mode = VAR_7;
 if (VAR_7 != VAR_0) {
  VAR_17.pdata.data_req.dst.pan_id[0] = FUNC_0(VAR_8);
  VAR_17.pdata.data_req.dst.pan_id[1] = FUNC_1(VAR_8);
  if (VAR_7 == VAR_1) {
   VAR_17.pdata.data_req.dst.address[0] = FUNC_0(
    VAR_9->short_address
   );
   VAR_17.pdata.data_req.dst.address[1] = FUNC_1(
    VAR_9->short_address
   );
  } else {
   FUNC_3(
    VAR_17.pdata.data_req.dst.address,
    VAR_9->ieee_address,
    8
   );
  }
 }
 VAR_17.pdata.data_req.msdu_length = VAR_10;
 VAR_17.pdata.data_req.msdu_handle = VAR_12;
 VAR_17.pdata.data_req.tx_options = VAR_13;
 FUNC_3(VAR_17.pdata.data_req.msdu, VAR_11, VAR_10);
 VAR_16 = (struct secspec *)(VAR_17.pdata.data_req.msdu + VAR_10);
 VAR_17.length = sizeof(struct mcps_data_request_pset) -
  VAR_4 + VAR_10;
 if (!VAR_14 || VAR_14->security_level == 0) {
  VAR_16->security_level = 0;
  VAR_17.length += 1;
 } else {
  *VAR_16 = *VAR_14;
  VAR_17.length += sizeof(struct secspec);
 }

 if (FUNC_2(VAR_15, &VAR_17.command_id,
    VAR_17.length + 2))
  return VAR_3;

 return VAR_2;
}
