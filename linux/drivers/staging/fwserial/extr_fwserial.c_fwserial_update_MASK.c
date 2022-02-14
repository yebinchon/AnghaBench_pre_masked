
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwtty_peer {int generation; int node_id; } ;
struct fw_unit {int device; } ;
struct fw_device {int generation; int node_id; } ;


 struct fwtty_peer* FUNC_0 (int *) ;
 struct fw_device* FUNC_1 (struct fw_unit*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct fw_unit *VAR_0)
{
 struct fw_device *VAR_1 = FUNC_1(VAR_0);
 struct fwtty_peer *VAR_2 = FUNC_0(&VAR_0->device);
 int VAR_3;

 VAR_3 = VAR_1->generation;
 FUNC_2();
 VAR_2->node_id = VAR_1->node_id;
 FUNC_3();
 VAR_2->generation = VAR_3;
}
