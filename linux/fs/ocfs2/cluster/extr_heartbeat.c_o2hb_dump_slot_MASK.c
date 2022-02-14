
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_disk_heartbeat_block {int hb_generation; int hb_cksum; int hb_node; int hb_seq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,long long,int ,int ,long long) ;

__attribute__((used)) static void FUNC_3(struct o2hb_disk_heartbeat_block *VAR_1)
{
 FUNC_2(VAR_0, "Dump slot information: seq = 0x%llx, node = %u, "
      "cksum = 0x%x, generation 0x%llx\n",
      (long long)FUNC_1(VAR_1->hb_seq),
      VAR_1->hb_node, FUNC_0(VAR_1->hb_cksum),
      (long long)FUNC_1(VAR_1->hb_generation));
}
