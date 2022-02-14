
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int buf_len; int lstatus; } ;
union enetc_rx_bd {TYPE_3__ r; } ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; } ;
struct napi_struct {int dummy; } ;
struct TYPE_8__ {int packets; int bytes; } ;
struct enetc_bdr {int next_to_clean; int bd_count; TYPE_4__ stats; TYPE_2__* ndev; int index; int idr; } ;
struct TYPE_5__ {int rx_errors; int rx_dropped; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;


 int FUNC_0 (int ) ;
 union enetc_rx_bd* FUNC_1 (struct enetc_bdr,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct enetc_bdr*,int,int ,struct sk_buff*) ;
 int FUNC_6 (struct enetc_bdr*) ;
 int FUNC_7 (struct enetc_bdr*,union enetc_rx_bd*,struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct enetc_bdr*,int,int ) ;
 int FUNC_9 (struct enetc_bdr*,struct sk_buff*) ;
 int FUNC_10 (struct enetc_bdr*,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct napi_struct*,struct sk_buff*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct enetc_bdr *VAR_4,
          struct napi_struct *VAR_5, int VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_6(VAR_4);

 VAR_10 = VAR_4->next_to_clean;

 while (FUNC_14(VAR_7 < VAR_6)) {
  union enetc_rx_bd *VAR_11;
  struct sk_buff *VAR_12;
  u32 VAR_13;
  u16 VAR_14;

  if (VAR_9 >= VAR_0) {
   int VAR_15 = FUNC_10(VAR_4, VAR_9);

   VAR_9 -= VAR_15;
  }

  VAR_11 = FUNC_1(*VAR_4, VAR_10);
  VAR_13 = FUNC_13(VAR_11->r.lstatus);
  if (!VAR_13)
   break;

  FUNC_11(VAR_4->idr, FUNC_0(VAR_4->index));
  FUNC_4();
  VAR_14 = FUNC_12(VAR_11->r.buf_len);
  VAR_12 = FUNC_8(VAR_4, VAR_10, VAR_14);
  if (!VAR_12)
   break;

  FUNC_7(VAR_4, VAR_11, VAR_12);

  VAR_9++;
  VAR_11++;
  VAR_10++;
  if (FUNC_16(VAR_10 == VAR_4->bd_count)) {
   VAR_10 = 0;
   VAR_11 = FUNC_1(*VAR_4, 0);
  }

  if (FUNC_16(VAR_13 &
        FUNC_2(VAR_1))) {
   FUNC_3(VAR_12);
   while (!(VAR_13 & VAR_2)) {
    FUNC_4();
    VAR_13 = FUNC_13(VAR_11->r.lstatus);
    VAR_11++;
    VAR_10++;
    if (FUNC_16(VAR_10 == VAR_4->bd_count)) {
     VAR_10 = 0;
     VAR_11 = FUNC_1(*VAR_4, 0);
    }
   }

   VAR_4->ndev->stats.rx_dropped++;
   VAR_4->ndev->stats.rx_errors++;

   break;
  }


  while (!(VAR_13 & VAR_2)) {
   VAR_13 = FUNC_13(VAR_11->r.lstatus);
   VAR_14 = VAR_3;

   if (VAR_13 & VAR_2) {
    FUNC_4();
    VAR_14 = FUNC_12(VAR_11->r.buf_len);
   }

   FUNC_5(VAR_4, VAR_10, VAR_14, VAR_12);

   VAR_9++;
   VAR_11++;
   VAR_10++;
   if (FUNC_16(VAR_10 == VAR_4->bd_count)) {
    VAR_10 = 0;
    VAR_11 = FUNC_1(*VAR_4, 0);
   }
  }

  VAR_8 += VAR_12->len;

  FUNC_9(VAR_4, VAR_12);

  FUNC_15(VAR_5, VAR_12);

  VAR_7++;
 }

 VAR_4->next_to_clean = VAR_10;

 VAR_4->stats.packets += VAR_7;
 VAR_4->stats.bytes += VAR_8;

 return VAR_7;
}
