
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wsm_hdr {int len; int id; } ;
struct cw1200_common {int device_can_sleep; int wsm_tx_seq; scalar_t__ wsm_enable_wsm_dumps; int hwbus_priv; TYPE_1__* hwbus_ops; int bh_tx; } ;
struct TYPE_2__ {size_t (* align_size ) (int ,size_t) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (struct cw1200_common*,int *,size_t) ;
 int FUNC_8 (struct cw1200_common*) ;
 int FUNC_9 (struct cw1200_common*) ;
 int FUNC_10 (char*,size_t) ;
 int FUNC_11 (char*,size_t) ;
 int FUNC_12 (char*,int ,int *,size_t) ;
 size_t FUNC_13 (int ,size_t) ;
 int FUNC_14 (struct cw1200_common*) ;
 int FUNC_15 (struct cw1200_common*,int **,size_t*,int*) ;
 int FUNC_16 (struct cw1200_common*,int) ;
 int FUNC_17 (struct cw1200_common*,int *) ;

__attribute__((used)) static int FUNC_18(struct cw1200_common *VAR_3,
          int *VAR_4,
          int *VAR_5)
{
 size_t VAR_6;
 u8 *VAR_7;
 int VAR_8;
 struct wsm_hdr *VAR_9;

 if (VAR_3->device_can_sleep) {
  VAR_8 = FUNC_9(VAR_3);
  if (FUNC_1(VAR_8 < 0)) {
   *VAR_4 = 1;
   return 0;
  } else if (VAR_8) {
   VAR_3->device_can_sleep = 0;
  } else {
   *VAR_4 = 1;
   return 0;
  }
 }

 FUNC_14(VAR_3);
 VAR_8 = FUNC_15(VAR_3, &VAR_7, &VAR_6, VAR_5);
 if (VAR_8 <= 0) {
  FUNC_16(VAR_3, 1);
  if (FUNC_1(VAR_8 < 0))
   return VAR_8;
  return 0;
 }

 VAR_9 = (struct wsm_hdr *)VAR_7;
 FUNC_0(VAR_6 < sizeof(*VAR_9));
 FUNC_0(FUNC_5(VAR_9->len) != VAR_6);

 FUNC_6(1, &VAR_3->bh_tx);

 VAR_6 = VAR_3->hwbus_ops->align_size(
  VAR_3->hwbus_priv, VAR_6);


 if (FUNC_2(VAR_6 > VAR_1))
  FUNC_10("Write aligned len: %zu\n", VAR_6);

 VAR_9->id &= FUNC_4(0xffff ^ FUNC_3(VAR_2));
 VAR_9->id |= FUNC_4(FUNC_3(VAR_3->wsm_tx_seq));

 if (FUNC_1(FUNC_7(VAR_3, VAR_7, VAR_6))) {
  FUNC_11("tx blew up, len %zu\n", VAR_6);
  FUNC_16(VAR_3, 1);
  return -1;
 }

 if (VAR_3->wsm_enable_wsm_dumps)
  FUNC_12("--> ",
         VAR_0,
         VAR_7,
         FUNC_5(VAR_9->len));

 FUNC_17(VAR_3, VAR_7);
 VAR_3->wsm_tx_seq = (VAR_3->wsm_tx_seq + 1) & VAR_2;

 if (*VAR_5 > 1) {
  FUNC_8(VAR_3);
  return 1;
 }

 return 0;
}
