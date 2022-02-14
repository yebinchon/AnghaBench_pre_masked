
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tun_struct {int filter_attached; int * tfiles; } ;
struct TYPE_2__ {int sk; } ;
struct tun_file {TYPE_1__ socket; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct tun_file* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct tun_struct *VAR_0, int VAR_1)
{
 int VAR_2;
 struct tun_file *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 = FUNC_2(VAR_0->tfiles[VAR_2]);
  FUNC_0(VAR_3->socket.sk);
  FUNC_3(VAR_3->socket.sk);
  FUNC_1(VAR_3->socket.sk);
 }

 VAR_0->filter_attached = 0;
}
