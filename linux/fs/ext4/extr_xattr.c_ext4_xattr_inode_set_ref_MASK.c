
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct inode {TYPE_1__ i_ctime; } ;


 int FUNC_0 (struct inode*,int) ;

__attribute__((used)) static void FUNC_1(struct inode *VAR_0, u64 VAR_1)
{
 VAR_0->i_ctime.tv_sec = (u32)(VAR_1 >> 32);
 FUNC_0(VAR_0, VAR_1 & 0xffffffff);
}
