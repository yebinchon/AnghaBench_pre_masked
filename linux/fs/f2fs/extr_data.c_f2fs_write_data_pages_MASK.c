
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;
struct TYPE_2__ {scalar_t__ cp_task; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct address_space*,struct writeback_control*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct address_space *VAR_3,
       struct writeback_control *VAR_4)
{
 struct inode *VAR_5 = VAR_3->host;

 return FUNC_1(VAR_3, VAR_4,
   FUNC_0(VAR_5)->cp_task == VAR_2 ?
   VAR_0 : VAR_1);
}
