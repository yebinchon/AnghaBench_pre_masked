
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmmdev_hgcmreq_header {int flags; } ;
struct vbg_dev {int event_spinlock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct vbg_dev *VAR_1,
     struct vmmdev_hgcmreq_header *VAR_2)
{
 unsigned long VAR_3;
 bool VAR_4;

 FUNC_0(&VAR_1->event_spinlock, VAR_3);
 VAR_4 = VAR_2->flags & VAR_0;
 FUNC_1(&VAR_1->event_spinlock, VAR_3);

 return VAR_4;
}
