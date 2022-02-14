
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isi_port {int dummy; } ;
struct isi_board {int status; int port_count; struct isi_port* ports; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isi_port*) ;

__attribute__((used)) static inline void FUNC_1(struct isi_board *VAR_2)
{
 int VAR_3;
 struct isi_port *VAR_4;

 VAR_2->count++;
 if (!(VAR_2->status & VAR_1)) {
  VAR_4 = VAR_2->ports;
  for (VAR_3 = 0; VAR_3 < VAR_2->port_count; VAR_3++, VAR_4++)
   FUNC_0(VAR_4);
 }
 VAR_2->status |= VAR_0 | VAR_1;
}
