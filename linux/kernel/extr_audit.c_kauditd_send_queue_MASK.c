
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff_head {int dummy; } ;
typedef struct sk_buff sk_buff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff_head*,struct sk_buff*) ;
 void FUNC_5 (struct sk_buff*) ;
 void FUNC_6 (struct sk_buff*) ;
 void FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_2, u32 VAR_3,
         struct sk_buff_head *VAR_4,
         unsigned int VAR_5,
         void (*VAR_6)(struct sk_buff *VAR_7),
         void (*VAR_8)(struct sk_buff *VAR_9))
{
 int VAR_10 = 0;
 struct sk_buff *VAR_11;
 static unsigned int VAR_12 = 0;




 while ((VAR_11 = FUNC_2(VAR_4))) {

  if (VAR_6)
   (*VAR_6)(VAR_11);


  if (!VAR_2) {
   if (VAR_8)
    (*VAR_8)(VAR_11);
   continue;
  }


  FUNC_3(VAR_11);
  VAR_10 = FUNC_1(VAR_2, VAR_11, VAR_3, 0);
  if (VAR_10 < 0) {

   if (++VAR_12 >= VAR_5 ||
       VAR_10 == -VAR_0 || VAR_10 == -VAR_1) {

    VAR_2 = ((void*)0);
    if (VAR_8)
     (*VAR_8)(VAR_11);
    if (!VAR_6)
     goto out;

    continue;
   } else

    FUNC_4(VAR_4, VAR_11);
  } else {

   FUNC_0(VAR_11);
   VAR_12 = 0;
  }
 }

out:
 return (VAR_10 >= 0 ? 0 : VAR_10);
}
