
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_raid_bio {scalar_t__ operation; int faila; int failb; TYPE_1__* bbio; int flags; } ;
struct TYPE_2__ {scalar_t__* raid_map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct btrfs_raid_bio *VAR_5,
     struct btrfs_raid_bio *VAR_6)
{
 if (FUNC_0(VAR_4, &VAR_5->flags) ||
     FUNC_0(VAR_4, &VAR_6->flags))
  return 0;
 if (FUNC_0(VAR_3, &VAR_5->flags) ||
     FUNC_0(VAR_3, &VAR_6->flags))
  return 0;

 if (VAR_5->bbio->raid_map[0] !=
     VAR_6->bbio->raid_map[0])
  return 0;


 if (VAR_5->operation != VAR_6->operation)
  return 0;
 if (VAR_5->operation == VAR_0)
  return 0;

 if (VAR_5->operation == VAR_2)
  return 0;

 if (VAR_5->operation == VAR_1) {
  int VAR_7 = VAR_5->faila;
  int VAR_8 = VAR_5->failb;
  int VAR_9 = VAR_6->faila;
  int VAR_10 = VAR_6->failb;

  if (VAR_5->faila >= VAR_5->failb) {
   VAR_7 = VAR_5->failb;
   VAR_8 = VAR_5->faila;
  }

  if (VAR_6->faila >= VAR_6->failb) {
   VAR_9 = VAR_6->failb;
   VAR_10 = VAR_6->faila;
  }

  if (VAR_7 != VAR_9 || VAR_8 != VAR_10)
   return 0;
 }
 return 1;
}
