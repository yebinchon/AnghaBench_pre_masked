
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ major; scalar_t__ minor; int build; } ;
struct i40e_client {int name; TYPE_1__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i40e_client*) ;
 int FUNC_1 (char*,...) ;
 struct i40e_client* VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct i40e_client *VAR_6)
{
 int VAR_7 = 0;

 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto out;
 }

 if (FUNC_2(VAR_6->name) == 0) {
  FUNC_1("i40e: Failed to register client with no name\n");
  VAR_7 = -VAR_1;
  goto out;
 }

 if (VAR_5) {
  FUNC_1("i40e: Client %s has already been registered!\n",
   VAR_6->name);
  VAR_7 = -VAR_0;
  goto out;
 }

 if ((VAR_6->version.major != VAR_2) ||
     (VAR_6->version.minor != VAR_3)) {
  FUNC_1("i40e: Failed to register client %s due to mismatched client interface version\n",
   VAR_6->name);
  FUNC_1("Client is using version: %02d.%02d.%02d while LAN driver supports %s\n",
   VAR_6->version.major, VAR_6->version.minor,
   VAR_6->version.build,
   VAR_4);
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_5 = VAR_6;

 FUNC_0(VAR_6);

 FUNC_1("i40e: Registered client %s\n", VAR_6->name);
out:
 return VAR_7;
}
