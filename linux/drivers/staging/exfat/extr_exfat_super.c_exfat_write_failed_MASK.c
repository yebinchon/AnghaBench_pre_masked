
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;
struct TYPE_3__ {scalar_t__ size; } ;
struct TYPE_4__ {TYPE_1__ fid; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct address_space *VAR_0, loff_t VAR_1)
{
 struct inode *VAR_2 = VAR_0->host;

 if (VAR_1 > FUNC_2(VAR_2)) {
  FUNC_3(VAR_2, FUNC_2(VAR_2));
  FUNC_0(VAR_2)->fid.size = FUNC_2(VAR_2);
  FUNC_1(VAR_2, FUNC_2(VAR_2));
 }
}
