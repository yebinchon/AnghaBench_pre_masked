
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct TYPE_3__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct inode {TYPE_1__ i_ctime; TYPE_2__ i_mtime; int i_sb; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_0)
{
 time64_t VAR_1 = FUNC_2(VAR_0->i_sb, FUNC_1(VAR_0->i_sb));
 if (VAR_1 == VAR_0->i_mtime.tv_sec &&
     VAR_1 == VAR_0->i_ctime.tv_sec)
  return;
 VAR_0->i_mtime.tv_sec = VAR_0->i_ctime.tv_sec = VAR_1;
 VAR_0->i_mtime.tv_nsec = VAR_0->i_ctime.tv_nsec = 0;
 FUNC_0(VAR_0);
}
