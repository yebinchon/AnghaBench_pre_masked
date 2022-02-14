
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct udphdr {int dummy; } ;
struct sk_buff {scalar_t__ len; scalar_t__ protocol; } ;
struct iphdr {int dummy; } ;
struct TYPE_4__ {scalar_t__ protocol; int ihl; } ;
struct TYPE_3__ {int check; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static u16
FUNC_7(struct sk_buff *VAR_3)
{
 u16 VAR_4 = 0xFFFFu;

 if (VAR_3->len < (VAR_0 + sizeof(struct iphdr)))
  return VAR_4;
 if (VAR_3->protocol != FUNC_0(VAR_1))
  return VAR_4;
 FUNC_4(VAR_3, VAR_0);
 if ((FUNC_1(VAR_3)->protocol != VAR_2) ||
     (VAR_3->len < (VAR_0 +
   (FUNC_1(VAR_3)->ihl << 2) +
   sizeof(struct udphdr)))) {
  FUNC_2(VAR_3);
  return VAR_4;
 }
 FUNC_5(VAR_3,
   VAR_0 + (FUNC_1(VAR_3)->ihl << 2));
 VAR_4 = FUNC_6(VAR_3)->check;
 FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 return VAR_4;
}
