
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {int cache_validity; } ;
struct TYPE_3__ {scalar_t__ (* have_delegation ) (struct inode*,int ) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct inode *VAR_2)
{
 return FUNC_1(VAR_2)->have_delegation(VAR_2, VAR_0) &&
  !(FUNC_0(VAR_2)->cache_validity & VAR_1);
}
