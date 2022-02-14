
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int sup_chars; int getset_timeout_sup; } ;
struct TYPE_4__ {TYPE_1__ vnicc; } ;
struct qeth_card {TYPE_2__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,int ,int*) ;

__attribute__((used)) static bool FUNC_1(struct qeth_card *VAR_2, u32 VAR_3,
       u32 *VAR_4)
{
 if (VAR_2->options.vnicc.sup_chars & VAR_3 &&
     VAR_2->options.vnicc.getset_timeout_sup & VAR_3 &&
     !FUNC_0(VAR_2, VAR_3, VAR_0,
       VAR_4))
  return 0;
 *VAR_4 = VAR_1;
 return 1;
}
