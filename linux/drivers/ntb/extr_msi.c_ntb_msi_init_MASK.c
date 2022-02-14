
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ntb_dev {TYPE_1__* msi; int dev; } ;
typedef int resource_size_t ;
typedef int phys_addr_t ;
struct TYPE_3__ {void (* desc_changed ) (void*) ;scalar_t__* peer_mws; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,size_t,int ) ;
 int FUNC_4 (struct ntb_dev*) ;
 int FUNC_5 (struct ntb_dev*,int,int *,int *) ;
 int FUNC_6 (struct ntb_dev*) ;

int FUNC_7(struct ntb_dev *VAR_4,
   void (*VAR_5)(void *VAR_6))
{
 phys_addr_t VAR_7;
 resource_size_t VAR_8;
 size_t VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_11 = FUNC_6(VAR_4);
 if (VAR_11 <= 0)
  return -VAR_1;

 VAR_9 = sizeof(*VAR_4->msi) + sizeof(*VAR_4->msi->peer_mws) * VAR_11;

 VAR_4->msi = FUNC_3(&VAR_4->dev, VAR_9, VAR_3);
 if (!VAR_4->msi)
  return -VAR_2;

 VAR_4->msi->desc_changed = VAR_5;

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  VAR_10 = FUNC_4(VAR_4) - 1 - VAR_13;

  VAR_12 = FUNC_5(VAR_4, VAR_10, &VAR_7,
        &VAR_8);
  if (VAR_12)
   goto unroll;

  VAR_4->msi->peer_mws[VAR_13] = FUNC_0(&VAR_4->dev, VAR_7,
           VAR_8);
  if (!VAR_4->msi->peer_mws[VAR_13]) {
   VAR_12 = -VAR_0;
   goto unroll;
  }
 }

 return 0;

unroll:
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
  if (VAR_4->msi->peer_mws[VAR_13])
   FUNC_1(&VAR_4->dev, VAR_4->msi->peer_mws[VAR_13]);

 FUNC_2(&VAR_4->dev, VAR_4->msi);
 VAR_4->msi = ((void*)0);
 return VAR_12;
}
