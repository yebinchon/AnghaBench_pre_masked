
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct fwtty_peer {int generation; scalar_t__ status_addr; scalar_t__ mgmt_addr; scalar_t__ guid; int max_payload; int speed; int node_id; TYPE_1__* unit; } ;
struct TYPE_2__ {int device; } ;


 unsigned long long FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,unsigned long long,...) ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_0, struct fwtty_peer *VAR_1)
{
 int VAR_2 = VAR_1->generation;

 FUNC_3();
 FUNC_1(VAR_0, " %s:", FUNC_0(&VAR_1->unit->device));
 FUNC_1(VAR_0, " node:%04x gen:%d", VAR_1->node_id, VAR_2);
 FUNC_1(VAR_0, " sp:%d max:%d guid:%016llx", VAR_1->speed,
     VAR_1->max_payload, (unsigned long long)VAR_1->guid);
 FUNC_1(VAR_0, " mgmt:%012llx", (unsigned long long)VAR_1->mgmt_addr);
 FUNC_1(VAR_0, " addr:%012llx", (unsigned long long)VAR_1->status_addr);
 FUNC_2(VAR_0, '\n');
}
