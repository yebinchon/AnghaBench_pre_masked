
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kref {int dummy; } ;
struct fwtty_port {int index; int port; int rx_handler; struct fwtty_port** ports; } ;
struct fw_serial {int index; int port; int rx_handler; struct fw_serial** ports; } ;


 int FUNC_0 (int,char*,int,struct fwtty_port*,int,struct fwtty_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fwtty_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 struct fwtty_port** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 struct fwtty_port* FUNC_6 (struct kref*,struct kref*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct kref *VAR_4)
{
 struct fw_serial *VAR_5 = FUNC_6(VAR_4, VAR_4);
 struct fwtty_port **VAR_6 = VAR_5->ports;
 int VAR_7, VAR_8 = VAR_6[0]->index;

 FUNC_5();

 FUNC_3(&VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_8, ++VAR_7) {
  VAR_2 |= VAR_1[VAR_8] != VAR_6[VAR_7];
  FUNC_0(VAR_2, "port_table[%d]: %p != ports[%d]: %p",
     VAR_8, VAR_1[VAR_8], VAR_7, VAR_6[VAR_7]);

  VAR_1[VAR_8] = ((void*)0);
 }
 FUNC_4(&VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  FUNC_1(&VAR_6[VAR_7]->rx_handler);
  FUNC_7(&VAR_6[VAR_7]->port);
  FUNC_2(VAR_6[VAR_7]);
 }
 FUNC_2(VAR_5);
}
