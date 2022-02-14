
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_transaction {int num_extwriters; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct btrfs_transaction *VAR_1,
      unsigned int VAR_2)
{
 if (VAR_2 & VAR_0)
  FUNC_0(&VAR_1->num_extwriters);
}
