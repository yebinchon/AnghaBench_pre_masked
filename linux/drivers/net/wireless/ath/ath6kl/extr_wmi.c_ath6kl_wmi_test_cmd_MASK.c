
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi {int dummy; } ;
struct sk_buff {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (size_t) ;
 int FUNC_2 (int ,void*,size_t) ;

int FUNC_3(struct wmi *VAR_3, void *VAR_4, size_t VAR_5)
{
 struct sk_buff *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_6->data, VAR_4, VAR_5);

 VAR_7 = FUNC_0(VAR_3, 0, VAR_6, VAR_2, VAR_1);

 return VAR_7;
}
