
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union hinic_l4 {scalar_t__* hdr; } ;
union hinic_l3 {TYPE_2__* v6; scalar_t__* hdr; TYPE_1__* v4; } ;
typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__* data; } ;
typedef enum hinic_offload_type { ____Placeholder_hinic_offload_type } hinic_offload_type ;
typedef enum hinic_l3_offload_type { ____Placeholder_hinic_l3_offload_type } hinic_l3_offload_type ;
typedef int __be16 ;
struct TYPE_4__ {scalar_t__ nexthdr; } ;
struct TYPE_3__ {int version; scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,int,scalar_t__*,int *) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_5, union hinic_l3 *VAR_6,
     union hinic_l4 *VAR_7,
     enum hinic_offload_type VAR_8,
     enum hinic_l3_offload_type *VAR_9,
     u8 *VAR_10)
{
 u8 *VAR_11;

 if (VAR_6->v4->version == 4) {
  *VAR_9 = (VAR_8 == VAR_4) ?
      VAR_0 :
      VAR_1;
  *VAR_10 = VAR_6->v4->protocol;
 } else if (VAR_6->v4->version == 6) {
  *VAR_9 = VAR_2;
  VAR_11 = VAR_6->hdr + sizeof(*VAR_6->v6);
  *VAR_10 = VAR_6->v6->nexthdr;
  if (VAR_11 != VAR_7->hdr) {
   int VAR_12 = VAR_11 - VAR_5->data;
   __be16 VAR_13;

   FUNC_0(VAR_5, VAR_12, VAR_10, &VAR_13);
  }
 } else {
  *VAR_9 = VAR_3;
  *VAR_10 = 0;
 }
}
