
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct usbnet {int hard_mtu; struct aqc111_data* driver_priv; } ;
struct sk_buff {scalar_t__ len; int truesize; scalar_t__ data; } ;
struct aqc111_data {scalar_t__ rx_checksum; } ;
typedef int desc_hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int FUNC_1 (struct sk_buff*,int ,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct usbnet*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_11(struct usbnet *VAR_13, struct sk_buff *VAR_14)
{
 struct aqc111_data *VAR_15 = VAR_13->driver_priv;
 struct sk_buff *VAR_16 = ((void*)0);
 u32 VAR_17 = 0;
 u64 *VAR_18 = ((void*)0);
 u32 VAR_19 = 0;
 u32 VAR_20 = 0;
 u16 VAR_21 = 0;
 u64 VAR_22 = 0;
 u16 VAR_23 = 0;
 u32 VAR_24 = 0;

 if (!VAR_14)
  goto err;

 if (VAR_14->len == 0)
  goto err;

 VAR_24 = VAR_14->len;

 FUNC_9(VAR_14, VAR_14->len - sizeof(VAR_22));
 VAR_22 = FUNC_4((u64 *)FUNC_8(VAR_14));


 VAR_20 = (VAR_22 & VAR_0) >>
        VAR_1;
 VAR_21 = VAR_22 & VAR_2;
 VAR_19 = VAR_24 - ((VAR_21 + 1) * sizeof(VAR_22));


 if (VAR_19 != VAR_20)
  goto err;


 if (VAR_20 >= VAR_24)
  goto err;

 if (VAR_21 == 0)
  goto err;


 VAR_18 = (u64 *)(VAR_14->data + VAR_20);

 while (VAR_21--) {
  u64 VAR_25 = FUNC_4(VAR_18);
  u32 VAR_26 = 0;
  u32 VAR_27 = 0;

  VAR_27 = (u32)((VAR_25 & VAR_5) >>
     VAR_6);
  VAR_26 = ((VAR_27 + 7) & 0x7FFF8);

  VAR_17 += VAR_26;
  if (VAR_17 > VAR_20 ||
      (VAR_21 == 0 && VAR_17 != VAR_20)) {
   goto err;
  }

  if (VAR_25 & VAR_4 ||
      !(VAR_25 & VAR_7) ||
      VAR_27 > (VAR_13->hard_mtu + VAR_3)) {
   FUNC_6(VAR_14, VAR_26);

   VAR_18++;
   continue;
  }


  VAR_16 = FUNC_5(VAR_14, VAR_11);

  if (!VAR_16)
   goto err;

  VAR_16->len = VAR_27;
  FUNC_6(VAR_16, VAR_3);
  FUNC_7(VAR_16, VAR_16->len);

  VAR_16->truesize = FUNC_0(VAR_16->len);
  if (VAR_15->rx_checksum)
   FUNC_2(VAR_16, VAR_25);

  if (VAR_25 & VAR_8) {
   VAR_23 = VAR_25 >> VAR_9;
   FUNC_1(VAR_16, FUNC_3(VAR_10),
            VAR_23 & VAR_12);
  }

  FUNC_10(VAR_13, VAR_16);
  if (VAR_21 == 0)
   break;

  FUNC_6(VAR_14, VAR_26);


  VAR_18++;

  VAR_16 = ((void*)0);
 }

 return 1;

err:
 return 0;
}
