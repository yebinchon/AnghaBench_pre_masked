
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwtty_port {int peer; } ;
struct fwtty_peer {int status_addr; } ;
typedef int status ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct fwtty_port*) ;
 int FUNC_1 (struct fwtty_peer*,int ,int ,unsigned int*,int,int *,struct fwtty_port*) ;
 struct fwtty_peer* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct fwtty_port *VAR_2)
{
 struct fwtty_peer *VAR_3;
 int VAR_4 = -VAR_0;
 unsigned int VAR_5 = FUNC_0(VAR_2);

 FUNC_3();
 VAR_3 = FUNC_2(VAR_2->peer);
 if (VAR_3) {
  VAR_4 = FUNC_1(VAR_3, VAR_1,
         VAR_3->status_addr, &VAR_5,
         sizeof(VAR_5), ((void*)0), VAR_2);
 }
 FUNC_4();

 return VAR_4;
}
