
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wsm_template_frame {TYPE_1__* skb; int rate; int frame_type; } ;
struct cw1200_common {int dummy; } ;
typedef int __le16 ;
struct TYPE_3__ {int len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct cw1200_common*,int ,int *,int ) ;

__attribute__((used)) static inline int FUNC_4(struct cw1200_common *VAR_1,
      struct wsm_template_frame *VAR_2)
{
 int VAR_3;
 u8 *VAR_4 = FUNC_2(VAR_2->skb, 4);
 VAR_4[0] = VAR_2->frame_type;
 VAR_4[1] = VAR_2->rate;
 ((__le16 *)VAR_4)[1] = FUNC_0(VAR_2->skb->len - 4);
 VAR_3 = FUNC_3(VAR_1, VAR_0, VAR_4, VAR_2->skb->len);
 FUNC_1(VAR_2->skb, 4);
 return VAR_3;
}
