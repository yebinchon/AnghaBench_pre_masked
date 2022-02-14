
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fuse_conn {scalar_t__ conn_init; } ;
struct TYPE_4__ {int force; int nocreds; int opcode; } ;


 int FUNC_0 (TYPE_1__) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct fuse_conn*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct fuse_conn *VAR_2)
{
 if (VAR_2->conn_init) {
  FUNC_0(VAR_1);

  VAR_1.opcode = VAR_0;
  VAR_1.force = 1;
  VAR_1.nocreds = 1;
  FUNC_1(VAR_2, &VAR_1);
 }
}
