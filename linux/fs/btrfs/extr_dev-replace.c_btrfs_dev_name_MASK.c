
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_device {int name; int dev_state; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static char* FUNC_2(struct btrfs_device *VAR_1)
{
 if (!VAR_1 || FUNC_1(VAR_0, &VAR_1->dev_state))
  return "<missing disk>";
 else
  return FUNC_0(VAR_1->name);
}
