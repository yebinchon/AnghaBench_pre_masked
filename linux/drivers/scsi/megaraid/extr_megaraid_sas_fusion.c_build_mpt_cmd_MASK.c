
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int RequestFlags; int SMID; } ;
union MEGASAS_REQUEST_DESCRIPTOR_UNION {TYPE_2__ SCSIIO; scalar_t__ Words; } ;
typedef scalar_t__ u16 ;
struct megasas_instance {int dummy; } ;
struct TYPE_3__ {scalar_t__ smid; } ;
struct megasas_cmd {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct megasas_instance*,struct megasas_cmd*) ;
 int FUNC_1 (scalar_t__) ;
 union MEGASAS_REQUEST_DESCRIPTOR_UNION* FUNC_2 (struct megasas_instance*,scalar_t__) ;

__attribute__((used)) static union MEGASAS_REQUEST_DESCRIPTOR_UNION *
FUNC_3(struct megasas_instance *VAR_2, struct megasas_cmd *VAR_3)
{
 union MEGASAS_REQUEST_DESCRIPTOR_UNION *VAR_4 = ((void*)0);
 u16 VAR_5;

 FUNC_0(VAR_2, VAR_3);
 VAR_5 = VAR_3->context.smid;

 VAR_4 = FUNC_2(VAR_2, VAR_5 - 1);

 VAR_4->Words = 0;
 VAR_4->SCSIIO.RequestFlags = (VAR_1 <<
      VAR_0);

 VAR_4->SCSIIO.SMID = FUNC_1(VAR_5);

 return VAR_4;
}
