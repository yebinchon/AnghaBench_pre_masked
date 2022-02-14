
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vscsiif_response {size_t rqid; } ;
struct vscsifrnt_info {TYPE_1__** shadow; int shadow_free_bitmap; } ;
struct TYPE_2__ {scalar_t__ act; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,size_t) ;
 int FUNC_1 (struct vscsifrnt_info*,struct vscsiif_response*) ;
 int FUNC_2 (struct vscsifrnt_info*,struct vscsiif_response*) ;
 scalar_t__ FUNC_3 (size_t,int ) ;

__attribute__((used)) static void FUNC_4(struct vscsifrnt_info *VAR_2,
      struct vscsiif_response *VAR_3)
{
 if (FUNC_0(VAR_3->rqid >= VAR_1 ||
   FUNC_3(VAR_3->rqid, VAR_2->shadow_free_bitmap),
   "illegal rqid %u returned by backend!\n", VAR_3->rqid))
  return;

 if (VAR_2->shadow[VAR_3->rqid]->act == VAR_0)
  FUNC_1(VAR_2, VAR_3);
 else
  FUNC_2(VAR_2, VAR_3);
}
