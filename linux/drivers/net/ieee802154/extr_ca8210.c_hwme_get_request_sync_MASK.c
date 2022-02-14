
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {scalar_t__ status; scalar_t__ hw_attribute_length; int hw_attribute_value; } ;
struct TYPE_4__ {scalar_t__ hw_attribute; } ;
struct TYPE_6__ {TYPE_2__ hwme_get_cnf; TYPE_1__ hwme_get_req; } ;
struct mac_message {scalar_t__ command_id; int length; TYPE_3__ pdata; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,int,scalar_t__*,void*) ;
 int FUNC_1 (scalar_t__*,int ,scalar_t__) ;

__attribute__((used)) static u8 FUNC_2(
 u8 VAR_4,
 u8 *VAR_5,
 u8 *VAR_6,
 void *VAR_7
)
{
 struct mac_message VAR_8, VAR_9;

 VAR_8.command_id = VAR_3;
 VAR_8.length = 1;
 VAR_8.pdata.hwme_get_req.hw_attribute = VAR_4;

 if (FUNC_0(
  &VAR_8.command_id,
  VAR_8.length + 2,
  &VAR_9.command_id,
  VAR_7)) {
  return VAR_1;
 }

 if (VAR_9.command_id != VAR_2)
  return VAR_1;

 if (VAR_9.pdata.hwme_get_cnf.status == VAR_0) {
  *VAR_5 =
   VAR_9.pdata.hwme_get_cnf.hw_attribute_length;
  FUNC_1(
   VAR_6,
   VAR_9.pdata.hwme_get_cnf.hw_attribute_value,
   *VAR_5
  );
 }

 return VAR_9.pdata.hwme_get_cnf.status;
}
