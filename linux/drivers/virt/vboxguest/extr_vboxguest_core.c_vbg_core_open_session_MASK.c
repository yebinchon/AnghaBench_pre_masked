
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vbg_session {int requestor; struct vbg_dev* gdev; } ;
struct vbg_dev {int dummy; } ;


 int VAR_0 ;
 struct vbg_session* FUNC_0 (int ) ;
 int VAR_1 ;
 struct vbg_session* FUNC_1 (int,int ) ;

struct vbg_session *FUNC_2(struct vbg_dev *VAR_2, u32 VAR_3)
{
 struct vbg_session *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->gdev = VAR_2;
 VAR_4->requestor = VAR_3;

 return VAR_4;
}
