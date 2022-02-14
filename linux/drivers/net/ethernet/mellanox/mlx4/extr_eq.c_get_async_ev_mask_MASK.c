
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {int flags; int flags2; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;

__attribute__((used)) static u64 FUNC_0(struct mlx4_dev *VAR_5)
{
 u64 VAR_6 = VAR_0;
 if (VAR_5->caps.flags & VAR_2)
  VAR_6 |= (1ull << VAR_3);
 if (VAR_5->caps.flags2 & VAR_1)
  VAR_6 |= (1ull << VAR_4);

 return VAR_6;
}
