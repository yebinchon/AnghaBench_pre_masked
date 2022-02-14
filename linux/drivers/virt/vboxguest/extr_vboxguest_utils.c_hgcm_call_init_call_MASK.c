
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ linear_addr; } ;
struct TYPE_7__ {int size; TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ pointer; } ;
struct vmmdev_hgcm_function_parameter {int type; TYPE_4__ u; } ;
struct TYPE_5__ {int result; scalar_t__ flags; } ;
struct vmmdev_hgcm_call {int client_id; int function; int parm_count; TYPE_1__ header; } ;


 int VAR_0 ;
 struct vmmdev_hgcm_function_parameter* FUNC_0 (struct vmmdev_hgcm_call*) ;


 int VAR_1 ;






 int FUNC_1 (int) ;
 int FUNC_2 (struct vmmdev_hgcm_call*,struct vmmdev_hgcm_function_parameter*,void*,int ,int,int*) ;

__attribute__((used)) static void FUNC_3(
 struct vmmdev_hgcm_call *VAR_2, u32 VAR_3, u32 VAR_4,
 const struct vmmdev_hgcm_function_parameter *VAR_5,
 u32 VAR_6, void **VAR_7)
{
 struct vmmdev_hgcm_function_parameter *VAR_8 =
  FUNC_0(VAR_2);
 u32 VAR_9, VAR_10 = (uintptr_t)(VAR_8 + VAR_6) - (uintptr_t)VAR_2;
 void *VAR_11;

 VAR_2->header.flags = 0;
 VAR_2->header.result = VAR_0;
 VAR_2->client_id = VAR_3;
 VAR_2->function = VAR_4;
 VAR_2->parm_count = VAR_6;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++, VAR_5++, VAR_8++) {
  switch (VAR_5->type) {
  case 135:
  case 134:
   *VAR_8 = *VAR_5;
   break;

  case 133:
  case 132:
  case 128:
   FUNC_2(VAR_2, VAR_8, VAR_7[VAR_9],
            VAR_5->u.pointer.size,
            VAR_5->type, &VAR_10);
   break;

  case 131:
  case 130:
  case 129:
   VAR_11 = (void *)VAR_5->u.pointer.u.linear_addr;
   FUNC_2(VAR_2, VAR_8, VAR_11,
            VAR_5->u.pointer.size,
            VAR_5->type, &VAR_10);
   break;

  default:
   FUNC_1(1);
   VAR_8->type = VAR_1;
  }
 }
}
