
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct vnic_dev {int dummy; } ;
struct enic {int * wq_lock; int netdev; int * wq; } ;
struct cq_desc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct enic* FUNC_5 (struct vnic_dev*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,struct cq_desc*,size_t,int ,void*) ;

__attribute__((used)) static int FUNC_8(struct vnic_dev *VAR_3, struct cq_desc *VAR_4,
 u8 VAR_5, u16 VAR_6, u16 VAR_7, void *VAR_8)
{
 struct enic *VAR_9 = FUNC_5(VAR_3);

 FUNC_3(&VAR_9->wq_lock[VAR_6]);

 FUNC_7(&VAR_9->wq[VAR_6], VAR_4,
  VAR_7, VAR_2,
  VAR_8);

 if (FUNC_1(FUNC_0(VAR_9->netdev, VAR_6)) &&
     FUNC_6(&VAR_9->wq[VAR_6]) >=
     (VAR_1 + VAR_0))
  FUNC_2(VAR_9->netdev, VAR_6);

 FUNC_4(&VAR_9->wq_lock[VAR_6]);

 return 0;
}
