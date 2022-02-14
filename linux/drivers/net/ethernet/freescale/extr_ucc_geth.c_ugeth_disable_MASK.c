
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ucc_geth_private {struct ucc_fast_private* uccf; TYPE_2__* ug_info; } ;
struct ucc_fast_private {int stopped_rx; scalar_t__ enabled_rx; int stopped_tx; scalar_t__ enabled_tx; } ;
typedef enum comm_dir { ____Placeholder_comm_dir } comm_dir ;
struct TYPE_3__ {scalar_t__ ucc_num; } ;
struct TYPE_4__ {TYPE_1__ uf_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ucc_geth_private*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ucc_fast_private*,int) ;
 int FUNC_3 (struct ucc_geth_private*) ;
 int FUNC_4 (struct ucc_geth_private*) ;

__attribute__((used)) static int FUNC_5(struct ucc_geth_private *VAR_4, enum comm_dir VAR_5)
{
 struct ucc_fast_private *VAR_6;

 VAR_6 = VAR_4->uccf;


 if (VAR_4->ug_info->uf_info.ucc_num >= VAR_3) {
  if (FUNC_0(VAR_4))
   FUNC_1("ucc_num out of range\n");
  return -VAR_2;
 }


 if ((VAR_5 & VAR_1) && VAR_6->enabled_tx && !VAR_6->stopped_tx)
  FUNC_4(VAR_4);


 if ((VAR_5 & VAR_0) && VAR_6->enabled_rx && !VAR_6->stopped_rx)
  FUNC_3(VAR_4);

 FUNC_2(VAR_4->uccf, VAR_5);

 return 0;
}
