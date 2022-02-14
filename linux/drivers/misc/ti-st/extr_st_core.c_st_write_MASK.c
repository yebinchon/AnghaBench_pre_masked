
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_data_s {int * tty; } ;
struct sk_buff {long len; } ;


 long VAR_0 ;
 int FUNC_0 (char*,long) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct st_data_s*,struct sk_buff*) ;
 int FUNC_3 (struct st_data_s**,int ) ;
 int FUNC_4 (struct st_data_s*) ;
 scalar_t__ FUNC_5 (int) ;

long FUNC_6(struct sk_buff *VAR_1)
{
 struct st_data_s *VAR_2;
 long VAR_3;

 FUNC_3(&VAR_2, 0);
 if (FUNC_5(VAR_1 == ((void*)0) || VAR_2 == ((void*)0)
  || VAR_2->tty == ((void*)0))) {
  FUNC_1("data/tty unavailable to perform write");
  return -VAR_0;
 }

 FUNC_0("%d to be written", VAR_1->len);
 VAR_3 = VAR_1->len;


 FUNC_2(VAR_2, VAR_1);

 FUNC_4(VAR_2);


 return VAR_3;
}
