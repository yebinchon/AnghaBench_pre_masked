
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file {scalar_t__ f_cred; } ;
struct TYPE_3__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,char const*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, const char *VAR_4)
{
 if (VAR_3->f_cred != FUNC_0()) {
  FUNC_1("%s: process %d (%s) changed security contexts after opening file descriptor, this is not allowed.\n",
   VAR_4, FUNC_2(VAR_2), VAR_2->comm);
  return -VAR_1;
 }
 if (FUNC_3()) {
  FUNC_1("%s: process %d (%s) called from kernel context, this is not allowed.\n",
   VAR_4, FUNC_2(VAR_2), VAR_2->comm);
  return -VAR_0;
 }
 return 0;
}
