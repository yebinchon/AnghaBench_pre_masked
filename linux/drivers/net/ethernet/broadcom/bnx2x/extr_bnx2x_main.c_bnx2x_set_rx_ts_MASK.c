
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct bnx2x {int timecounter; } ;
struct TYPE_2__ {int hwtstamp; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ,int) ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,int) ;

void FUNC_7(struct bnx2x *VAR_7, struct sk_buff *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_7);
 u64 VAR_10, VAR_11;

 VAR_10 = FUNC_2(VAR_7, VAR_9 ? VAR_6 :
       VAR_3);
 VAR_10 <<= 32;
 VAR_10 |= FUNC_2(VAR_7, VAR_9 ? VAR_5 :
       VAR_2);


 FUNC_3(VAR_7, VAR_9 ? VAR_4 :
        VAR_1, 0x10000);

 VAR_11 = FUNC_6(&VAR_7->timecounter, VAR_10);

 FUNC_5(VAR_8)->hwtstamp = FUNC_4(VAR_11);

 FUNC_1(VAR_0, "Rx timestamp, timestamp cycles = %llu, ns = %llu\n",
    VAR_10, VAR_11);
}
