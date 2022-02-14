
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usbnet {int dummy; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ csum_offset; scalar_t__ data; scalar_t__ len; } ;
typedef int gfp_t ;
typedef int __wsum ;
typedef int __sum16 ;
struct TYPE_2__ {int nr_frags; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int,void*) ;
 long FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 void* FUNC_7 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_11(struct usbnet *VAR_6,
      struct sk_buff *VAR_7, gfp_t VAR_8)
{
 bool VAR_9 = VAR_7->ip_summed == VAR_0;
 int VAR_10 = VAR_9 ? VAR_2 : VAR_1;
 u32 VAR_11, VAR_12;
 void *VAR_13;


 FUNC_0(FUNC_8(VAR_7)->nr_frags);


 if (FUNC_6(VAR_7, VAR_10)) {



  FUNC_3(VAR_7);
  return ((void*)0);
 }

 VAR_12 = (u32)VAR_7->len;
 VAR_11 = VAR_12 | VAR_3 | VAR_4;

 if (VAR_9) {
  if (!FUNC_10(VAR_7)) {


   long VAR_14 = FUNC_5(VAR_7);
   __wsum VAR_15 = FUNC_2(VAR_7->data + VAR_14,
    VAR_7->len - VAR_14, 0);
   *((__sum16 *)(VAR_7->data + VAR_14
    + VAR_7->csum_offset)) = FUNC_1(VAR_15);

   VAR_9 = 0;
  } else {
   u32 VAR_16 = FUNC_9(VAR_7);
   VAR_13 = FUNC_7(VAR_7, 4);
   FUNC_4(VAR_16, VAR_13);

   VAR_11 += 4;
   VAR_12 += 4;
   VAR_12 |= VAR_5;
  }
 }

 VAR_13 = FUNC_7(VAR_7, 8);
 FUNC_4(VAR_11, VAR_13);
 FUNC_4(VAR_12, VAR_13+4);

 return VAR_7;
}
