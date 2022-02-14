
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; unsigned int data_len; int truesize; } ;
struct pkt_gl {unsigned int tot_len; int va; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct sk_buff*,struct pkt_gl const*,unsigned int) ;
 int FUNC_3 (struct sk_buff*,int ,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_5(const struct pkt_gl *VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4)
{
 struct sk_buff *VAR_5;
 if (VAR_2->tot_len <= VAR_1) {

  VAR_5 = FUNC_1(VAR_2->tot_len, VAR_0);
  if (FUNC_4(!VAR_5))
   goto out;
  FUNC_0(VAR_5, VAR_2->tot_len);
  FUNC_3(VAR_5, VAR_2->va, VAR_2->tot_len);
 } else {
  VAR_5 = FUNC_1(VAR_3, VAR_0);
  if (FUNC_4(!VAR_5))
   goto out;
  FUNC_0(VAR_5, VAR_4);
  FUNC_3(VAR_5, VAR_2->va, VAR_4);

  FUNC_2(VAR_5, VAR_2, VAR_4);
  VAR_5->len = VAR_2->tot_len;
  VAR_5->data_len = VAR_5->len - VAR_4;
  VAR_5->truesize += VAR_5->data_len;
 }

out:
 return VAR_5;
}
