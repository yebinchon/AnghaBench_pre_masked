
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int operation; void* length; void* oid; scalar_t__ flags; int device_id; int version; } ;
typedef TYPE_1__ pimfor_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(int VAR_2, u32 VAR_3, u32 VAR_4, pimfor_header_t *VAR_5)
{
 VAR_5->version = VAR_1;
 VAR_5->operation = VAR_2;
 VAR_5->device_id = VAR_0;
 VAR_5->flags = 0;
 VAR_5->oid = FUNC_0(VAR_3);
 VAR_5->length = FUNC_0(VAR_4);
}
