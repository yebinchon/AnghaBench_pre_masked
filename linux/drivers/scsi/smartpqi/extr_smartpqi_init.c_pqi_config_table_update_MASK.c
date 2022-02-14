
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {int iu_length; int iu_type; } ;
struct TYPE_4__ {int last_section; int first_section; } ;
struct TYPE_5__ {TYPE_1__ config_table_update; } ;
struct pqi_vendor_general_request {TYPE_3__ header; TYPE_2__ data; int function_code; } ;
struct pqi_ctrl_info {int dummy; } ;
typedef int request ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pqi_vendor_general_request*,int ,int) ;
 int FUNC_1 (struct pqi_ctrl_info*,TYPE_3__*,int ,int *,int ) ;
 int FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_3(struct pqi_ctrl_info *VAR_4,
 u16 VAR_5, u16 VAR_6)
{
 struct pqi_vendor_general_request VAR_7;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.header.iu_type = VAR_2;
 FUNC_2(sizeof(VAR_7) - VAR_1,
  &VAR_7.header.iu_length);
 FUNC_2(VAR_3,
  &VAR_7.function_code);
 FUNC_2(VAR_5,
  &VAR_7.data.config_table_update.first_section);
 FUNC_2(VAR_6,
  &VAR_7.data.config_table_update.last_section);

 return FUNC_1(VAR_4, &VAR_7.header,
  0, ((void*)0), VAR_0);
}
