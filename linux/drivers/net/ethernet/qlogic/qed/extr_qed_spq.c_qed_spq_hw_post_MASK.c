
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {void* echo; } ;
struct slow_path_element {TYPE_2__ hdr; } ;
struct qed_spq_entry {struct slow_path_element elem; } ;
struct core_db_data {int agg_flags; int params; void* spq_prod; } ;
struct qed_spq {int cid; int db_addr_offset; struct core_db_data db_data; } ;
struct qed_hwfn {TYPE_1__* p_spq; } ;
struct qed_chain {int dummy; } ;
struct TYPE_3__ {struct qed_chain chain; } ;


 int FUNC_0 (struct qed_hwfn*,int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct qed_chain*) ;
 struct slow_path_element* FUNC_5 (struct qed_chain*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct qed_hwfn *VAR_2,
      struct qed_spq *VAR_3, struct qed_spq_entry *VAR_4)
{
 struct qed_chain *VAR_5 = &VAR_2->p_spq->chain;
 struct core_db_data *VAR_6 = &VAR_3->db_data;
 u16 VAR_7 = FUNC_4(VAR_5);
 struct slow_path_element *VAR_8;

 VAR_4->elem.hdr.echo = FUNC_3(VAR_7);
 VAR_8 = FUNC_5(VAR_5);
 if (!VAR_8) {
  FUNC_1(VAR_2, "Failed to produce from SPQ chain\n");
  return -VAR_0;
 }

 *VAR_8 = VAR_4->elem;


 VAR_6->spq_prod = FUNC_3(FUNC_4(VAR_5));


 FUNC_6();

 FUNC_0(VAR_2, VAR_3->db_addr_offset, *(u32 *)VAR_6);


 FUNC_6();

 FUNC_2(VAR_2, VAR_1,
     "Doorbelled [0x%08x, CID 0x%08x] with Flags: %02x agg_params: %02x, prod: %04x\n",
     VAR_3->db_addr_offset,
     VAR_3->cid,
     VAR_6->params,
     VAR_6->agg_flags, FUNC_4(VAR_5));

 return 0;
}
