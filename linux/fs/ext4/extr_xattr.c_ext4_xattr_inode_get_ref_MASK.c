
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct inode {TYPE_1__ i_ctime; } ;


 scalar_t__ FUNC_0 (struct inode*) ;

__attribute__((used)) static u64 FUNC_1(struct inode *VAR_0)
{
 return ((u64)VAR_0->i_ctime.tv_sec << 32) |
  (u32) FUNC_0(VAR_0);
}
