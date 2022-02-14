
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct vnic_dev {int dummy; } ;
struct fnic {int * wq_lock; int * wq; } ;
struct cq_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct fnic* FUNC_2 (struct vnic_dev*) ;
 int FUNC_3 (int *,struct cq_desc*,size_t,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct vnic_dev *VAR_1,
         struct cq_desc *VAR_2, u8 VAR_3,
         u16 VAR_4, u16 VAR_5,
         void *VAR_6)
{
 struct fnic *VAR_7 = FUNC_2(VAR_1);
 unsigned long VAR_8;

 FUNC_0(&VAR_7->wq_lock[VAR_4], VAR_8);
 FUNC_3(&VAR_7->wq[VAR_4], VAR_2, VAR_5,
   VAR_0, ((void*)0));
 FUNC_1(&VAR_7->wq_lock[VAR_4], VAR_8);

 return 0;
}
