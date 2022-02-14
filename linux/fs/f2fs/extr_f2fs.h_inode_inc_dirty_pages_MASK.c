
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct TYPE_2__ {int dirty_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static inline void FUNC_6(struct inode *VAR_3)
{
 FUNC_4(&FUNC_0(VAR_3)->dirty_pages);
 FUNC_5(FUNC_1(VAR_3), FUNC_3(VAR_3->i_mode) ?
    VAR_1 : VAR_0);
 if (FUNC_2(VAR_3))
  FUNC_5(FUNC_1(VAR_3), VAR_2);
}
