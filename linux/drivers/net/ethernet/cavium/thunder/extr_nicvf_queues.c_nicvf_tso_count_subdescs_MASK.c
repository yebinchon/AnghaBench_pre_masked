
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {unsigned int gso_size; int gso_segs; int * frags; } ;
struct sk_buff {unsigned int len; } ;


 long FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 struct skb_shared_info* FUNC_2 (struct sk_buff*) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 unsigned int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0)
{
 struct skb_shared_info *VAR_1 = FUNC_2(VAR_0);
 unsigned int VAR_2 = FUNC_3(VAR_0) + FUNC_4(VAR_0);
 unsigned int VAR_3 = VAR_0->len - VAR_2;
 unsigned int VAR_4 = VAR_1->gso_size;
 long VAR_5 = -1;
 long VAR_6 = FUNC_1(VAR_0) - VAR_2;
 long VAR_7 = 0;
 long VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_1->gso_segs; VAR_10++) {
  unsigned int VAR_11 = 0;


  for (VAR_9++; VAR_11 < VAR_4; VAR_9++) {

   while (VAR_7 >= VAR_6) {
    VAR_5++;
    VAR_6 = FUNC_0(&VAR_1->frags[VAR_5]);
    VAR_7 = 0;
   }


   VAR_8 = VAR_4 - VAR_11;
   if (VAR_8 > VAR_6 - VAR_7)
    VAR_8 = VAR_6 - VAR_7;
   VAR_7 += VAR_8;
   VAR_11 += VAR_8;
  }


  VAR_3 -= VAR_4;
  if (VAR_3 < VAR_4)
   VAR_4 = VAR_3;
 }


 return VAR_9 + VAR_1->gso_segs;
}
