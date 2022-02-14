
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_info {int inlen; int outlen; void* out; void* in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct mbox_info *VAR_2, int VAR_3, int VAR_4)
{
 VAR_2->inlen = VAR_3;
 VAR_2->outlen = VAR_4;
 VAR_2->in = FUNC_1(VAR_2->inlen, VAR_1);
 VAR_2->out = FUNC_1(VAR_2->outlen, VAR_1);
 if (!VAR_2->in || !VAR_2->out) {
  FUNC_0(VAR_2->in);
  FUNC_0(VAR_2->out);
  return -VAR_0;
 }

 return 0;
}
