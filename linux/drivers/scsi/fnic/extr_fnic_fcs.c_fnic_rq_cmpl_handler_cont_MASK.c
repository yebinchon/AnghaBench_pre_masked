
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct vnic_dev {int dummy; } ;
struct fnic {int * rq; } ;
struct cq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fnic* FUNC_0 (struct vnic_dev*) ;
 int FUNC_1 (int *,struct cq_desc*,size_t,int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct vnic_dev *VAR_2,
         struct cq_desc *VAR_3, u8 VAR_4,
         u16 VAR_5, u16 VAR_6,
         void *VAR_7)
{
 struct fnic *VAR_8 = FUNC_0(VAR_2);

 FUNC_1(&VAR_8->rq[VAR_5], VAR_3, VAR_6,
   VAR_0, VAR_1,
   ((void*)0));
 return 0;
}
