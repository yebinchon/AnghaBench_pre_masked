
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int len; int * data; } ;
struct rtllib_info_element {int dummy; } ;
struct rtllib_authentication {int status; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,char*,int) ;

__attribute__((used)) static inline u16 FUNC_3(struct net_device *VAR_3, struct sk_buff *VAR_4,
        u8 **VAR_5, int *VAR_6)
{
 struct rtllib_authentication *VAR_7;
 u8 *VAR_8;

 if (VAR_4->len < (sizeof(struct rtllib_authentication) -
     sizeof(struct rtllib_info_element))) {
  FUNC_2(VAR_3, "invalid len in auth resp: %d\n", VAR_4->len);
  return 0xcafe;
 }
 *VAR_5 = ((void*)0);
 VAR_7 = (struct rtllib_authentication *) VAR_4->data;
 if (VAR_4->len > (sizeof(struct rtllib_authentication) + 3)) {
  VAR_8 = VAR_4->data + sizeof(struct rtllib_authentication);

  if (*(VAR_8++) == VAR_2) {
   *VAR_6 = *(VAR_8++);
   *VAR_5 = FUNC_0(VAR_8, *VAR_6, VAR_1);
   if (!*VAR_5)
    return -VAR_0;
  }
 }
 return FUNC_1(VAR_7->status);
}
