
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ max_file_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,scalar_t__,struct buffer_head*,int,int ,int *,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, sector_t VAR_4,
   struct buffer_head *VAR_5, int VAR_6)
{

 if (FUNC_2(VAR_4 >= FUNC_0(VAR_3)->max_file_blocks))
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6,
      VAR_1, ((void*)0),
      VAR_2, VAR_6);
}
