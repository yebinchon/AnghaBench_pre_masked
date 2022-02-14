
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ j_proc_entry; int j_devname; } ;
typedef TYPE_1__ journal_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__,int *,TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(journal_t *VAR_3)
{
 VAR_3->j_proc_entry = FUNC_1(VAR_3->j_devname, VAR_2);
 if (VAR_3->j_proc_entry) {
  FUNC_0("info", VAR_0, VAR_3->j_proc_entry,
     &VAR_1, VAR_3);
 }
}
