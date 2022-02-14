
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u8 ;
typedef int u16 ;
struct wsm_hdr {int id; int len; } ;
struct sk_buff {int* data; } ;
struct cw1200_common {int wsm_rx_seq; scalar_t__ wsm_enable_wsm_dumps; int hwbus_priv; TYPE_1__* hwbus_ops; } ;
typedef int __le16 ;
struct TYPE_2__ {size_t (* align_size ) (int ,size_t) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cw1200_common*,int*,size_t) ;
 struct sk_buff* FUNC_4 (size_t) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (char*,size_t,...) ;
 int FUNC_7 (char*,size_t) ;
 int FUNC_8 (char*,int ,int*,size_t) ;
 int FUNC_9 (struct sk_buff*,size_t) ;
 int FUNC_10 (struct sk_buff*,size_t) ;
 size_t FUNC_11 (int ,size_t) ;
 int FUNC_12 (struct cw1200_common*,int*,size_t) ;
 int FUNC_13 (struct cw1200_common*,int,struct wsm_hdr*,struct sk_buff**) ;
 int FUNC_14 (struct cw1200_common*,int) ;

__attribute__((used)) static int FUNC_15(struct cw1200_common *VAR_3,
          uint16_t *VAR_4,
          int *VAR_5)
{
 size_t VAR_6 = 0;
 struct sk_buff *VAR_7 = ((void*)0);
 struct wsm_hdr *VAR_8;
 size_t VAR_9;
 u16 VAR_10;
 u8 VAR_11;
 int VAR_12 = 1;

 size_t VAR_13;
 u8 *VAR_14;

 VAR_6 = (*VAR_4 & VAR_2) * 2;
 if (!VAR_6)
  return 0;

 if (FUNC_0((VAR_6 < sizeof(struct wsm_hdr)) ||
      (VAR_6 > VAR_1))) {
  FUNC_6("Invalid read len: %zu (%04x)",
    VAR_6, *VAR_4);
  goto err;
 }




 VAR_6 = VAR_6 + 2;

 VAR_13 = VAR_3->hwbus_ops->align_size(
  VAR_3->hwbus_priv, VAR_6);


 if (FUNC_1(VAR_13 > VAR_1)) {
  FUNC_6("Read aligned len: %zu\n",
    VAR_13);
 }

 VAR_7 = FUNC_4(VAR_13);
 if (FUNC_0(!VAR_7))
  goto err;

 FUNC_10(VAR_7, 0);
 FUNC_9(VAR_7, VAR_6);
 VAR_14 = VAR_7->data;
 if (FUNC_0(!VAR_14))
  goto err;

 if (FUNC_0(FUNC_3(VAR_3, VAR_14, VAR_13))) {
  FUNC_7("rx blew up, len %zu\n", VAR_13);
  goto err;
 }


 *VAR_4 = FUNC_2(
  ((__le16 *)VAR_14)[VAR_13 / 2 - 1]);

 VAR_8 = (struct wsm_hdr *)VAR_14;
 VAR_9 = FUNC_2(VAR_8->len);
 if (FUNC_0(VAR_9 > VAR_6))
  goto err;

 if (VAR_3->wsm_enable_wsm_dumps)
  FUNC_8("<-- ",
         VAR_0,
         VAR_14, VAR_9);

 VAR_10 = FUNC_2(VAR_8->id) & 0xFFF;
 VAR_11 = (FUNC_2(VAR_8->id) >> 13) & 7;

 FUNC_10(VAR_7, VAR_9);

 if (VAR_10 == 0x0800) {
  FUNC_12(VAR_3,
         &VAR_14[sizeof(*VAR_8)],
         VAR_9 - sizeof(*VAR_8));
  goto err;
 } else if (!VAR_12) {
  if (FUNC_0(VAR_11 != VAR_3->wsm_rx_seq))
   goto err;
 }
 VAR_3->wsm_rx_seq = (VAR_11 + 1) & 7;
 VAR_12 = 0;

 if (VAR_10 & 0x0400) {
  int VAR_15 = FUNC_14(VAR_3, 1);
  if (FUNC_0(VAR_15 < 0))
   return VAR_15;
  else if (VAR_15 > 0)
   *VAR_5 = 1;
 }


 if (FUNC_0(FUNC_13(VAR_3, VAR_10, VAR_8, &VAR_7)))
  goto err;

 if (VAR_7) {
  FUNC_5(VAR_7);
  VAR_7 = ((void*)0);
 }

 return 0;

err:
 if (VAR_7) {
  FUNC_5(VAR_7);
  VAR_7 = ((void*)0);
 }
 return -1;
}
