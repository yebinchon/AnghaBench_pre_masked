
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_context {int dummy; } ;
struct audit_buffer {int gfp_mask; struct audit_context* ctx; int skb; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct audit_buffer*) ;
 struct audit_buffer* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int,int ,int ) ;

__attribute__((used)) static struct audit_buffer *FUNC_4(struct audit_context *VAR_2,
            gfp_t VAR_3, int VAR_4)
{
 struct audit_buffer *VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->skb = FUNC_2(VAR_0, VAR_3);
 if (!VAR_5->skb)
  goto err;
 if (!FUNC_3(VAR_5->skb, 0, 0, VAR_4, 0, 0))
  goto err;

 VAR_5->ctx = VAR_2;
 VAR_5->gfp_mask = VAR_3;

 return VAR_5;

err:
 FUNC_0(VAR_5);
 return ((void*)0);
}
