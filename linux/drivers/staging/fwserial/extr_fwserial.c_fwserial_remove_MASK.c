
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwtty_peer {struct fw_serial* serial; } ;
struct fw_unit {int device; } ;
struct fw_serial {int kref; int * ports; int debugfs; int list; int peer_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct fwtty_peer* FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct fwtty_peer*) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_9(struct fw_unit *VAR_6)
{
 struct fwtty_peer *VAR_7 = FUNC_1(&VAR_6->device);
 struct fw_serial *VAR_8 = VAR_7->serial;
 int VAR_9;

 FUNC_7(&VAR_3);
 FUNC_3(VAR_7);

 if (FUNC_6(&VAR_8->peer_list)) {

  FUNC_5(&VAR_8->list);

  FUNC_0(VAR_8->debugfs);

  for (VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9)
   FUNC_2(VAR_4, VAR_8->ports[VAR_9]);
  if (VAR_0)
   FUNC_2(VAR_1, VAR_8->ports[VAR_9]);
  FUNC_4(&VAR_8->kref, VAR_2);
 }
 FUNC_8(&VAR_3);
}
