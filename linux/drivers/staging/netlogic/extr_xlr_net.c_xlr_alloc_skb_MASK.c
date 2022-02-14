
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,struct sk_buff**,int) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static inline unsigned char *FUNC_3(void)
{
 struct sk_buff *VAR_3;
 int VAR_4 = sizeof(struct sk_buff *);
 unsigned char *VAR_5;


 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_5 = VAR_3->data;
 FUNC_2(VAR_3, VAR_1);
 FUNC_1(VAR_5, &VAR_3, VAR_4);

 return VAR_3->data;
}
