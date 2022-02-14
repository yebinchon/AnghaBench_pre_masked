
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ath6kl {TYPE_1__* hif_ops; } ;
struct TYPE_2__ {int (* pipe_send ) (struct ath6kl*,int ,struct sk_buff*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ath6kl*,int ,struct sk_buff*,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_2(struct ath6kl *VAR_1,
           u8 VAR_2, struct sk_buff *VAR_3,
           struct sk_buff *VAR_4)
{
 FUNC_0(VAR_0, "hif pipe send\n");

 return VAR_1->hif_ops->pipe_send(VAR_1, VAR_2, VAR_3, VAR_4);
}
