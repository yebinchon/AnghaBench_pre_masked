
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sk; } ;
struct tun_file {TYPE_1__ socket; } ;
struct sk_buff {int dummy; } ;
struct page_frag {int offset; int page; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct tun_file *VAR_1,
           struct page_frag *VAR_2, char *VAR_3,
           int VAR_4, int VAR_5, int VAR_6)
{
 struct sk_buff *VAR_7 = FUNC_1(VAR_3, VAR_4);

 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_4(VAR_7, VAR_6);
 FUNC_3(VAR_7, VAR_5);
 FUNC_5(VAR_7, VAR_1->socket.sk);

 FUNC_2(VAR_2->page);
 VAR_2->offset += VAR_4;

 return VAR_7;
}
