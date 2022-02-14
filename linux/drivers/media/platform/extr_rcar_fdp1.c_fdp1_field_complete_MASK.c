
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdp1_field_buffer {int vb; scalar_t__ last_field; } ;
struct fdp1_ctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct fdp1_ctx *VAR_1,
    struct fdp1_field_buffer *VAR_2)
{

 if (!VAR_2)
  return;

 if (VAR_2->last_field)
  FUNC_0(VAR_2->vb, VAR_0);
}
