
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_ext_last; struct buffer_head* i_ext_bh; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct buffer_head* FUNC_1 (struct inode*,scalar_t__) ;
 int FUNC_2 (struct buffer_head*) ;

__attribute__((used)) static inline struct buffer_head *
FUNC_3(struct inode *VAR_0, u32 VAR_1)
{

 struct buffer_head *VAR_2 = FUNC_0(VAR_0)->i_ext_bh;
 if (VAR_1 == FUNC_0(VAR_0)->i_ext_last)
  FUNC_2(VAR_2);
 else

  VAR_2 = FUNC_1(VAR_0, VAR_1);

 return VAR_2;
}
