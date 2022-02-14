
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ vlan; } ;
struct TYPE_12__ {int glort; } ;
struct TYPE_8__ {int timestamp; } ;
union fm10k_rx_desc {TYPE_6__ w; TYPE_5__ d; TYPE_1__ q; } ;
typedef int u16 ;
struct sk_buff {unsigned int len; } ;
struct fm10k_ring {int vid; } ;
struct TYPE_10__ {int glort; } ;
struct TYPE_9__ {scalar_t__ vlan; } ;
struct TYPE_11__ {TYPE_3__ d; TYPE_2__ w; } ;
struct TYPE_14__ {TYPE_4__ fi; int tstamp; } ;


 int VAR_0 ;
 TYPE_7__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*,int ,int) ;
 int FUNC_2 (struct fm10k_ring*,union fm10k_rx_desc*,struct sk_buff*) ;
 int FUNC_3 (struct fm10k_ring*,union fm10k_rx_desc*,struct sk_buff*) ;
 int FUNC_4 (struct fm10k_ring*,union fm10k_rx_desc*,struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_7(struct fm10k_ring *VAR_3,
          union fm10k_rx_desc *VAR_4,
          struct sk_buff *VAR_5)
{
 unsigned int VAR_6 = VAR_5->len;

 FUNC_3(VAR_3, VAR_4, VAR_5);

 FUNC_2(VAR_3, VAR_4, VAR_5);

 FUNC_0(VAR_5)->tstamp = VAR_4->q.timestamp;

 FUNC_0(VAR_5)->fi.w.vlan = VAR_4->w.vlan;

 FUNC_0(VAR_5)->fi.d.glort = VAR_4->d.glort;

 if (VAR_4->w.vlan) {
  u16 VAR_7 = FUNC_6(VAR_4->w.vlan);

  if ((VAR_7 & VAR_2) != VAR_3->vid)
   FUNC_1(VAR_5, FUNC_5(VAR_0), VAR_7);
  else if (VAR_7 & VAR_1)
   FUNC_1(VAR_5, FUNC_5(VAR_0),
            VAR_7 & VAR_1);
 }

 FUNC_4(VAR_3, VAR_4, VAR_5);

 return VAR_6;
}
