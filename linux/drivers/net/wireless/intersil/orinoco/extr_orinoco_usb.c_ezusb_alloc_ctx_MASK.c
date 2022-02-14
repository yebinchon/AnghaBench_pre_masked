
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct request_context {int timer; int done; int refcount; void* in_rid; void* out_rid; int state; struct ezusb_priv* upriv; struct request_context* buf; int outurb; } ;
struct ezusb_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct request_context*) ;
 struct request_context* FUNC_2 (int ,int ) ;
 struct request_context* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static struct request_context *FUNC_7(struct ezusb_priv *VAR_4,
            u16 VAR_5, u16 VAR_6)
{
 struct request_context *VAR_7;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->buf = FUNC_2(VAR_0, VAR_2);
 if (!VAR_7->buf) {
  FUNC_1(VAR_7);
  return ((void*)0);
 }
 VAR_7->outurb = FUNC_6(0, VAR_2);
 if (!VAR_7->outurb) {
  FUNC_1(VAR_7->buf);
  FUNC_1(VAR_7);
  return ((void*)0);
 }

 VAR_7->upriv = VAR_4;
 VAR_7->state = VAR_1;
 VAR_7->out_rid = VAR_5;
 VAR_7->in_rid = VAR_6;

 FUNC_4(&VAR_7->refcount, 1);
 FUNC_0(&VAR_7->done);

 FUNC_5(&VAR_7->timer, VAR_3, 0);
 return VAR_7;
}
