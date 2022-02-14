
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_4__ {void* status; } ;
struct TYPE_6__ {int hw_attribute_value; void* hw_attribute_length; void* hw_attribute; } ;
struct TYPE_5__ {TYPE_1__ hwme_set_cnf; TYPE_3__ hwme_set_req; } ;
struct mac_message {scalar_t__ command_id; TYPE_2__ pdata; scalar_t__ length; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__,scalar_t__*,void*) ;
 int FUNC_1 (int ,void**,void*) ;

__attribute__((used)) static u8 FUNC_2(
 u8 VAR_3,
 u8 VAR_4,
 u8 *VAR_5,
 void *VAR_6
)
{
 struct mac_message VAR_7, VAR_8;

 VAR_7.command_id = VAR_2;
 VAR_7.length = 2 + VAR_4;
 VAR_7.pdata.hwme_set_req.hw_attribute = VAR_3;
 VAR_7.pdata.hwme_set_req.hw_attribute_length = VAR_4;
 FUNC_1(
  VAR_7.pdata.hwme_set_req.hw_attribute_value,
  VAR_5,
  VAR_4
 );

 if (FUNC_0(
  &VAR_7.command_id,
  VAR_7.length + 2,
  &VAR_8.command_id,
  VAR_6)) {
  return VAR_0;
 }

 if (VAR_8.command_id != VAR_1)
  return VAR_0;

 return VAR_8.pdata.hwme_set_cnf.status;
}
