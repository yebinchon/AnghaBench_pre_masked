
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hvsi_priv {int dummy; } ;
struct hvsi_header {int dummy; } ;
struct TYPE_2__ {int len; int type; } ;
struct hvsi_data {TYPE_1__ hdr; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hvsi_priv*,TYPE_1__*) ;
 int FUNC_2 (int ,char const*,int) ;
 int FUNC_3 (int,int ) ;

int FUNC_4(struct hvsi_priv *VAR_3, const char *VAR_4, int VAR_5)
{
 struct hvsi_data VAR_6;
 int VAR_7, VAR_8 = FUNC_3(VAR_5, VAR_1);

 if (FUNC_0(!VAR_3))
  return -VAR_0;

 VAR_6.hdr.type = VAR_2;
 VAR_6.hdr.len = VAR_8 + sizeof(struct hvsi_header);
 FUNC_2(VAR_6.data, VAR_4, VAR_8);
 VAR_7 = FUNC_1(VAR_3, &VAR_6.hdr);
 if (VAR_7 <= 0)
  return VAR_7;
 return VAR_8;
}
