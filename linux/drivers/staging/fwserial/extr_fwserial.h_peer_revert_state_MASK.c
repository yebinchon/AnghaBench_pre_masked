
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwtty_port {int dummy; } ;
struct fwtty_peer {struct fwtty_port* port; } ;


 int VAR_0 ;
 int FUNC_0 (struct fwtty_peer*,int ) ;

__attribute__((used)) static inline struct fwtty_port *FUNC_1(struct fwtty_peer *VAR_1)
{
 struct fwtty_port *VAR_2 = VAR_1->port;

 VAR_1->port = ((void*)0);
 FUNC_0(VAR_1, VAR_0);
 return VAR_2;
}
