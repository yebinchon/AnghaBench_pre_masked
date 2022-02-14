
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hvsi_priv {scalar_t__ established; } ;
struct TYPE_2__ {int len; int type; } ;
struct hvsi_control {TYPE_1__ hdr; int verb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hvsi_priv*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct hvsi_priv *VAR_2)
{
 struct hvsi_control VAR_3;

 VAR_2->established = 0;

 VAR_3.hdr.type = VAR_1;
 VAR_3.hdr.len = sizeof(struct hvsi_control);
 VAR_3.verb = FUNC_0(VAR_0);
 return FUNC_1(VAR_2, &VAR_3.hdr);
}
