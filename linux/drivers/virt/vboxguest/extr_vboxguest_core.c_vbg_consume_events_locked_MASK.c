
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vbg_session {int dummy; } ;
struct vbg_dev {int pending_events; } ;



__attribute__((used)) static u32 FUNC_0(struct vbg_dev *VAR_0,
         struct vbg_session *VAR_1,
         u32 VAR_2)
{
 u32 VAR_3 = VAR_0->pending_events & VAR_2;

 VAR_0->pending_events &= ~VAR_3;
 return VAR_3;
}
