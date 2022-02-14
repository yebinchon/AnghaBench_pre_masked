
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_ch {int len; int sqnum; int group_type; int node_type; int crc; int magic; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,unsigned long long,...) ;

__attribute__((used)) static void FUNC_5(const struct ubifs_ch *VAR_0)
{
 FUNC_4("\tmagic          %#x\n", FUNC_2(VAR_0->magic));
 FUNC_4("\tcrc            %#x\n", FUNC_2(VAR_0->crc));
 FUNC_4("\tnode_type      %d (%s)\n", VAR_0->node_type,
        FUNC_1(VAR_0->node_type));
 FUNC_4("\tgroup_type     %d (%s)\n", VAR_0->group_type,
        FUNC_0(VAR_0->group_type));
 FUNC_4("\tsqnum          %llu\n",
        (unsigned long long)FUNC_3(VAR_0->sqnum));
 FUNC_4("\tlen            %u\n", FUNC_2(VAR_0->len));
}
