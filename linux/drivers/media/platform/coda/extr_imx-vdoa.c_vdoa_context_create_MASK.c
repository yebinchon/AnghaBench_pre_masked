
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdoa_data {int vdoa_clk; } ;
struct vdoa_ctx {struct vdoa_data* vdoa; int completion; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vdoa_ctx*) ;
 struct vdoa_ctx* FUNC_3 (int,int ) ;

struct vdoa_ctx *FUNC_4(struct vdoa_data *VAR_1)
{
 struct vdoa_ctx *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_1->vdoa_clk);
 if (VAR_3) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }

 FUNC_1(&VAR_2->completion);
 VAR_2->vdoa = VAR_1;

 return VAR_2;
}
