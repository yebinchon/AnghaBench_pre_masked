
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tun_struct {int numqueues; int filter_attached; int fprog; int * tfiles; } ;
struct TYPE_2__ {int sk; } ;
struct tun_file {TYPE_1__ socket; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct tun_file* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct tun_struct*,int) ;

__attribute__((used)) static int FUNC_5(struct tun_struct *VAR_0)
{
 int VAR_1, VAR_2 = 0;
 struct tun_file *VAR_3;

 for (VAR_1 = 0; VAR_1 < VAR_0->numqueues; VAR_1++) {
  VAR_3 = FUNC_2(VAR_0->tfiles[VAR_1]);
  FUNC_0(VAR_3->socket.sk);
  VAR_2 = FUNC_3(&VAR_0->fprog, VAR_3->socket.sk);
  FUNC_1(VAR_3->socket.sk);
  if (VAR_2) {
   FUNC_4(VAR_0, VAR_1);
   return VAR_2;
  }
 }

 VAR_0->filter_attached = 1;
 return VAR_2;
}
