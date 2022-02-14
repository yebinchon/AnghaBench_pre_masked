
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int tls_handle ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int port_id; } ;
struct TYPE_4__ {TYPE_1__ port_info; } ;
struct metadata_dst {scalar_t__ type; TYPE_2__ u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,scalar_t__*,int) ;
 int FUNC_2 (int ,unsigned char*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 struct metadata_dst* FUNC_4 (struct sk_buff*) ;
 unsigned char* FUNC_5 (struct sk_buff*,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5, u64 VAR_6)
{
 struct metadata_dst *VAR_7 = FUNC_4(VAR_5);
 unsigned char *VAR_8;
 u32 VAR_9 = 0;
 int VAR_10;

 if (FUNC_0(!VAR_7 && !VAR_6))
  return 0;
 if (FUNC_6(VAR_7 && VAR_7->type != VAR_1)) {
  if (!VAR_6)
   return 0;
  VAR_7 = ((void*)0);
 }

 VAR_10 = 4 + !!VAR_7 * 4 + !!VAR_6 * 8;

 if (FUNC_6(FUNC_3(VAR_5, VAR_10)))
  return -VAR_0;

 VAR_9 = 0;
 VAR_8 = FUNC_5(VAR_5, VAR_10) + VAR_10;
 if (VAR_7) {
  VAR_8 -= 4;
  FUNC_2(VAR_7->u.port_info.port_id, VAR_8);
  VAR_9 = VAR_4;
 }
 if (VAR_6) {



  VAR_8 -= 8;
  FUNC_1(VAR_8, &VAR_6, sizeof(VAR_6));
  VAR_9 <<= VAR_3;
  VAR_9 |= VAR_2;
 }

 VAR_8 -= 4;
 FUNC_2(VAR_9, VAR_8);

 return VAR_10;
}
