
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwtty_transaction {int (* callback ) (struct fw_card*,int,void*,size_t,struct fwtty_transaction*) ;struct fwtty_port* port; } ;
struct fwtty_port {int dummy; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fwtty_port*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct fwtty_transaction*) ;
 int FUNC_2 (struct fw_card*,int,void*,size_t,struct fwtty_transaction*) ;

__attribute__((used)) static void FUNC_3(struct fw_card *VAR_2, int VAR_3,
      void *VAR_4, size_t VAR_5, void *VAR_6)
{
 struct fwtty_transaction *VAR_7 = VAR_6;
 struct fwtty_port *VAR_8 = VAR_7->port;

 if (VAR_8 && VAR_3 != VAR_0)
  FUNC_0(VAR_8, VAR_3);
 if (VAR_7->callback)
  VAR_7->callback(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);
 FUNC_1(VAR_1, VAR_7);
}
