
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct port_fdb_dump_ctx {int data; int (* cb ) (int *,int ,int,int ) ;int port; } ;
struct lan9303 {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,int *) ;
 int FUNC_2 (int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct lan9303 *VAR_2, u32 VAR_3,
          u32 VAR_4, int VAR_5, void *VAR_6)
{
 struct port_fdb_dump_ctx *VAR_7 = VAR_6;
 u8 VAR_8[VAR_0];
 bool VAR_9;

 if ((FUNC_0(VAR_7->port) & VAR_5) == 0)
  return;

 FUNC_1(VAR_3, VAR_4, VAR_8);
 VAR_9 = !!(VAR_4 & VAR_1);
 VAR_7->cb(VAR_8, 0, VAR_9, VAR_7->data);
}
