
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct olpc_ec_priv {int suspended; } ;
struct ec_cmd_desc {size_t inlen; size_t outlen; int err; int finished; int * outbuf; int * inbuf; int cmd; } ;
struct TYPE_2__ {int ec_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_4 ;
 struct olpc_ec_priv* VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ec_cmd_desc*,struct olpc_ec_priv*) ;
 int FUNC_4 (int *) ;

int FUNC_5(u8 VAR_6, u8 *VAR_7, size_t VAR_8, u8 *VAR_9, size_t VAR_10)
{
 struct olpc_ec_priv *VAR_11 = VAR_5;
 struct ec_cmd_desc VAR_12;


 if (!VAR_4)
  return -VAR_3;

 if (FUNC_0(!VAR_4->ec_cmd))
  return -VAR_1;

 if (!VAR_11)
  return -VAR_2;


 if (FUNC_0(VAR_11->suspended))
  return -VAR_0;

 FUNC_2();

 VAR_12.cmd = VAR_6;
 VAR_12.inbuf = VAR_7;
 VAR_12.outbuf = VAR_9;
 VAR_12.inlen = VAR_8;
 VAR_12.outlen = VAR_10;
 VAR_12.err = 0;
 FUNC_1(&VAR_12.finished);

 FUNC_3(&VAR_12, VAR_11);


 FUNC_4(&VAR_12.finished);


 return VAR_12.err;
}
