
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_subvolume_writers {int wait; int counter; } ;


 int VAR_0 ;
 struct btrfs_subvolume_writers* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct btrfs_subvolume_writers*) ;
 struct btrfs_subvolume_writers* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static struct btrfs_subvolume_writers *FUNC_5(void)
{
 struct btrfs_subvolume_writers *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_1);
 if (!VAR_2)
  return FUNC_0(-VAR_0);

 VAR_3 = FUNC_4(&VAR_2->counter, 0, VAR_1);
 if (VAR_3 < 0) {
  FUNC_2(VAR_2);
  return FUNC_0(VAR_3);
 }

 FUNC_1(&VAR_2->wait);
 return VAR_2;
}
