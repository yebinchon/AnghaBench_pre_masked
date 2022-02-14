
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int response; } ;
struct cifs_ses {TYPE_1__ auth_key; TYPE_2__* ntlmssp; } ;
struct arc4_ctx {int dummy; } ;
struct TYPE_4__ {int ciphertext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct arc4_ctx*,int ,unsigned char*,int ) ;
 int FUNC_1 (struct arc4_ctx*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (unsigned char*,int) ;
 struct arc4_ctx* FUNC_4 (int,int ) ;
 int FUNC_5 (struct arc4_ctx*) ;
 int FUNC_6 (int ,unsigned char*,int) ;
 int FUNC_7 (unsigned char*,int) ;

int
FUNC_8(struct cifs_ses *VAR_7)
{
 unsigned char VAR_8[VAR_1];
 struct arc4_ctx *VAR_9;

 if (VAR_6)
  return -VAR_2;

 FUNC_3(VAR_8, VAR_1);

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_4);
 if (!VAR_9) {
  FUNC_2(VAR_5, "could not allocate arc4 context\n");
  return -VAR_3;
 }

 FUNC_1(VAR_9, VAR_7->auth_key.response, VAR_1);
 FUNC_0(VAR_9, VAR_7->ntlmssp->ciphertext, VAR_8,
     VAR_0);


 FUNC_6(VAR_7->auth_key.response, VAR_8, VAR_1);

 VAR_7->auth_key.len = VAR_1;

 FUNC_7(VAR_8, VAR_1);
 FUNC_5(VAR_9);
 return 0;
}
