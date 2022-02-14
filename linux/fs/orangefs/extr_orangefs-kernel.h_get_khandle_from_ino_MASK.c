
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct orangefs_khandle {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {struct orangefs_khandle khandle; } ;
struct TYPE_4__ {TYPE_1__ refn; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;

__attribute__((used)) static inline struct orangefs_khandle *FUNC_1(struct inode *VAR_0)
{
 return &(FUNC_0(VAR_0)->refn.khandle);
}
