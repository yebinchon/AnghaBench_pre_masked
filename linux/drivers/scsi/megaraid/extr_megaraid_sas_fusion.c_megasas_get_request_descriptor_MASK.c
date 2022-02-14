
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union MEGASAS_REQUEST_DESCRIPTOR_UNION {int dummy; } MEGASAS_REQUEST_DESCRIPTOR_UNION ;
typedef int u8 ;
typedef int u16 ;
struct megasas_instance {struct fusion_context* ctrl_context; } ;
struct fusion_context {int * req_frames_desc; } ;



__attribute__((used)) static union MEGASAS_REQUEST_DESCRIPTOR_UNION *
FUNC_0(struct megasas_instance *VAR_0, u16 VAR_1)
{
 u8 *VAR_2;
 struct fusion_context *VAR_3;

 VAR_3 = VAR_0->ctrl_context;
 VAR_2 = VAR_3->req_frames_desc +
  sizeof(union MEGASAS_REQUEST_DESCRIPTOR_UNION) * VAR_1;

 return (union MEGASAS_REQUEST_DESCRIPTOR_UNION *)VAR_2;
}
