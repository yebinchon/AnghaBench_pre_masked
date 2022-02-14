
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int pa; } ;
struct TYPE_5__ {TYPE_1__ desc_buf; int bal; int tail; int bah; int len; int head; } ;
struct TYPE_6__ {int num_arq_entries; TYPE_2__ arq; } ;
struct i40e_hw {TYPE_3__ aq; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static i40e_status FUNC_4(struct i40e_hw *VAR_2)
{
 i40e_status VAR_3 = 0;
 u32 VAR_4 = 0;


 FUNC_3(VAR_2, VAR_2->aq.arq.head, 0);
 FUNC_3(VAR_2, VAR_2->aq.arq.tail, 0);


 FUNC_3(VAR_2, VAR_2->aq.arq.len, (VAR_2->aq.num_arq_entries |
      VAR_1));
 FUNC_3(VAR_2, VAR_2->aq.arq.bal, FUNC_0(VAR_2->aq.arq.desc_buf.pa));
 FUNC_3(VAR_2, VAR_2->aq.arq.bah, FUNC_2(VAR_2->aq.arq.desc_buf.pa));


 FUNC_3(VAR_2, VAR_2->aq.arq.tail, VAR_2->aq.num_arq_entries - 1);


 VAR_4 = FUNC_1(VAR_2, VAR_2->aq.arq.bal);
 if (VAR_4 != FUNC_0(VAR_2->aq.arq.desc_buf.pa))
  VAR_3 = VAR_0;

 return VAR_3;
}
