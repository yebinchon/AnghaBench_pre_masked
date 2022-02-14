
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_gid; } ;
struct TYPE_4__ {TYPE_1__* cred; } ;
struct TYPE_3__ {int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct inode *VAR_7)
{
 u32 VAR_8 = VAR_3 |
   VAR_0 |
   VAR_2;

 if (FUNC_1(FUNC_0(), VAR_6->cred->uid) == 0)
  VAR_8 |= VAR_4;
 else
  VAR_8 |= VAR_5;

 if (FUNC_2(VAR_7->i_gid))
  VAR_8 |= VAR_1;

 return VAR_8;
}
