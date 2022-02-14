
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vscsiif_response {unsigned int rqid; int rslt; scalar_t__ residual_len; scalar_t__ sense_len; } ;
struct vscsifrnt_info {int shadow_free_bitmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct vscsifrnt_info*,struct vscsiif_response*) ;
 int FUNC_1 (struct vscsifrnt_info*) ;
 scalar_t__ FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct vscsifrnt_info *VAR_2)
{
 unsigned VAR_3;
 struct vscsiif_response VAR_4;

 FUNC_1(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (FUNC_2(VAR_3, VAR_2->shadow_free_bitmap))
   continue;
  VAR_4.rqid = VAR_3;
  VAR_4.sense_len = 0;
  VAR_4.rslt = VAR_0 << 16;
  VAR_4.residual_len = 0;
  FUNC_0(VAR_2, &VAR_4);
 }
}
