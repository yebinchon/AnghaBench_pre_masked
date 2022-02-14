
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mlme_set_request_pset {int dummy; } ;
struct TYPE_3__ {int pib_attribute_value; scalar_t__ pib_attribute_length; scalar_t__ pib_attribute_index; scalar_t__ pib_attribute; } ;
struct TYPE_4__ {scalar_t__ status; TYPE_1__ set_req; } ;
struct mac_message {scalar_t__ command_id; int length; TYPE_2__ pdata; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__*,int,scalar_t__*,void*) ;
 int FUNC_1 (int ,void const*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,void*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,void const*) ;
 scalar_t__ FUNC_4 (scalar_t__,void*) ;

__attribute__((used)) static u8 FUNC_5(
 u8 VAR_7,
 u8 VAR_8,
 u8 VAR_9,
 const void *VAR_10,
 void *VAR_11
)
{
 u8 VAR_12;
 struct mac_message VAR_13, VAR_14;




 if (FUNC_3(
  VAR_7, VAR_9, VAR_10)) {
  return VAR_0;
 }

 if (VAR_7 == VAR_3) {
  VAR_12 = FUNC_2(
   *((u8 *)VAR_10),
   VAR_11
  );
  if (VAR_12)
   return VAR_12;
 }

 if (VAR_7 == VAR_4) {
  return FUNC_4(
   *((u8 *)VAR_10),
   VAR_11
  );
 }

 VAR_13.command_id = VAR_6;
 VAR_13.length = sizeof(struct mlme_set_request_pset) -
  VAR_2 + VAR_9;
 VAR_13.pdata.set_req.pib_attribute = VAR_7;
 VAR_13.pdata.set_req.pib_attribute_index = VAR_8;
 VAR_13.pdata.set_req.pib_attribute_length = VAR_9;
 FUNC_1(
  VAR_13.pdata.set_req.pib_attribute_value,
  VAR_10,
  VAR_9
 );

 if (FUNC_0(
  &VAR_13.command_id,
  VAR_13.length + 2,
  &VAR_14.command_id,
  VAR_11)) {
  return VAR_1;
 }

 if (VAR_14.command_id != VAR_5)
  return VAR_1;

 return VAR_14.pdata.status;
}
