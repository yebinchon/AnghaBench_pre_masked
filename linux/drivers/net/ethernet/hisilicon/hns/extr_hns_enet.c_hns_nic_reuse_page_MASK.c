
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct hnae_ring {size_t next_to_clean; struct hnae_desc* desc; } ;
struct hnae_desc_cb {int page_offset; int reuse_flag; int priv; } ;
struct TYPE_2__ {int size; } ;
struct hnae_desc {TYPE_1__ rx; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct hnae_ring*) ;
 scalar_t__ FUNC_3 (struct hnae_ring*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*,int,int ,int,int,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct sk_buff *VAR_3, int VAR_4,
          struct hnae_ring *VAR_5, int VAR_6,
          struct hnae_desc_cb *VAR_7)
{
 struct hnae_desc *VAR_8;
 u32 VAR_9;
 int VAR_10;
 int VAR_11;
 bool VAR_12;

 VAR_12 = ((VAR_2 < 8192) &&
  FUNC_2(VAR_5) == VAR_0);

 VAR_8 = &VAR_5->desc[VAR_5->next_to_clean];
 VAR_10 = FUNC_4(VAR_8->rx.size);

 if (VAR_12) {
  VAR_9 = FUNC_2(VAR_5);
 } else {
  VAR_9 = FUNC_0(VAR_10, VAR_1);
  VAR_11 = FUNC_3(VAR_5) - FUNC_2(VAR_5);
 }

 FUNC_9(VAR_3, VAR_4, VAR_7->priv, VAR_7->page_offset + VAR_6,
   VAR_10 - VAR_6, VAR_9);


 if (FUNC_10(FUNC_8(VAR_7->priv) != FUNC_6()))
  return;

 if (VAR_12) {

  if (FUNC_5(FUNC_7(VAR_7->priv) == 1)) {

   VAR_7->page_offset ^= VAR_9;

   VAR_7->reuse_flag = 1;

   FUNC_1(VAR_7->priv);
  }
  return;
 }


 VAR_7->page_offset += VAR_9;

 if (VAR_7->page_offset <= VAR_11) {
  VAR_7->reuse_flag = 1;

  FUNC_1(VAR_7->priv);
 }
}
