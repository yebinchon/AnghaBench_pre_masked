
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ linear_addr; } ;
struct TYPE_5__ {scalar_t__ size; TYPE_1__ u; } ;
struct TYPE_6__ {TYPE_2__ pointer; } ;
struct vmmdev_hgcm_function_parameter {int type; TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,scalar_t__,size_t*) ;
 int FUNC_2 (struct vmmdev_hgcm_function_parameter const*,void**,size_t*) ;
 void** FUNC_3 (scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_4(
 const struct vmmdev_hgcm_function_parameter *VAR_5,
 u32 VAR_6, void ***VAR_7, size_t *VAR_8)
{
 void *VAR_9, **VAR_10 = ((void*)0);
 u32 VAR_11, VAR_12;
 int VAR_13;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++, VAR_5++) {
  switch (VAR_5->type) {
  case 135:
  case 134:
   break;

  case 133:
  case 132:
  case 128:
   if (!VAR_10) {
    VAR_10 = FUNC_3(VAR_6,
            sizeof(void *),
            VAR_3);
    if (!VAR_10)
     return -VAR_2;

    *VAR_7 = VAR_10;
   }

   VAR_13 = FUNC_2(VAR_5,
          &VAR_10[VAR_11],
          VAR_8);
   if (VAR_13)
    return VAR_13;

   break;

  case 131:
  case 130:
  case 129:
   VAR_9 = (void *)VAR_5->u.pointer.u.linear_addr;
   VAR_12 = VAR_5->u.pointer.size;
   if (FUNC_0(VAR_12 > VAR_4))
    return -VAR_0;

   FUNC_1(VAR_9, VAR_12, VAR_8);
   break;

  default:
   return -VAR_1;
  }
 }

 return 0;
}
