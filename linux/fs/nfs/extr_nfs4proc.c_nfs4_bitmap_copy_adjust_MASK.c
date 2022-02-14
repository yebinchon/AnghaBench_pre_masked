
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {int cache_validity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (struct inode*,int ) ;

__attribute__((used)) static void FUNC_4(__u32 *VAR_7, const __u32 *VAR_8,
  struct inode *VAR_9)
{
 unsigned long VAR_10;

 FUNC_2(VAR_7, VAR_8, VAR_3*sizeof(*VAR_7));
 if (!VAR_9 || !FUNC_3(VAR_9, VAR_2))
  return;

 VAR_10 = FUNC_1(FUNC_0(VAR_9)->cache_validity);
 if (!(VAR_10 & VAR_6))
  VAR_10 &= ~(VAR_4
    | VAR_5);

 if (!(VAR_10 & VAR_5))
  VAR_7[0] &= ~VAR_1;

 if (!(VAR_10 & VAR_4))
  VAR_7[0] &= ~VAR_0;
}
